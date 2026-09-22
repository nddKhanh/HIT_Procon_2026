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
    Position supplyPos,
    const std::set<int>& excludedPatrols
) {
    int bestIdx = -1;
    int bestScore = INT_MIN;

    for (size_t i = 0; i < agents.size(); ++i) {
        if (static_cast<int>(i) == excludeIdx) continue;
        if (agents[i].kind != 0) continue; // Chỉ xét xe Patrol
        if (excludedPatrols.count(static_cast<int>(i))) continue;

        int deficit = config.fuelLimit - agents[i].fuel;
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
    const std::vector<int>& remainingStock,
    const std::set<int>& excludedPatrols
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
            i >= static_cast<int>(patrolActions.size()) || excludedPatrols.count(i)) continue;

        Position routePos = map.posToCoordinate(allAgents[i].pos);
        int readyAt = 0;
        int projectedFuel = allAgents[i].fuel;

        struct RoutePoint { Position pos; int readyAt; int projectedFuel; };
        std::vector<RoutePoint> routePoints = {{routePos, 0, projectedFuel}};

        for (int action : patrolActions[i]) {
            if (action < 0) break;
            readyAt += map.getTravelTime(routePos);
            projectedFuel -= map.getFuelCost(routePos);
            routePos = map.nextPosition(routePos, action);
            routePoints.push_back({routePos, readyAt, projectedFuel});
        }

        int deficit = config.fuelLimit - routePoints.back().projectedFuel;
        if (deficit <= 0) continue;

        // ponytail: use the stable end-of-prefix wait as the only rendezvous;
        // upgrade to timed intermediate stops when a route-point beam is justified.
        const auto& point = routePoints.back();
        auto supplyPath = PathFinder::findPath(agentPos, point.pos, map, INT_MAX);
        if (!supplyPath.found) continue;
        int overlapAt = std::max(supplyPath.totalSteps, point.readyAt);
        if (overlapAt + 1 > daySteps) continue;
        int extensionPotential = 0;
        int usableSteps = daySteps - overlapAt - 1;
        auto reachable = PathFinder::computeSSSP(point.pos, map, config.fuelLimit, 1.0);
        for (size_t si = 0; si < config.spots.size(); ++si) {
            if (si >= remainingStock.size() || remainingStock[si] <= 0) continue;
            auto route = reachable.extractPath(config.spots[si].pos);
            extensionPotential += route.found && route.totalSteps <= usableSteps;
        }
        auto rank = std::make_tuple(deficit, extensionPotential, usableSteps);
        if (rank > bestRank) {
            bestRank = rank;
            targetPatrol = i;
            targetPos = point.pos;
        }
    }
    if (targetPatrol < 0) {
        targetPatrol = findTargetPatrol(allAgents, supplyIdx, config, map,
                                        collectedBrands, remainingStock, agentPos,
                                        excludedPatrols);
        if (targetPatrol >= 0)
            targetPos = map.posToCoordinate(allAgents[targetPatrol].pos);
    }
    if (targetPatrol < 0) {
        // Zero-Wait Policy for Supply car: move to any adjacent passable cell if possible
        for (int dir = 0; dir < 6; ++dir) {
            Position nPos = map.nextPosition(agentPos, dir);
            if (map.canMove(nPos)) {
                int travelTime = map.getTravelTime(agentPos);
                if (travelTime <= daySteps) {
                    std::vector<int> actions = {dir};
                    MoveSimulator::padWithWait(actions, travelTime, daySteps);
                    return actions;
                }
            }
        }
        return {-daySteps};
    }
    plannedTargetPatrol = targetPatrol;

    for (size_t si = 0; si < config.spots.size(); ++si) {
        if (config.spots[si].pos == map.coordinateToPos(targetPos)) {
            plannedTargetSpot = static_cast<int>(si);
            break;
        }
    }
    plannedTargetPos = targetPos;
    std::fill(plannedStepSpots.begin(), plannedStepSpots.end(), plannedTargetSpot);
    std::fill(plannedStepPositions.begin(), plannedStepPositions.end(), plannedTargetPos);

    auto path = PathFinder::findPath(agentPos, targetPos, map, INT_MAX);
    if (!path.found) {
        // Fallback to patrol's current position if path to targetPos not found
        path = PathFinder::findPath(agentPos, map.posToCoordinate(allAgents[targetPatrol].pos), map, INT_MAX);
    }
    if (!path.found) return {-daySteps};
    auto sim = MoveSimulator::simulate(path.directions, map, agentPos,
                                       daySteps, INT_MAX, false);
    std::vector<int> actions = sim.actions;
    MoveSimulator::padWithWait(actions, sim.stepsUsed, daySteps);
    return actions;
}
