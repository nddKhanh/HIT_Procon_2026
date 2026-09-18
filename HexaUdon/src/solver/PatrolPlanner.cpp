#include "solver/PatrolPlanner.hpp"
#include "solver/SpotScorer.hpp"
#include "solver/MoveSimulator.hpp"
#include "solver/PathFinder.hpp"
#include <algorithm>
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
    const std::set<int>& claimedSpots, bool officialRanking,
    bool exclusiveClaims, PathCache* pathCache) {
    int bestFirst = -1;
    SpotScorer::SpotRank bestPairRank = {-1, -1, -1, -1, INT_MIN, INT_MIN};
    auto localCurrent = pathCache ? SSSPResult{} :
        PathFinder::computeSSSP(currentPos, map, fuelRemaining, 1.0);
    const auto& fromCurrent = pathCache ? pathCache->get(currentPos, fuelRemaining, 1.0) :
                                          localCurrent;

    struct FirstCandidate {
        int spot;
        PathResult path;
        SpotScorer::SpotRank rank;
    };
    std::vector<FirstCandidate> firstCandidates;
    for (size_t first = 0; first < config.spots.size(); ++first) {
        if ((exclusiveClaims && claimedSpots.count(static_cast<int>(first))) ||
            visitedToday.count(static_cast<int>(first)) ||
            first >= remainingStock.size() || remainingStock[first] <= 0) continue;

        Position firstPos = map.posToCoordinate(config.spots[first].pos);
        auto firstPath = fromCurrent.extractPath(config.spots[first].pos);
        if (!firstPath.found || firstPath.totalSteps > stepsRemaining) continue;

        auto pairRank = SpotScorer::rankSpot(config.spots[first].brand,
            firstPath.totalSteps, matchBrands, dailyBrands, remainingStock[first],
            brandSpotCount(config, config.spots[first].brand),
            firstPath.totalFuel);
        if (!officialRanking) pairRank = {
            SpotScorer::scoreSpot(config.spots[first].brand, firstPath.totalSteps,
                matchBrands, remainingStock[first],
                brandSpotCount(config, config.spots[first].brand),
                firstPath.totalFuel, fuelRemaining),
            dailyBrands.count(config.spots[first].brand) ? 0 : 1,
            0, 0, -firstPath.totalSteps, -firstPath.totalFuel};
        firstCandidates.push_back({static_cast<int>(first), std::move(firstPath), pairRank});
    }
    std::sort(firstCandidates.begin(), firstCandidates.end(),
        [](const FirstCandidate& a, const FirstCandidate& b) { return a.rank > b.rank; });
    // ponytail: bounded branching protects short response windows. Increase
    // this only after large-map deadline benchmarks justify the cost.
    if (firstCandidates.size() > 16) firstCandidates.resize(16);

    for (const auto& candidate : firstCandidates) {
        int first = candidate.spot;
        const auto& firstPath = candidate.path;
        auto pairRank = candidate.rank;
        Position firstPos = map.posToCoordinate(config.spots[first].pos);

        auto nextVisited = visitedToday;
        auto nextStock = remainingStock;
        auto nextMatchBrands = matchBrands;
        auto nextDailyBrands = dailyBrands;
        nextVisited.insert(static_cast<int>(first));
        --nextStock[first];
        nextMatchBrands.insert(config.spots[first].brand);
        nextDailyBrands.insert(config.spots[first].brand);

        int secondFuel = fuelRemaining - firstPath.totalFuel;
        auto localFirst = pathCache ? SSSPResult{} :
            PathFinder::computeSSSP(firstPos, map, secondFuel, 1.0);
        const auto& fromFirst = pathCache ? pathCache->get(firstPos, secondFuel, 1.0) :
                                           localFirst;
        for (size_t second = 0; second < config.spots.size(); ++second) {
            if ((exclusiveClaims && claimedSpots.count(static_cast<int>(second))) ||
                nextVisited.count(static_cast<int>(second)) || nextStock[second] <= 0)
                continue;
            auto secondPath = fromFirst.extractPath(config.spots[second].pos);
            if (!secondPath.found || firstPath.totalSteps + secondPath.totalSteps > stepsRemaining)
                continue;
            auto secondRank = SpotScorer::rankSpot(config.spots[second].brand,
                secondPath.totalSteps, nextMatchBrands, nextDailyBrands, nextStock[second],
                brandSpotCount(config, config.spots[second].brand), secondPath.totalFuel);
            if (!officialRanking) secondRank = {
                SpotScorer::scoreSpot(config.spots[second].brand, secondPath.totalSteps,
                    nextMatchBrands, nextStock[second],
                    brandSpotCount(config, config.spots[second].brand),
                    secondPath.totalFuel, fuelRemaining - firstPath.totalFuel),
                nextDailyBrands.count(config.spots[second].brand) ? 0 : 1,
                0, 0, -secondPath.totalSteps, -secondPath.totalFuel};
            auto withSecond = pairRank;
            for (size_t i = 0; i < withSecond.size(); ++i) withSecond[i] += secondRank[i];
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
    std::set<int>& claimedSpots,
    bool officialRanking,
    bool exclusiveClaims,
    PathCache* pathCache
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
            visitedToday, remainingStock, matchBrands, dailyBrands, claimedSpots,
            officialRanking, exclusiveClaims, pathCache
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
        if (exclusiveClaims) claimedSpots.insert(nextSpot);
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
