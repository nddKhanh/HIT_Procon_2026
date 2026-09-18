#include "solver/SupplyPlanner.hpp"
#include "solver/MoveSimulator.hpp"
#include "solver/PathFinder.hpp"
#include <algorithm>
#include <climits>
#include <tuple>

// =============================================================================
// Tìm xe Patrol đang cần xăng nhất
// =============================================================================

int SupplyPlanner::findTargetPatrol(
    const std::vector<Agent>& agents,
    int excludeIdx,
    const GameConfig& config,
    const Map& map,
    const std::set<int>& collectedBrands,
    const std::vector<int>& remainingStock,
    Position supplyPos
) {
    int bestIdx = -1;
    int bestScore = INT_MIN;

    for (size_t i = 0; i < agents.size(); ++i) {
        if (static_cast<int>(i) == excludeIdx) continue;
        if (agents[i].kind != 0) continue; // Chỉ xét xe Patrol

        int fuelPercent = config.fuelLimit > 0
            ? agents[i].fuel * 100 / config.fuelLimit : 100;
        int fuelUrgency = fuelPercent <= 10 ? 500
            : fuelPercent <= 25 ? 400
            : fuelPercent <= 50 ? 300
            : fuelPercent <= 75 ? 100 : 0;

        Position patrolPos = map.posToCoordinate(agents[i].pos);
        int spotsInRange = 0;
        bool hasNewBrandNearby = false;
        for (size_t si = 0; si < config.spots.size(); ++si) {
            if (si >= remainingStock.size() || remainingStock[si] <= 0) continue;
            auto route = PathFinder::findPath(patrolPos,
                map.posToCoordinate(config.spots[si].pos), map, agents[i].fuel, 1.0);
            if (!route.found) continue;
            ++spotsInRange;
            hasNewBrandNearby |= !collectedBrands.count(config.spots[si].brand);
        }

        auto supplyRoute = PathFinder::findPath(supplyPos, patrolPos, map);
        if (!supplyRoute.found) continue;
        int score = fuelUrgency + (hasNewBrandNearby ? 600 : 0)
            + 50 * spotsInRange - 10 * supplyRoute.totalSteps;
        if (score > bestScore) {
            bestScore = score;
            bestIdx = static_cast<int>(i);
        }
    }
    return bestIdx;
}

// =============================================================================
// Lập kế hoạch cho 1 xe Supply trong 1 ngày
// =============================================================================

std::vector<int> SupplyPlanner::planDay(
    const GameConfig& config,
    const Map& map,
    const Agent& supplyAgent,
    const std::vector<Agent>& allAgents,
    int supplyIdx,
    int daySteps,
    const std::vector<int>& patrolTargetSpots,
    const std::vector<Position>& patrolTargetPositions,
    const std::vector<std::vector<int>>& patrolActions,
    int& plannedTargetPatrol,
    int& plannedTargetSpot,
    Position& plannedTargetPos,
    std::vector<int>& plannedStepSpots,
    std::vector<Position>& plannedStepPositions,
    const std::set<int>& collectedBrands,
    const std::vector<int>& remainingStock
) {
    plannedTargetPatrol = -1;
    plannedTargetSpot = -1;
    plannedTargetPos = map.posToCoordinate(supplyAgent.pos);
    plannedStepSpots.assign(daySteps, -1);
    plannedStepPositions.assign(daySteps, plannedTargetPos);

    Position agentPos = map.posToCoordinate(supplyAgent.pos);
    int targetPatrol = -1;
    Position targetPos = agentPos;
    std::tuple<int, int, int> bestRank{-1, INT_MIN, INT_MIN};
    for (int i = 0; i < static_cast<int>(allAgents.size()); ++i) {
        if (i == supplyIdx || allAgents[i].kind != 0 ||
            i >= static_cast<int>(patrolActions.size())) continue;
        Position finalPos = map.posToCoordinate(allAgents[i].pos);
        int readyAt = 0;
        int projectedFuel = allAgents[i].fuel;
        for (int action : patrolActions[i]) {
            if (action < 0) break;
            readyAt += map.getTravelTime(finalPos);
            projectedFuel -= map.getFuelCost(finalPos);
            finalPos = map.nextPosition(finalPos, action);
        }
        int deficit = config.fuelLimit - projectedFuel;
        if (deficit <= 0) continue;
        auto supplyPath = PathFinder::findPath(agentPos, finalPos, map, INT_MAX);
        if (!supplyPath.found) continue;
        int overlapAt = std::max(supplyPath.totalSteps, readyAt);
        if (overlapAt + 1 > daySteps) continue;
        auto rank = std::make_tuple(deficit, -overlapAt, -supplyPath.totalSteps);
        if (rank > bestRank) {
            bestRank = rank;
            targetPatrol = i;
            targetPos = finalPos;
        }
    }
    if (targetPatrol < 0) {
        targetPatrol = findTargetPatrol(allAgents, supplyIdx, config, map,
                                        collectedBrands, remainingStock, agentPos);
        if (targetPatrol >= 0)
            targetPos = map.posToCoordinate(allAgents[targetPatrol].pos);
    }
    if (targetPatrol < 0) return {-daySteps};
    plannedTargetPatrol = targetPatrol;

    int patrolTarget = targetPatrol < static_cast<int>(patrolTargetSpots.size())
        ? patrolTargetSpots[targetPatrol] : -1;
    if (patrolTarget >= 0 &&
        targetPatrol < static_cast<int>(patrolTargetPositions.size())) {
        targetPos = patrolTargetPositions[targetPatrol];
        plannedTargetSpot = patrolTarget;
    }
    plannedTargetPos = targetPos;
    std::fill(plannedStepSpots.begin(), plannedStepSpots.end(), plannedTargetSpot);
    std::fill(plannedStepPositions.begin(), plannedStepPositions.end(), plannedTargetPos);

    auto path = PathFinder::findPath(agentPos, targetPos, map, INT_MAX);
    if (!path.found) return {-daySteps};
    auto sim = MoveSimulator::simulate(path.directions, map, agentPos,
                                       daySteps, INT_MAX, false);
    std::vector<int> actions = sim.actions;
    MoveSimulator::padWithWait(actions, sim.stepsUsed, daySteps);
    return actions;
}
