#include "solver/PathFinder.hpp"
#include <queue>
#include <algorithm>
#include <cmath>

// =============================================================================
// SSSPResult::extractPath — Extract path from SSSP result to a specific goal
// =============================================================================

PathResult SSSPResult::extractPath(int goalPos) const {
    PathResult result;

    if (goalPos < 0 || goalPos >= static_cast<int>(dist.size())) {
        result.found = false;
        return result;
    }

    if (dist[goalPos] == INT_MAX) {
        result.found = false;
        return result;
    }

    if (goalPos == sourcePos) {
        result.found = true;
        result.totalSteps = 0;
        result.totalFuel = 0;
        return result;
    }

    result.found = true;
    result.totalSteps = dist[goalPos];
    result.totalFuel = fuel[goalPos];

    if (!bestLabel.empty() && bestLabel[goalPos] >= 0) {
        for (int label = bestLabel[goalPos]; labelPrev[label] >= 0;
             label = labelPrev[label]) {
            result.directions.push_back(labelDir[label]);
        }
    } else {
        int cur = goalPos;
        while (cur != sourcePos) {
            result.directions.push_back(prevDir[cur]);
            cur = prevCell[cur];
        }
    }
    std::reverse(result.directions.begin(), result.directions.end());

    return result;
}

// =============================================================================
// Core Dijkstra implementation (shared by findPath and computeSSSP)
// =============================================================================

static SSSPResult runDijkstra(
    Position source,
    const Map& map,
    int maxFuel,
    double fuelWeight,
    int earlyStopPos = -1  // -1 = explore all, >= 0 = stop when this pos is reached
) {
    int H = map.getHeight();
    int W = map.getWidth();
    int totalCells = H * W;

    SSSPResult sssp;
    sssp.dist.assign(totalCells, INT_MAX);
    sssp.fuel.assign(totalCells, INT_MAX);
    sssp.prevDir.assign(totalCells, -1);
    sssp.prevCell.assign(totalCells, -1);
    if (!map.canMove(source)) return sssp;
    sssp.sourcePos = map.coordinateToPos(source);
    sssp.bestLabel.assign(totalCells, -1);

    struct QueueItem { double weight; int label; };
    auto greater = [](const QueueItem& a, const QueueItem& b) {
        return a.weight > b.weight;
    };
    std::priority_queue<QueueItem, std::vector<QueueItem>, decltype(greater)> pq(greater);
    std::vector<std::vector<int>> frontier(totalCells);
    std::vector<char> active;
    auto addLabel = [&](int cell, int steps, int fuel, int prev, int dir) {
        int id = static_cast<int>(sssp.labelCell.size());
        sssp.labelCell.push_back(cell);
        sssp.labelSteps.push_back(steps);
        sssp.labelFuel.push_back(fuel);
        sssp.labelPrev.push_back(prev);
        sssp.labelDir.push_back(dir);
        active.push_back(true);
        frontier[cell].push_back(id);
        pq.push({steps + fuelWeight * fuel, id});
        return id;
    };
    addLabel(sssp.sourcePos, 0, 0, -1, -1);

    while (!pq.empty()) {
        auto [weight, label] = pq.top();
        pq.pop();
        if (!active[label]) continue;
        int u = sssp.labelCell[label];
        int steps = sssp.labelSteps[label];
        int usedFuel = sssp.labelFuel[label];
        if (earlyStopPos >= 0 && u == earlyStopPos) break;

        Position uPos = map.posToCoordinate(u);
        int travelTime = map.getTravelTime(u);
        int fuelCost = map.getFuelCost(u);

        for (int dir = 0; dir < 6; ++dir) {
            Position nPos = map.nextPosition(uPos, dir);
            if (!map.canMove(nPos)) continue;

            int v = map.coordinateToPos(nPos);
            int newDist = steps + travelTime;
            int newFuel = usedFuel + fuelCost;

            if (newFuel > maxFuel) continue;

            bool dominated = false;
            for (int old : frontier[v]) {
                if (!active[old]) continue;
                if (sssp.labelSteps[old] <= newDist && sssp.labelFuel[old] <= newFuel) {
                    dominated = true;
                    break;
                }
            }
            if (dominated) continue;
            for (int old : frontier[v]) {
                if (active[old] && newDist <= sssp.labelSteps[old] &&
                    newFuel <= sssp.labelFuel[old]) active[old] = false;
            }
            int added = addLabel(v, newDist, newFuel, label, dir);
            int activeCount = 0;
            for (int old : frontier[v]) activeCount += active[old];
            if (activeCount > 16) {
                // ponytail: bound the Pareto frontier so a pathological map
                // cannot consume the server response window. Upgrade to a
                // deadline-aware global label budget if fuel limits grow.
                int worst = added;
                double worstWeight = -1.0;
                for (int old : frontier[v]) {
                    if (!active[old]) continue;
                    double oldWeight = sssp.labelSteps[old] +
                                       fuelWeight * sssp.labelFuel[old];
                    if (oldWeight > worstWeight) {
                        worstWeight = oldWeight;
                        worst = old;
                    }
                }
                active[worst] = false;
            }
        }
    }

    for (int cell = 0; cell < totalCells; ++cell) {
        double bestWeight = static_cast<double>(INT_MAX);
        for (int label : frontier[cell]) {
            if (!active[label]) continue;
            double weight = sssp.labelSteps[label] + fuelWeight * sssp.labelFuel[label];
            if (weight < bestWeight ||
                (weight == bestWeight && sssp.labelSteps[label] < sssp.dist[cell])) {
                bestWeight = weight;
                sssp.bestLabel[cell] = label;
                sssp.dist[cell] = sssp.labelSteps[label];
                sssp.fuel[cell] = sssp.labelFuel[label];
                sssp.prevDir[cell] = sssp.labelDir[label];
                sssp.prevCell[cell] = sssp.labelPrev[label] < 0 ? -1 :
                    sssp.labelCell[sssp.labelPrev[label]];
            }
        }
    }

    return sssp;
}

// =============================================================================
// PathFinder::findPath — Point-to-point shortest path (with early stop)
// =============================================================================

PathResult PathFinder::findPath(
    Position start,
    Position goal,
    const Map& map,
    int maxFuel,
    double fuelWeight
) {
    if (start == goal) {
        PathResult result;
        result.found = true;
        return result;
    }

    int goalIdx = map.coordinateToPos(goal);
    auto sssp = runDijkstra(start, map, maxFuel, fuelWeight, goalIdx);
    return sssp.extractPath(goalIdx);
}

// =============================================================================
// PathFinder::computeSSSP — Full single-source shortest path (no early stop)
// =============================================================================

SSSPResult PathFinder::computeSSSP(
    Position source,
    const Map& map,
    int maxFuel,
    double fuelWeight
) {
    return runDijkstra(source, map, maxFuel, fuelWeight, -1);
}

const SSSPResult& PathCache::get(Position source, int maxFuel, double fuelWeight) {
    auto key = std::make_tuple(map_.coordinateToPos(source), maxFuel,
                               static_cast<int>(std::lround(fuelWeight * 1000.0)));
    auto [it, inserted] = cache_.try_emplace(key);
    if (inserted) it->second = PathFinder::computeSSSP(source, map_, maxFuel, fuelWeight);
    return it->second;
}
