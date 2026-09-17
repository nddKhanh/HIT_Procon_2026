#include "solver/SupplyPlanner.hpp"
#include "solver/MoveSimulator.hpp"
#include "solver/PathFinder.hpp"
#include <algorithm>
#include <climits>

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

    // Tìm xe Patrol cần cứu
    Position agentPos = map.posToCoordinate(supplyAgent.pos);
    int targetPatrol = findTargetPatrol(allAgents, supplyIdx, config, map,
                                        collectedBrands, remainingStock, agentPos);

    if (targetPatrol < 0) {
        // Không tìm thấy xe Patrol → đứng yên cả ngày
        return {-daySteps};
    }
    plannedTargetPatrol = targetPatrol;

    // Xác định điểm hẹn (Rendezvous)
    Position targetPos;
    int patrolTarget = -1;
    if (targetPatrol >= 0 && targetPatrol < static_cast<int>(patrolTargetSpots.size())) {
        patrolTarget = patrolTargetSpots[targetPatrol];
    }

    if (patrolTarget >= 0 && targetPatrol < static_cast<int>(patrolTargetPositions.size())) {
        // Đón đầu: dùng đúng vị trí mà PatrolPlanner đã chọn trong solve()
        targetPos = patrolTargetPositions[targetPatrol];
        plannedTargetSpot = patrolTarget;
    } else {
        // Fallback: đi tới vị trí hiện tại của xe Patrol
        targetPos = map.posToCoordinate(allAgents[targetPatrol].pos);
    }
    plannedTargetPos = targetPos;
    std::fill(plannedStepSpots.begin(), plannedStepSpots.end(), plannedTargetSpot);
    std::fill(plannedStepPositions.begin(), plannedStepPositions.end(), plannedTargetPos);

    // Tìm đường đến điểm hẹn
    auto pathResult = PathFinder::findPath(agentPos, targetPos, map, INT_MAX);

    if (!pathResult.found) {
        // Không tìm được đường → đứng yên
        return {-daySteps};
    }

    // Mô phỏng di chuyển (xe Supply không tốn xăng)
    auto sim = MoveSimulator::simulate(
        pathResult.directions, map, agentPos,
        daySteps, INT_MAX, false
    );

    // Padding Wait cho đủ daySteps
    std::vector<int> actions = sim.actions;
    MoveSimulator::padWithWait(actions, sim.stepsUsed, daySteps);

    return actions;
}
