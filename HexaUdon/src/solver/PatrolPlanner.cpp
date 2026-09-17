#include "solver/PatrolPlanner.hpp"
#include "solver/SpotScorer.hpp"
#include "solver/MoveSimulator.hpp"
#include "solver/PathFinder.hpp"
#include <climits>

static int brandSpotCount(const GameConfig& config, int brand) {
    int count = 0;
    for (const auto& spot : config.spots) count += spot.brand == brand;
    return count;
}

static int findLookaheadSpot(Position currentPos, const GameConfig& config,
    const Map& map, int fuelRemaining, int stepsRemaining,
    const std::set<int>& visitedToday, const std::vector<int>& remainingStock,
    const std::set<int>& matchBrands, const std::set<int>& dailyBrands,
    const std::set<int>& claimedSpots) {
    int bestFirst = -1;
    std::array<int, 3> bestPairRank = {INT_MIN, INT_MIN, INT_MIN};

    // ponytail: O(spots^2) path searches per choice; cache SSSP if maps grow.
    for (size_t first = 0; first < config.spots.size(); ++first) {
        if (claimedSpots.count(static_cast<int>(first)) ||
            visitedToday.count(static_cast<int>(first)) ||
            first >= remainingStock.size() || remainingStock[first] <= 0) continue;

        Position firstPos = map.posToCoordinate(config.spots[first].pos);
        auto firstPath = PathFinder::findPath(currentPos, firstPos, map, fuelRemaining, 1.0);
        if (!firstPath.found || firstPath.totalSteps > stepsRemaining) continue;

        int firstScore = SpotScorer::scoreSpot(config.spots[first].brand,
            firstPath.totalSteps, matchBrands, remainingStock[first],
            brandSpotCount(config, config.spots[first].brand),
            firstPath.totalFuel, fuelRemaining);
        std::array<int, 3> pairRank = {firstScore,
            dailyBrands.count(config.spots[first].brand) ? 0 : 1, -firstPath.totalSteps};

        auto nextVisited = visitedToday;
        auto nextStock = remainingStock;
        auto nextMatchBrands = matchBrands;
        auto nextDailyBrands = dailyBrands;
        nextVisited.insert(static_cast<int>(first));
        --nextStock[first];
        nextMatchBrands.insert(config.spots[first].brand);
        nextDailyBrands.insert(config.spots[first].brand);

        int second = SpotScorer::findBestSpot(firstPos, config, map,
            fuelRemaining - firstPath.totalFuel, stepsRemaining - firstPath.totalSteps,
            nextVisited, nextStock, nextMatchBrands, nextDailyBrands, claimedSpots);
        if (second >= 0) {
            auto secondPath = PathFinder::findPath(firstPos,
                map.posToCoordinate(config.spots[second].pos), map,
                fuelRemaining - firstPath.totalFuel, 1.0);
            int secondScore = SpotScorer::scoreSpot(config.spots[second].brand,
                secondPath.totalSteps, nextMatchBrands, nextStock[second],
                brandSpotCount(config, config.spots[second].brand),
                secondPath.totalFuel, fuelRemaining - firstPath.totalFuel);
            std::array<int, 3> withSecond = {pairRank[0] + secondScore,
                pairRank[1] + (nextDailyBrands.count(config.spots[second].brand) ? 0 : 1),
                pairRank[2] - secondPath.totalSteps};
            if (withSecond > pairRank) pairRank = withSecond;
        }

        if (pairRank > bestPairRank) {
            bestPairRank = pairRank;
            bestFirst = static_cast<int>(first);
        }
    }
    return bestFirst;
}

// =============================================================================
// Lập kế hoạch chuỗi Spot cho 1 xe Patrol trong 1 ngày
// =============================================================================

std::vector<int> PatrolPlanner::planDay(
    const GameConfig& config,
    const Map& map,
    Position startPos,
    int daySteps,
    int availableFuel,
    std::vector<int>& remainingStock,
    std::set<int>& visitedToday,
    std::set<int>& matchBrands,
    std::set<int>& dailyBrands,
    int& lastTargetSpot,
    Position& plannedTargetPos,
    std::vector<int>& plannedStepSpots,
    std::vector<Position>& plannedStepPositions,
    std::set<int>& claimedSpots
) {
    std::vector<int> allActions;
    int stepsUsed = 0;
    int fuelRemaining = availableFuel;
    Position currentPos = startPos;
    plannedTargetPos = startPos;
    plannedStepSpots.assign(daySteps, -1);
    plannedStepPositions.assign(daySteps, startPos);

    // Vòng lặp Greedy: ghé Spot liên tục cho đến khi không thể nữa
    while (true) {
        int stepsRemaining = daySteps - stepsUsed;
        if (stepsRemaining <= 0) break;
        if (fuelRemaining <= 0) break;

        // Bước 1: Tìm Spot tốt nhất tiếp theo (dùng SpotScorer)
        int nextSpot = findLookaheadSpot(
            currentPos, config, map,
            fuelRemaining, stepsRemaining,
            visitedToday, remainingStock, matchBrands, dailyBrands, claimedSpots
        );

        if (nextSpot < 0) break; // Không còn Spot nào khả thi

        // Bước 2: Tìm đường tới Spot đó (dùng PathFinder)
        Position spotPos = map.posToCoordinate(config.spots[nextSpot].pos);
        auto path = PathFinder::findPath(currentPos, spotPos, map, fuelRemaining, 1.0);

        if (!path.found || path.totalSteps > stepsRemaining) break;

        // Bước 3: Mô phỏng di chuyển (dùng MoveSimulator)
        auto sim = MoveSimulator::simulate(
            path.directions, map, currentPos,
            stepsRemaining, fuelRemaining, true
        );

        int traceStep = stepsUsed;
        Position tracePosition = currentPos;
        for (int simulatedAction : sim.actions) {
            int actionSteps = map.getTravelTime(tracePosition);
            for (int offset = 0; offset < actionSteps && traceStep + offset < daySteps; ++offset) {
                plannedStepSpots[traceStep + offset] = nextSpot;
                plannedStepPositions[traceStep + offset] = spotPos;
            }
            traceStep += actionSteps;
            tracePosition = map.nextPosition(tracePosition, simulatedAction);
        }

        // Bước 4: Cập nhật trạng thái
        allActions.insert(allActions.end(), sim.actions.begin(), sim.actions.end());
        stepsUsed += sim.stepsUsed;
        fuelRemaining -= sim.fuelUsed;
        currentPos = sim.finalPos;
        plannedTargetPos = spotPos;

        // Bước 5: Đánh dấu Spot đã ghé + cập nhật stock + brand
        visitedToday.insert(nextSpot);
        claimedSpots.insert(nextSpot);
        remainingStock[nextSpot]--;
        matchBrands.insert(config.spots[nextSpot].brand);
        dailyBrands.insert(config.spots[nextSpot].brand);

        // Ghi nhớ Spot cuối cùng (để Supply biết đón đầu ở đâu)
        lastTargetSpot = nextSpot;
        plannedTargetPos = spotPos;
    }

    // Padding: thêm Wait cho đủ daySteps
    MoveSimulator::padWithWait(allActions, stepsUsed, daySteps);

    for (int step = stepsUsed; step < daySteps; ++step) {
        plannedStepSpots[step] = lastTargetSpot;
        plannedStepPositions[step] = plannedTargetPos;
    }

    return allActions;
}
