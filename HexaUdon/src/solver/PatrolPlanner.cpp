#include "solver/PatrolPlanner.hpp"
#include "solver/SpotScorer.hpp"
#include "solver/MoveSimulator.hpp"
#include "solver/PathFinder.hpp"
#include <algorithm>
#include <climits>
#include <chrono>

void PatrolPlanner::improveRoutes(const GameConfig& config, const GameState& state,
    const Map& inputMap, std::vector<std::vector<int>>& actions,
    const std::set<int>& matchBrands, long long deadlineMs, int budgetMs) {
    using Clock = std::chrono::steady_clock;
    const auto epoch = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::system_clock::now().time_since_epoch()).count();
    if (budgetMs <= 0 || deadlineMs <= epoch) return;
    const auto stop = Clock::now() + std::chrono::milliseconds(
        std::min<long long>(budgetMs, deadlineMs - epoch));
    auto inTime = [&] { return Clock::now() < stop; };
    Map map = inputMap;
    map.updateTraffic(state.traffics);
    auto incumbent = MoveSimulator::simulateDay(config, state, actions, map);
    if (!incumbent.valid) return;
    const int daySteps = config.getDaySteps(state.day);
    const bool finalDay = state.day + 1 == static_cast<int>(config.daySteps.size());
    auto rank = [&](const DaySimulation& day) {
        int fresh = 0;
        for (int b : day.brands) fresh += !matchBrands.count(b);
        return std::make_tuple(fresh, day.brands.size(), day.collections.size());
    };
    PathCache cache(map);
    // ponytail: at most eight accepted insertion rounds; bridges span <=32
    // actions. Revisit this ceiling only with measured missed opportunities.
    for (int round = 0; round < 8 && inTime(); ++round) {
        auto best = incumbent;
        auto bestActions = actions;
        std::vector<int> targets;
        for (size_t s = 0; s < config.spots.size(); ++s)
            if (incumbent.remainingStock[s] > 0) targets.push_back(static_cast<int>(s));
        std::stable_sort(targets.begin(), targets.end(), [&](int a, int b) {
            return std::make_pair(!matchBrands.count(config.spots[a].brand),
                                 !incumbent.brands.count(config.spots[a].brand)) >
                   std::make_pair(!matchBrands.count(config.spots[b].brand),
                                 !incumbent.brands.count(config.spots[b].brand));
        });
        // Search missing Types/Daily across the fleet before spending the
        // shared repair budget on duplicate-brand servings for the first car.
        for (int phase = 0; phase < 2 && inTime(); ++phase) {
            for (int p = 0; p < static_cast<int>(state.agents.size()) && inTime(); ++p) {
                if (state.agents[p].kind != 0) continue;
                // Unit waits expose safe departure boundaries after a refill.
                std::vector<int> route;
                for (int a : actions[p]) {
                    if (a < 0) route.insert(route.end(), -a, -1);
                    else route.push_back(a);
                }
                std::vector<int> times{0}, positions{state.agents[p].pos};
                std::set<int> visited{state.agents[p].pos};
                int tail = 0;
                for (auto it = route.rbegin(); it != route.rend() && *it < 0; ++it) ++tail;
                for (int a : route) {
                    auto pos = map.posToCoordinate(positions.back());
                    times.push_back(times.back() + (a < 0 ? -a : map.getTravelTime(pos)));
                    positions.push_back(a < 0 ? positions.back() :
                        map.coordinateToPos(map.nextPosition(pos, a)));
                    visited.insert(positions.back());
                }
                for (int target : targets) {
                    if (!inTime()) break;
                    const bool missing = !incumbent.brands.count(config.spots[target].brand);
                    if (missing != (phase == 0)) continue;
                    const int cell = config.spots[target].pos;
                    if (visited.count(cell)) continue;
                    for (size_t begin = 0; begin < route.size() && inTime(); ++begin) {
                        const int fuel = incumbent.fuelAtTime[p][times[begin]];
                        if (fuel <= 0) continue;
                        auto first = cache.get(map.posToCoordinate(positions[begin]), fuel, 1.0)
                            .extractPath(cell, daySteps - times[begin]);
                        if (!first.found) continue;
                        size_t previousEnd = route.size() + 1;
                        for (int span : {0, 1, 2, 4, 8, 16, 32}) {
                            if (!inTime()) break;
                            const size_t end = std::min(route.size(), begin + span);
                            if (end == previousEnd) continue;
                            previousEnd = end;
                            const int availableWait = std::min<int>(tail, route.size() - end);
                            const bool finish = finalDay && begin >= route.size() - tail;
                            auto second = finish ? PathResult{{}, 0, 0, true} :
                                cache.get(map.posToCoordinate(cell), fuel - first.totalFuel, 1.0)
                                    .extractPath(positions[end], times[end] - times[begin] + availableWait - first.totalSteps);
                            if (!second.found) continue;
                            const int newDuration = first.totalSteps + second.totalSteps;
                            const int replacedDuration = finish ? daySteps - times[begin] : times[end] - times[begin];
                            const int extra = newDuration - replacedDuration;
                            if (extra > availableWait || (finish && extra > 0)) continue;
                            auto candidate = actions;
                            auto& changed = candidate[p];
                            changed.assign(route.begin(), route.begin() + begin);
                            changed.insert(changed.end(), first.directions.begin(), first.directions.end());
                            changed.insert(changed.end(), second.directions.begin(), second.directions.end());
                            if (!finish) changed.insert(changed.end(), route.begin() + end,
                                route.end() - std::max(0, extra));
                            if (extra < 0) changed.push_back(extra);
                            auto result = MoveSimulator::simulateDay(config, state, candidate, map);
                            if (!result.valid || rank(result) <= rank(best)) continue;
                            bool preservesFuture = true;
                            if (!finalDay) {
                                for (size_t i = 0; i < state.agents.size(); ++i)
                                    preservesFuture &= result.agents[i].pos == incumbent.agents[i].pos &&
                                        result.agents[i].fuel >= incumbent.agents[i].fuel;
                            }
                            if (!preservesFuture) continue;
                            best = std::move(result);
                            bestActions = std::move(candidate);
                        }
                    }
                }
            }
        }
        if (bestActions == actions) break;
        actions = std::move(bestActions);
        incumbent = std::move(best);
    }

    // Adapt khanh's suffix rebuilding without spending tomorrow's fuel or
    // extending the existing repair budget. Each trial owns its mutable stock.
    if (!finalDay) return;
    // ponytail: one sweep over the last 12 action boundaries plus departure;
    // use a wider neighborhood only after replay gains justify its cost.
    for (int p = 0; p < static_cast<int>(state.agents.size()) && inTime(); ++p) {
        if (state.agents[p].kind != 0) continue;
        const auto original = actions[p];
        auto best = incumbent;
        auto bestActions = actions;
        int time = 0;
        auto pos = map.posToCoordinate(state.agents[p].pos);
        std::set<int> visited;
        for (size_t edge = 0; edge < original.size() && inTime(); ++edge) {
            for (size_t s = 0; s < config.spots.size(); ++s)
                if (config.spots[s].pos == map.coordinateToPos(pos))
                    visited.insert(static_cast<int>(s));
            if (edge == 0 || edge + 12 >= original.size()) {
                std::vector<int> reservedStock;
                for (const auto& spot : config.spots) reservedStock.push_back(spot.stocks);
                auto reservedBrands = matchBrands;
                std::set<int> reservedDaily;
                for (const auto& event : incumbent.collections) {
                    if (event.agent == p && event.step > time) continue;
                    --reservedStock[event.spot];
                    reservedBrands.insert(event.brand);
                    reservedDaily.insert(event.brand);
                }
                for (size_t target = 0; target < config.spots.size() && inTime(); ++target) {
                    if (reservedStock[target] <= 0 || visited.count(static_cast<int>(target))) continue;
                    auto stock = reservedStock;
                    auto seen = visited;
                    auto brands = reservedBrands;
                    auto daily = reservedDaily;
                    std::set<int> claims;
                    int lastTarget = -1;
                    Position lastPosition;
                    std::vector<int> stepSpots;
                    std::vector<Position> stepPositions;
                    auto suffix = planDay(config, map, pos, daySteps - time,
                        incumbent.fuelAtTime[p][time], stock, seen, brands, daily,
                        lastTarget, lastPosition, stepSpots, stepPositions, claims,
                        true, false, &cache, static_cast<int>(target), {}, true, true, 0.0);
                    auto candidate = actions;
                    candidate[p].assign(original.begin(), original.begin() + edge);
                    candidate[p].insert(candidate[p].end(), suffix.begin(), suffix.end());
                    auto result = MoveSimulator::simulateDay(config, state, candidate, map);
                    if (!result.valid || rank(result) <= rank(best)) continue;
                    best = std::move(result);
                    bestActions = std::move(candidate);
                }
            }
            const int action = original[edge];
            time += action < 0 ? -action : map.getTravelTime(pos);
            if (action >= 0) pos = map.nextPosition(pos, action);
        }
        actions = std::move(bestActions);
        incumbent = std::move(best);
    }
}

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
    const std::set<int>& preferredSpots, bool boundedPaths, double fuelWeight,
    bool deepLookahead) {
    auto localCurrent = pathCache ? SSSPResult{} :
        PathFinder::computeSSSP(currentPos, map, fuelRemaining, fuelWeight);
    const auto& fromCurrent = pathCache ? pathCache->get(currentPos, fuelRemaining, fuelWeight) :
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

            auto firstPath = fromCurrent.extractPath(config.spots[first].pos, enforceSameDay && boundedPaths ? stepsRemaining : INT_MAX);
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
                    PathFinder::computeSSSP(firstPos, map, secondFuel, fuelWeight);
                const auto& fromFirst = pathCache ? pathCache->get(firstPos, secondFuel, fuelWeight) :
                                                   localFirst;
                for (size_t second = 0; second < config.spots.size(); ++second) {
                    if ((exclusiveClaims && claimedSpots.count(static_cast<int>(second))) ||
                        nextVisited.count(static_cast<int>(second)) || nextStock[second] <= 0)
                        continue;
                    auto secondPath = fromFirst.extractPath(config.spots[second].pos, enforceSameDay && boundedPaths ? stepsRemaining - firstPath.totalSteps : INT_MAX);
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
                    auto withSecond = candidate.rank;
                    for (size_t i = 0; i < withSecond.size(); ++i) withSecond[i] += secondRank[i];
                    if (withSecond > pairRank) pairRank = withSecond;

                    int thirdFuel = secondFuel - secondPath.totalFuel;
                    int usedSteps = firstPath.totalSteps + secondPath.totalSteps;
                    // ponytail: origin/khanh's two-stop baseline bounds branching;
                    // reward-route search keeps the third stop. Solver compares
                    // complete fleet plans; deeper search needs more time budget.
                    if (!deepLookahead || thirdFuel <= 0 || usedSteps >= stepsRemaining ||
                        (config.initialAgentPositions.size() > 6 && !boundedPaths) ||
                        config.spots.size() > 24) continue;
                    auto afterSecondVisited = nextVisited;
                    auto afterSecondStock = nextStock;
                    auto afterSecondMatch = nextMatchBrands;
                    auto afterSecondDaily = nextDailyBrands;
                    afterSecondVisited.insert(static_cast<int>(second));
                    --afterSecondStock[second];
                    afterSecondMatch.insert(config.spots[second].brand);
                    afterSecondDaily.insert(config.spots[second].brand);
                    Position secondPos = map.posToCoordinate(config.spots[second].pos);
                    const auto& fromSecond = pathCache
                        ? pathCache->get(secondPos, thirdFuel, fuelWeight)
                        : PathFinder::computeSSSP(secondPos, map, thirdFuel, fuelWeight);
                    for (size_t third = 0; third < config.spots.size(); ++third) {
                        if ((exclusiveClaims && claimedSpots.count(static_cast<int>(third))) ||
                            afterSecondVisited.count(static_cast<int>(third)) ||
                            afterSecondStock[third] <= 0) continue;
                        auto thirdPath = fromSecond.extractPath(config.spots[third].pos, enforceSameDay && boundedPaths ? stepsRemaining - usedSteps : INT_MAX);
                        if (!thirdPath.found || (enforceSameDay &&
                            usedSteps + thirdPath.totalSteps > stepsRemaining)) continue;
                        auto thirdRank = SpotScorer::rankSpot(config.spots[third].brand,
                            thirdPath.totalSteps, afterSecondMatch, afterSecondDaily,
                            afterSecondStock[third],
                            brandSpotCount(config, config.spots[third].brand),
                            thirdPath.totalFuel);
                        if (!officialRanking) thirdRank = {
                            SpotScorer::scoreSpot(config.spots[third].brand,
                                thirdPath.totalSteps, afterSecondMatch,
                                afterSecondStock[third],
                                brandSpotCount(config, config.spots[third].brand),
                                thirdPath.totalFuel, thirdFuel),
                            afterSecondDaily.count(config.spots[third].brand) ? 0 : 1,
                            0, 0, -thirdPath.totalSteps, -thirdPath.totalFuel};
                        thirdRank[2] = preferredSpots.empty() ||
                            preferredSpots.count(static_cast<int>(third)) ? 1 : 0;
                        auto withThird = withSecond;
                        for (size_t i = 0; i < withThird.size(); ++i)
                            withThird[i] += thirdRank[i];
                        if (withThird > pairRank) pairRank = withThird;
                    }
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
    const std::set<int>& preferredSpots,
    bool rewardRoutes,
    bool timeBoundedPaths,
    double fuelWeight
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
                officialRanking, exclusiveClaims, pathCache, preferredSpots, timeBoundedPaths, fuelWeight,
                rewardRoutes || config.players <= 2
            );
        }

        if (nextSpot >= 0) {
            Position spotPos = map.posToCoordinate(config.spots[nextSpot].pos);
            std::vector<double> rewards(map.getHeight() * map.getWidth(), 0.0);
            for (size_t s = 0; rewardRoutes && s < config.spots.size(); ++s) {
                if (s >= remainingStock.size() || remainingStock[s] <= 0 ||
                    visitedToday.count(static_cast<int>(s))) continue;
                const auto& spot = config.spots[s];
                const int alternatives = brandSpotCount(config, spot.brand);
                // A type is scored once even if its brand has several spots, so
                // split that reward across its alternatives. A serving remains
                // one real third-priority point regardless of brand rarity.
                rewards[spot.pos] = !matchBrands.count(spot.brand) ? 1.25 / alternatives :
                                   !dailyBrands.count(spot.brand) ? 1.1 / alternatives : 0.2;
            }
            auto path = rewardRoutes
                ? PathFinder::findPathViaSpots(currentPos, spotPos, map,
                    fuelRemaining, stepsRemaining, rewards, pathCache, timeBoundedPaths, fuelWeight)
                : PathFinder::findPath(currentPos, spotPos, map, fuelRemaining, fuelWeight);

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
