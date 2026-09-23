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
    bool exclusiveClaims, PathCache* pathCache,
    const std::set<int>& preferredSpots) {
    auto localCurrent = pathCache ? SSSPResult{} :
        PathFinder::computeSSSP(currentPos, map, fuelRemaining, 1.0);
    const auto& fromCurrent = pathCache ? pathCache->get(currentPos, fuelRemaining, 1.0) :
                                          localCurrent;

    struct FirstCandidate {
        int spot;
        PathResult path;
        SpotScorer::SpotRank rank;
    };

    auto evaluateCandidates = [&](bool enforceSameDay) {
        std::vector<FirstCandidate> firstCandidates;
        for (size_t first = 0; first < config.spots.size(); ++first) {
            if ((exclusiveClaims && claimedSpots.count(static_cast<int>(first))) ||
                visitedToday.count(static_cast<int>(first)) ||
                first >= remainingStock.size() || remainingStock[first] <= 0) continue;

            auto firstPath = fromCurrent.extractPath(config.spots[first].pos);
            if (!firstPath.found) continue;
            if (enforceSameDay && firstPath.totalSteps > stepsRemaining) continue;

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
            pairRank[2] = preferredSpots.empty() ||
                          preferredSpots.count(static_cast<int>(first)) ? 1 : 0;
            firstCandidates.push_back({static_cast<int>(first), std::move(firstPath), pairRank});
        }
        std::sort(firstCandidates.begin(), firstCandidates.end(),
            [](const FirstCandidate& a, const FirstCandidate& b) { return a.rank > b.rank; });
        if (firstCandidates.size() > 16) firstCandidates.resize(16);

        int best = -1;
        SpotScorer::SpotRank bestRank = {-1, -1, -1, -1, INT_MIN, INT_MIN};

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
            if (secondFuel > 0 && (!enforceSameDay || firstPath.totalSteps < stepsRemaining)) {
                auto localFirst = pathCache ? SSSPResult{} :
                    PathFinder::computeSSSP(firstPos, map, secondFuel, 1.0);
                const auto& fromFirst = pathCache ? pathCache->get(firstPos, secondFuel, 1.0) :
                                                   localFirst;
                for (size_t second = 0; second < config.spots.size(); ++second) {
                    if ((exclusiveClaims && claimedSpots.count(static_cast<int>(second))) ||
                        nextVisited.count(static_cast<int>(second)) || nextStock[second] <= 0)
                        continue;
                    auto secondPath = fromFirst.extractPath(config.spots[second].pos);
                    if (!secondPath.found || (enforceSameDay && firstPath.totalSteps + secondPath.totalSteps > stepsRemaining))
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
                    secondRank[2] = preferredSpots.empty() ||
                                    preferredSpots.count(static_cast<int>(second)) ? 1 : 0;
                    auto withSecond = pairRank;
                    for (size_t i = 0; i < withSecond.size(); ++i) withSecond[i] += secondRank[i];
                    if (withSecond > pairRank) pairRank = withSecond;
                }
            }

            if (pairRank > bestRank) {
                bestRank = pairRank;
                best = static_cast<int>(first);
            }
        }
        return best;
    };

    int spot = evaluateCandidates(true);
    if (spot < 0) {
        spot = evaluateCandidates(false);
    }
    return spot;
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
    PathCache* pathCache,
    int firstTargetSpot,
    const std::set<int>& preferredSpots
) {
    std::vector<int> allActions;
    int stepsUsed = 0;
    int fuelRemaining = availableFuel;
    Position currentPos = startPos;
    plannedTargetPos = startPos;
    plannedStepSpots.assign(daySteps, -1);
    plannedStepPositions.assign(daySteps, startPos);
    bool firstTargetPending = firstTargetSpot != -2;

    while (true) {
        int stepsRemaining = daySteps - stepsUsed;
        if (stepsRemaining <= 0) break;
        if (fuelRemaining <= 0) break;

        int nextSpot;
        if (firstTargetPending) {
            nextSpot = firstTargetSpot;
            firstTargetPending = false;
            if (nextSpot < 0) break;
        } else {
            nextSpot = findLookaheadSpot(
                currentPos, config, map,
                fuelRemaining, stepsRemaining,
                visitedToday, remainingStock, matchBrands, dailyBrands, claimedSpots,
                officialRanking, exclusiveClaims, pathCache, preferredSpots
            );
        }

        if (nextSpot >= 0) {
            Position spotPos = map.posToCoordinate(config.spots[nextSpot].pos);
            std::vector<double> rewards(map.getHeight() * map.getWidth(), 0.0);
            for (size_t s = 0; s < config.spots.size(); ++s) {
                if (s >= remainingStock.size() || remainingStock[s] <= 0 ||
                    visitedToday.count(static_cast<int>(s))) continue;
                const auto& spot = config.spots[s];
                rewards[spot.pos] = !matchBrands.count(spot.brand) ? 1.0 :
                                   !dailyBrands.count(spot.brand) ? 0.75 : 0.25;
            }
            auto path = PathFinder::findPathViaSpots(currentPos, spotPos, map,
                fuelRemaining, stepsRemaining, rewards, pathCache);

            if (path.found && !path.directions.empty()) {
                auto sim = MoveSimulator::simulate(
                    path.directions, map, currentPos,
                    stepsRemaining, fuelRemaining, true
                );

                if (sim.stepsUsed > 0) {
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
                        for (size_t si = 0; si < config.spots.size(); ++si) {
                            if (config.spots[si].pos != map.coordinateToPos(tracePosition) ||
                                !visitedToday.insert(static_cast<int>(si)).second) continue;
                            if (remainingStock[si] <= 0) continue;
                            --remainingStock[si];
                            if (exclusiveClaims && remainingStock[si] == 0)
                                claimedSpots.insert(static_cast<int>(si));
                            matchBrands.insert(config.spots[si].brand);
                            dailyBrands.insert(config.spots[si].brand);
                        }
                    }

                    allActions.insert(allActions.end(), sim.actions.begin(), sim.actions.end());
                    stepsUsed += sim.stepsUsed;
                    fuelRemaining -= sim.fuelUsed;
                    currentPos = sim.finalPos;
                    lastTargetSpot = nextSpot;
                    plannedTargetPos = spotPos;

                    if (currentPos == spotPos) {
                        continue;
                    } else {
                        if (exclusiveClaims && remainingStock[nextSpot] <= 0) claimedSpots.insert(nextSpot);
                        break;
                    }
                }
            }
        }

        // Zero-Wait Policy: If no spot target found AND agent hasn't moved at all today (stepsUsed == 0), try moving to any passable neighbor
        bool movedWander = false;
        if (stepsUsed == 0 && stepsRemaining > 0 && fuelRemaining > 0) {
            for (int dir = 0; dir < 6; ++dir) {
                Position nPos = map.nextPosition(currentPos, dir);
                if (!map.canMove(nPos)) continue;
                int travelTime = map.getTravelTime(currentPos);
                int fuelCost = map.getFuelCost(currentPos);
                if (travelTime <= stepsRemaining && fuelRemaining >= fuelCost) {
                    allActions.push_back(dir);
                    int traceStep = stepsUsed;
                    for (int offset = 0; offset < travelTime && traceStep + offset < daySteps; ++offset) {
                        plannedStepSpots[traceStep + offset] = lastTargetSpot;
                        plannedStepPositions[traceStep + offset] = plannedTargetPos;
                    }
                    stepsUsed += travelTime;
                    fuelRemaining -= fuelCost;
                    currentPos = nPos;
                    movedWander = true;
                    break;
                }
            }
        }

        if (!movedWander) break;
    }

    MoveSimulator::padWithWait(allActions, stepsUsed, daySteps);

    for (int step = stepsUsed; step < daySteps; ++step) {
        plannedStepSpots[step] = lastTargetSpot;
        plannedStepPositions[step] = plannedTargetPos;
    }

    return allActions;
}
