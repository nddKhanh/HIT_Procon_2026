#include "solver/PathFinder.hpp"
#include <queue>
#include <algorithm>
#include <cmath>
#include <set>
#include <limits>

// =============================================================================
// SSSPResult::extractPath — Extract path from SSSP result to a specific goal
// =============================================================================

PathResult SSSPResult::extractPath(int goalPos, int maxSteps) const {
    PathResult result;

    if (maxSteps < 0 || goalPos < 0 || goalPos >= static_cast<int>(dist.size())) {
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

    int selected = bestLabel.empty() ? -1 : bestLabel[goalPos];
    if (dist[goalPos] > maxSteps) {
        selected = -1;
        double bestWeight = std::numeric_limits<double>::infinity();
        if (goalPos < static_cast<int>(feasibleLabels.size()))
            for (int label : feasibleLabels[goalPos]) {
                if (labelSteps[label] > maxSteps) continue;
                double weight = labelSteps[label] + fuelWeight * labelFuel[label];
                if (weight < bestWeight || (weight == bestWeight &&
                    (selected < 0 || labelSteps[label] < labelSteps[selected]))) {
                    bestWeight = weight;
                    selected = label;
                }
            }
        if (selected < 0) return result;
    }
    result.found = true;
    result.totalSteps = selected < 0 ? dist[goalPos] : labelSteps[selected];
    result.totalFuel = selected < 0 ? fuel[goalPos] : labelFuel[selected];
    if (selected >= 0) {
        for (int label = selected; labelPrev[label] >= 0;
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
    sssp.fuelWeight = fuelWeight;
    sssp.feasibleLabels.resize(totalCells);
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
            sssp.feasibleLabels[cell].push_back(label);
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
    double fuelWeight,
    int maxSteps
) {
    if (maxSteps < 0) return {};
    if (start == goal) {
        PathResult result;
        result.found = true;
        return result;
    }

    int goalIdx = map.coordinateToPos(goal);
    auto sssp = runDijkstra(start, map, maxFuel, fuelWeight, maxSteps == INT_MAX ? goalIdx : -1);
    return sssp.extractPath(goalIdx, maxSteps);
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

PathResult PathFinder::findPathViaSpots(Position start, Position goal, const Map& map,
    int maxFuel, int maxSteps, const std::vector<double>& rewards, PathCache* cache, bool timeBounded, double fuelWeight) {
    PathCache localCache(map);
    auto& paths = cache ? *cache : localCache;
    const int goalCell = map.coordinateToPos(goal);
    const auto& fromStart = paths.get(start, maxFuel, fuelWeight);
    auto best = fromStart.extractPath(goalCell, timeBounded ? maxSteps : INT_MAX);
    if (!best.found) best = fromStart.extractPath(goalCell);
    // Preserve the existing partial, multi-day route when today's target is out of reach.
    if (!best.found || best.totalSteps > maxSteps || start == goal) return best;
    const double baseCost = best.totalSteps + fuelWeight * best.totalFuel;
    // Bound the extra weighted cost. At the default weight this permits one
    // additional step+fuel unit for a high-priority type; weight zero is the
    // final-day speed policy. Both physical budgets remain mandatory.
    constexpr double maxReward = 1.49;
    auto rank = [&](const PathResult& route) {
        auto pos = start;
        std::set<int> collected{map.coordinateToPos(start)};
        double reward = 0;
        for (int dir : route.directions) {
            pos = map.nextPosition(pos, dir);
            int cell = map.coordinateToPos(pos);
            // The target intentionally consumes the same reward cap: a valuable
            // target leaves no budget for a detour, while a routine target can.
            if (cell >= 0 && cell < static_cast<int>(rewards.size()) &&
                collected.insert(cell).second) reward += rewards[cell];
        }
        double cost = route.totalSteps + fuelWeight * route.totalFuel;
        return std::make_tuple(cost - std::min(maxReward, reward), cost,
                               -reward, route.totalSteps, route.totalFuel);
    };
    auto bestRank = rank(best);
    // ponytail: one optional waypoint per route, not an exhaustive prize-collecting
    // search; extend to multiple waypoints only if replay gains justify the cost.
    for (int cell = 0; cell < map.getHeight() * map.getWidth() &&
                       cell < static_cast<int>(rewards.size()); ++cell) {
        if (rewards[cell] <= 0 || cell == map.coordinateToPos(start) ||
            cell == map.coordinateToPos(goal)) continue;
        auto first = fromStart.extractPath(cell, timeBounded ? maxSteps : INT_MAX);
        if (!first.found || first.totalSteps > maxSteps ||
            first.totalSteps + fuelWeight * first.totalFuel > baseCost + maxReward) continue;
        const auto waypoint = map.posToCoordinate(cell);
        // Every hex move changes each coordinate by at most one and consumes
        // at least one step and one fuel. Reject impossible detours before
        // building another Pareto tree; this bound never removes a feasible
        // candidate within the existing reward cap (including on jammed roads).
        const int minMoves = std::max(std::abs(waypoint.x - goal.x),
                                      std::abs(waypoint.y - goal.y));
        if (first.totalSteps + minMoves > maxSteps ||
            first.totalFuel + minMoves > maxFuel ||
            (fuelWeight >= 0 && first.totalSteps + fuelWeight * first.totalFuel +
                minMoves * (1.0 + fuelWeight) > baseCost + maxReward)) continue;
        auto second = paths.get(waypoint, maxFuel - first.totalFuel, fuelWeight)
                          .extractPath(goalCell, timeBounded ? maxSteps - first.totalSteps : INT_MAX);
        if (!second.found) continue;
        first.totalSteps += second.totalSteps;
        first.totalFuel += second.totalFuel;
        if (first.totalSteps > maxSteps || first.totalFuel > maxFuel ||
            first.totalSteps + fuelWeight * first.totalFuel > baseCost + maxReward) continue;
        first.directions.insert(first.directions.end(), second.directions.begin(), second.directions.end());
        auto candidateRank = rank(first);
        if (candidateRank < bestRank) {
            bestRank = candidateRank;
            best = std::move(first);
        }
    }
    // Two collected spots on the same efficient route can beat either one
    // alone. Use this extra search only on compact/regional maps with the
    // final-day speed policy; large-map lookahead lost Daily with this branch.
    if (fuelWeight > 0.0 || map.getWidth() * map.getHeight() > 24 * 24)
        return best;
    // ponytail: six promising cells bound the additional SSSP work.
    struct RewardCell { int cell; double reward; };
    std::vector<RewardCell> candidates;
    for (int cell = 0; cell < map.getHeight() * map.getWidth() &&
                       cell < static_cast<int>(rewards.size()); ++cell) {
        if (rewards[cell] > 0 && cell != map.coordinateToPos(start) && cell != goalCell)
            candidates.push_back({cell, rewards[cell]});
    }
    std::stable_sort(candidates.begin(), candidates.end(),
        [](const RewardCell& a, const RewardCell& b) { return a.reward > b.reward; });
    if (candidates.size() < 2) return best;
    if (candidates.size() > 6) candidates.resize(6);
    for (const auto& firstCell : candidates) {
        auto first = fromStart.extractPath(firstCell.cell,
            timeBounded ? maxSteps : INT_MAX);
        if (!first.found || first.totalSteps >= maxSteps || first.totalFuel >= maxFuel)
            continue;
        const auto firstPos = map.posToCoordinate(firstCell.cell);
        const int minHome = std::max(std::abs(firstPos.x - goal.x),
                                     std::abs(firstPos.y - goal.y));
        if (first.totalSteps + minHome > maxSteps ||
            first.totalFuel + minHome > maxFuel ||
            first.totalSteps + fuelWeight * first.totalFuel +
                minHome * (1.0 + fuelWeight) > baseCost + maxReward)
            continue;
        const auto& fromFirst = paths.get(firstPos,
                                          maxFuel - first.totalFuel, fuelWeight);
        for (const auto& secondCell : candidates) {
            if (secondCell.cell == firstCell.cell) continue;
            auto middle = fromFirst.extractPath(secondCell.cell,
                timeBounded ? maxSteps - first.totalSteps : INT_MAX);
            if (!middle.found || first.totalSteps + middle.totalSteps >= maxSteps ||
                first.totalFuel + middle.totalFuel >= maxFuel) continue;
            const auto& fromSecond = paths.get(map.posToCoordinate(secondCell.cell),
                maxFuel - first.totalFuel - middle.totalFuel, fuelWeight);
            auto last = fromSecond.extractPath(goalCell,
                timeBounded ? maxSteps - first.totalSteps - middle.totalSteps : INT_MAX);
            if (!last.found) continue;
            PathResult route = first;
            route.totalSteps += middle.totalSteps + last.totalSteps;
            route.totalFuel += middle.totalFuel + last.totalFuel;
            if (route.totalSteps > maxSteps || route.totalFuel > maxFuel ||
                route.totalSteps + fuelWeight * route.totalFuel > baseCost + maxReward ||
                route.totalSteps + fuelWeight * route.totalFuel > baseCost * 1.35)
                continue;
            route.directions.insert(route.directions.end(),
                                    middle.directions.begin(), middle.directions.end());
            route.directions.insert(route.directions.end(),
                                    last.directions.begin(), last.directions.end());
            auto candidateRank = rank(route);
            if (candidateRank < bestRank) {
                bestRank = candidateRank;
                best = std::move(route);
            }
        }
    }
    return best;
}
