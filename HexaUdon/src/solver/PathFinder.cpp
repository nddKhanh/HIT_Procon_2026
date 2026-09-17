#include "solver/PathFinder.hpp"
#include <queue>
#include <algorithm>

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

    // Trace back path
    int cur = goalPos;
    while (cur != sourcePos) {
        result.directions.push_back(prevDir[cur]);
        cur = prevCell[cur];
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
    sssp.sourcePos = map.coordinateToPos(source);

    using PDI = std::pair<double, int>;
    std::priority_queue<PDI, std::vector<PDI>, std::greater<PDI>> pq;
    std::vector<double> weightedDist(totalCells, static_cast<double>(INT_MAX));

    sssp.dist[sssp.sourcePos] = 0;
    sssp.fuel[sssp.sourcePos] = 0;
    weightedDist[sssp.sourcePos] = 0.0;
    pq.push({0.0, sssp.sourcePos});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > weightedDist[u]) continue;
        if (earlyStopPos >= 0 && u == earlyStopPos) break;

        Position uPos = map.posToCoordinate(u);
        int travelTime = map.getTravelTime(u);
        int fuelCost = map.getFuelCost(u);

        for (int dir = 0; dir < 6; ++dir) {
            Position nPos = map.nextPosition(uPos, dir);
            if (!map.canMove(nPos)) continue;

            int v = map.coordinateToPos(nPos);
            int newDist = sssp.dist[u] + travelTime;
            int newFuel = sssp.fuel[u] + fuelCost;
            double newWeight = weightedDist[u] + travelTime + fuelWeight * fuelCost;

            if (newFuel > maxFuel) continue;

            if (newWeight < weightedDist[v] ||
                (newWeight == weightedDist[v] && newDist < sssp.dist[v])) {
                weightedDist[v] = newWeight;
                sssp.dist[v] = newDist;
                sssp.fuel[v] = newFuel;
                sssp.prevDir[v] = dir;
                sssp.prevCell[v] = u;
                pq.push({newWeight, v});
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
