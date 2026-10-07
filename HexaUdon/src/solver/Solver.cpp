#include "solver/Solver.hpp"
#include "solver/PatrolPlanner.hpp"
#include "solver/SupplyPlanner.hpp"
#include "solver/MoveSimulator.hpp"
#include "solver/PathFinder.hpp"
#include <algorithm>
#include <chrono>
#include <climits>
#include <iostream>
#include <limits>
#include <numeric>
#include <string>
#include <tuple>

namespace {

constexpr bool kEnablePatrolRegions = false;
constexpr int kFormationAssignmentCandidates = 2;

std::string formatTypes(const std::vector<int>& types) {
    std::string out = "[";
    for (size_t i = 0; i < types.size(); ++i) {
        if (i > 0) out += ',';
        out += std::to_string(types[i]);
    }
    return out + ']';
}

auto finalDayRank(const DaySimulation& day, const std::set<int>& matchBrands) {
    int fresh = 0;
    for (int brand : day.brands) fresh += !matchBrands.count(brand);
    return std::make_tuple(fresh, static_cast<int>(day.brands.size()),
                           static_cast<int>(day.collections.size()));
}

// A Supply that can be removed without invalidating the submitted actions or
// lowering any official final-day score only adds road traffic and refuels with
// no remaining strategic value. Keep the simulator as the authority here.
bool removeRedundantFinalDaySupplies(const GameConfig& config, const GameState& state,
    const Map& map, std::vector<std::vector<int>>& actions,
    const std::set<int>& matchBrands) {
    // ponytail: only remove a whole Supply route; split it after a necessary
    // meeting if replays show that a partial final-day convoy costs points.
    if (state.day + 1 != static_cast<int>(config.daySteps.size())) return false;
    auto baseline = MoveSimulator::simulateDay(config, state, actions, map);
    if (!baseline.valid) return false;
    const int steps = config.getDaySteps(state.day);
    const auto baselineRank = finalDayRank(baseline, matchBrands);
    bool changed = false;
    for (size_t supply = 0; supply < state.agents.size(); ++supply) {
        if (state.agents[supply].kind != 1) continue;
        auto candidate = actions;
        candidate[supply] = {-steps};
        auto simulated = MoveSimulator::simulateDay(config, state, candidate, map);
        if (!simulated.valid || finalDayRank(simulated, matchBrands) != baselineRank)
            continue;
        actions = std::move(candidate);
        baseline = std::move(simulated);
        changed = true;
    }
    return changed;
}

std::vector<std::set<int>> assignPatrolRegions(
    const GameConfig& config, const GameState& state, const Map& map,
    const std::vector<int>& patrols, int daySteps, PathCache& pathCache) {
    std::vector<std::set<int>> regions(state.agents.size());
    std::vector<int> workload(state.agents.size());
    std::vector<int> brandIds;
    for (const auto& spot : config.spots)
        if (std::find(brandIds.begin(), brandIds.end(), spot.brand) == brandIds.end())
            brandIds.push_back(spot.brand);

    struct BrandWork { int brand; int difficulty; int stock; };
    std::vector<BrandWork> work;
    for (int brand : brandIds) {
        int difficulty = std::numeric_limits<int>::max();
        int stock = 0;
        for (size_t spot = 0; spot < config.spots.size(); ++spot) {
            if (config.spots[spot].brand != brand) continue;
            stock += config.spots[spot].stocks;
            for (int patrol : patrols) {
                const auto& agent = state.agents[patrol];
                auto path = pathCache.get(map.posToCoordinate(agent.pos), agent.fuel, 1.0)
                    .extractPath(config.spots[spot].pos);
                if (path.found && path.totalSteps <= daySteps)
                    difficulty = std::min(difficulty, path.totalSteps);
            }
        }
        work.push_back({brand, difficulty, stock});
    }
    std::stable_sort(work.begin(), work.end(), [](const auto& a, const auto& b) {
        if (a.difficulty != b.difficulty) return a.difficulty > b.difficulty;
        return a.stock > b.stock;
    });

    const int targetBrands = patrols.empty() ? 0 :
        (static_cast<int>(brandIds.size()) + static_cast<int>(patrols.size()) - 1) /
        static_cast<int>(patrols.size());
    for (const auto& item : work) {
        int bestPatrol = -1;
        int bestCost = std::numeric_limits<int>::max();
        int bestDistance = std::numeric_limits<int>::max();
        for (int patrol : patrols) {
            const auto& agent = state.agents[patrol];
            int distance = std::numeric_limits<int>::max();
            const auto& paths = pathCache.get(map.posToCoordinate(agent.pos), agent.fuel, 1.0);
            for (const auto& spot : config.spots) {
                if (spot.brand != item.brand) continue;
                auto path = paths.extractPath(spot.pos);
                if (path.found && path.totalSteps <= daySteps)
                    distance = std::min(distance, path.totalSteps);
            }
            if (distance == std::numeric_limits<int>::max()) continue;
            int overload = std::max(0, workload[patrol] - targetBrands + 1);
            int cost = distance + workload[patrol] * std::max(1, daySteps / 3)
                + overload * daySteps;
            if (cost < bestCost ||
                (cost == bestCost && distance < bestDistance) ||
                (cost == bestCost && distance == bestDistance && patrol < bestPatrol)) {
                bestPatrol = patrol;
                bestCost = cost;
                bestDistance = distance;
            }
        }
        if (bestPatrol < 0) continue;
        ++workload[bestPatrol];
        for (size_t spot = 0; spot < config.spots.size(); ++spot)
            if (config.spots[spot].brand == item.brand)
                regions[bestPatrol].insert(static_cast<int>(spot));
    }
    return regions;
}

std::vector<int> assignFirstSpots(
    const GameConfig& config, const GameState& state, const Map& map,
    const std::vector<int>& patrols, int daySteps,
    const std::vector<int>& remainingStock,
    const std::vector<std::set<int>>& visitedToday, PathCache& pathCache,
    const std::vector<std::set<int>>& regions,
    const std::set<int>& matchBrands, const std::set<int>& dailyBrands,
    bool prioritizeMatchTypes) {
    std::vector<int> assigned(state.agents.size(), -2);
    if (patrols.size() < 2 || config.spots.empty()) return assigned;
    for (int patrol : patrols) assigned[patrol] = -1;

    const int patrolCount = static_cast<int>(patrols.size());
    const int stateCount = 1 << patrolCount;
    const int unreachable = std::numeric_limits<int>::max() / 4;
    std::vector<std::vector<int>> travel(patrolCount,
                                         std::vector<int>(config.spots.size(), unreachable));
    for (int p = 0; p < patrolCount; ++p) {
        int agent = patrols[p];
        const auto& paths = pathCache.get(map.posToCoordinate(state.agents[agent].pos),
                                          state.agents[agent].fuel, 1.0);
        for (size_t spot = 0; spot < config.spots.size(); ++spot) {
            if (remainingStock[spot] <= 0 || visitedToday[agent].count(static_cast<int>(spot)))
                continue;
            auto path = paths.extractPath(config.spots[spot].pos);
            if (path.found && path.totalSteps <= daySteps) {
                int regionPenalty = regions[agent].empty() ||
                    regions[agent].count(static_cast<int>(spot)) ? 0 : daySteps;
                travel[p][spot] = path.totalSteps + regionPenalty;
            }
        }
    }

    std::vector<int> brands;
    for (size_t spot = 0; spot < config.spots.size(); ++spot) {
        if (remainingStock[spot] <= 0) continue;
        int brand = config.spots[spot].brand;
        if (std::find(brands.begin(), brands.end(), brand) == brands.end())
            brands.push_back(brand);
    }

    std::vector<std::vector<int>> brandTravel(
        patrolCount, std::vector<int>(brands.size(), unreachable));
    std::vector<std::vector<int>> brandSpot(
        patrolCount, std::vector<int>(brands.size(), -1));
    for (int p = 0; p < patrolCount; ++p) {
        for (size_t brand = 0; brand < brands.size(); ++brand) {
            for (size_t spot = 0; spot < config.spots.size(); ++spot) {
                if (config.spots[spot].brand != brands[brand] ||
                    travel[p][spot] >= unreachable)
                    continue;
                if (travel[p][spot] < brandTravel[p][brand] ||
                    (travel[p][spot] == brandTravel[p][brand] &&
                     (brandSpot[p][brand] < 0 ||
                      remainingStock[spot] > remainingStock[brandSpot[p][brand]]))) {
                    brandTravel[p][brand] = travel[p][spot];
                    brandSpot[p][brand] = static_cast<int>(spot);
                }
            }
        }
    }

    struct Parent { int mask = -1; int patrol = -1; int spot = -1; };
    if (!prioritizeMatchTypes) {
        std::vector<int> cost(stateCount, unreachable);
        std::vector<std::vector<Parent>> parent(brands.size() + 1,
                                                 std::vector<Parent>(stateCount));
        cost[0] = 0;
        for (size_t brand = 0; brand < brands.size(); ++brand) {
            auto next = cost;
            for (int mask = 0; mask < stateCount; ++mask) {
                if (cost[mask] < unreachable)
                    parent[brand + 1][mask] = {mask, -1, -1};
                for (int p = 0; p < patrolCount; ++p) {
                    if ((mask & (1 << p)) || brandTravel[p][brand] >= unreachable)
                        continue;
                    int nextMask = mask | (1 << p);
                    int nextCost = cost[mask] + brandTravel[p][brand];
                    if (cost[mask] < unreachable && nextCost < next[nextMask]) {
                        next[nextMask] = nextCost;
                        parent[brand + 1][nextMask] = {mask, p, brandSpot[p][brand]};
                    }
                }
            }
            cost = std::move(next);
        }
        auto bitCount = [](int mask) {
            int count = 0;
            for (; mask; mask >>= 1) count += mask & 1;
            return count;
        };
        int bestMask = 0;
        for (int mask = 1; mask < stateCount; ++mask) {
            if (cost[mask] >= unreachable) continue;
            if (bitCount(mask) > bitCount(bestMask) ||
                (bitCount(mask) == bitCount(bestMask) && cost[mask] < cost[bestMask]))
                bestMask = mask;
        }
        int mask = bestMask;
        for (int brand = static_cast<int>(brands.size()); brand > 0; --brand) {
            Parent step = parent[brand][mask];
            if (step.mask < 0) continue;
            if (step.patrol >= 0) assigned[patrols[step.patrol]] = step.spot;
            mask = step.mask;
        }
        return assigned;
    }

    using FirstWaveRank = std::tuple<int, int, int, int>;
    const FirstWaveRank unreachableRank{-1, -1, -1, INT_MIN};
    std::vector<FirstWaveRank> rank(stateCount, unreachableRank);
    std::vector<std::vector<Parent>> parent(brands.size() + 1,
                                             std::vector<Parent>(stateCount));
    rank[0] = {0, 0, 0, 0};

    // Match patrols to brands rather than physical spots so the first wave
    // follows the official score order: missing match types, then missing daily
    // types, then collections and travel cost. Each patrol still gets its
    // cheapest reachable spot for that brand.
    for (size_t brand = 0; brand < brands.size(); ++brand) {
        auto next = rank;
        for (int mask = 0; mask < stateCount; ++mask) {
            if (rank[mask] != unreachableRank)
                parent[brand + 1][mask] = {mask, -1, -1};
        }
        for (int mask = 0; mask < stateCount; ++mask) {
            for (int p = 0; p < patrolCount; ++p) {
                if ((mask & (1 << p)) || brandTravel[p][brand] >= unreachable) continue;
                int nextMask = mask | (1 << p);
                if (rank[mask] == unreachableRank) continue;
                auto candidate = rank[mask];
                std::get<0>(candidate) += !matchBrands.count(brands[brand]);
                std::get<1>(candidate) += !dailyBrands.count(brands[brand]);
                ++std::get<2>(candidate);
                std::get<3>(candidate) -= brandTravel[p][brand];
                if (candidate > next[nextMask]) {
                    next[nextMask] = candidate;
                    parent[brand + 1][nextMask] = {mask, p, brandSpot[p][brand]};
                }
            }
        }
        rank = std::move(next);
    }

    int bestMask = 0;
    for (int mask = 1; mask < stateCount; ++mask) {
        if (rank[mask] > rank[bestMask]) bestMask = mask;
    }

    int mask = bestMask;
    for (int brand = static_cast<int>(brands.size()); brand > 0; --brand) {
        Parent step = parent[brand][mask];
        if (step.mask < 0) continue;
        if (step.patrol >= 0) assigned[patrols[step.patrol]] = step.spot;
        mask = step.mask;
    }
    return assigned;
}

} // namespace

// =============================================================================
// AgentStrategy — Quyết định đội hình xe
// =============================================================================

std::vector<int> AgentStrategy::decideAgentTypes(
    const GameConfig& config, bool* selectedUseRegions,
    long long simulationBudgetMs) {
    const int agentCount = static_cast<int>(config.initialAgentPositions.size());
    std::vector<int> bestTypes(agentCount, 0);
    using FormationRank = std::tuple<int, int, int, int, int, int>;
    const FormationRank invalidFormationRank{-1, -1, -1, -1, -1, -1};
    auto bestRank = invalidFormationRank;
    auto bestScore = std::make_tuple(-1, -1, -1);
    bool bestUseRegions = false;
    int bestSupplyCount = INT_MAX;
    const bool useTrafficStress = config.players > 2 && agentCount <= 6;
    std::cerr << "[FORMATION] traffic scenarios: "
              << (config.players > 2 ? "neutral" : "opponents mirror own road occupancy")
              << (useTrafficStress ? ", self-mirror stress" : "") << '\n';

    struct Formation {
        std::vector<int> types;
        FormationRank rank{-1, -1, -1, -1, -1, -1};
        std::tuple<int, int, int> score{-1, -1, -1};
        bool useRegions = false;
        bool valid = false;
    };
    const int maxSupplyCount = agentCount / 2;
    std::vector<Formation> formations(maxSupplyCount + 1);
    const long long mapCells = 1LL * config.map.height * config.map.width;
    const long long estimatedFormationWork =
        1LL * (maxSupplyCount + 1) * std::max<size_t>(1, config.daySteps.size()) *
        std::max<size_t>(1, config.spots.size()) * std::max(1LL, mapCells);
    const bool boundedFormation = agentCount > 10 || mapCells > 600 ||
                                  config.spots.size() > 40 ||
                                  estimatedFormationWork > 180000;
    const bool timedFormation = boundedFormation && simulationBudgetMs > 0;
    const bool shortRollout = boundedFormation && !timedFormation;
    const int rolloutDays = shortRollout
        ? std::min<int>(2, config.daySteps.size())
        : static_cast<int>(config.daySteps.size());
    const auto formationStarted = std::chrono::steady_clock::now();
    const auto formationDeadline = formationStarted + std::chrono::milliseconds(
        timedFormation ? simulationBudgetMs
                        : (boundedFormation ? 3000 : 24 * 60 * 60 * 1000));
    auto formationTimeUp = [&] {
        return (timedFormation || (boundedFormation && simulationBudgetMs <= 0)) &&
               std::chrono::steady_clock::now() >= formationDeadline;
    };

    Map formationMap(config.map.height, config.map.width, config.map.cells);
    const int maxDaySteps = config.daySteps.empty() ? 0 :
        *std::max_element(config.daySteps.begin(), config.daySteps.end());
    std::vector<std::vector<int>> startDistances(
        agentCount, std::vector<int>(config.spots.size(), INT_MAX));
    for (int agent = 0; agent < agentCount; ++agent) {
        if (config.map.cells.empty()) break;
        const auto paths = PathFinder::computeSSSP(
            formationMap.posToCoordinate(config.initialAgentPositions[agent]),
            formationMap, config.fuelLimit, 1.0);
        for (size_t spot = 0; spot < config.spots.size(); ++spot) {
            auto path = paths.extractPath(config.spots[spot].pos);
            if (path.found && path.totalSteps <= maxDaySteps)
                startDistances[agent][spot] = path.totalSteps;
        }
    }

    auto assignmentRank = [&](const std::vector<int>& types) {
        std::set<int> brands;
        int stock = 0;
        int distance = 0;
        for (size_t spot = 0; spot < config.spots.size(); ++spot) {
            int best = INT_MAX;
            for (int agent = 0; agent < agentCount; ++agent)
                if (types[agent] == 0) best = std::min(best, startDistances[agent][spot]);
            if (best == INT_MAX) continue;
            brands.insert(config.spots[spot].brand);
            stock += config.spots[spot].stocks;
            distance += best;
        }
        return std::make_tuple(static_cast<int>(brands.size()), stock, -distance);
    };

    auto assignmentCandidates = [&](int supplyCount) {
        std::vector<int> legacy(agentCount, 0);
        for (int i = 0; i < supplyCount; ++i) legacy[agentCount - 1 - i] = 1;
        if (agentCount <= 6) {
            std::vector<std::vector<int>> selected{legacy};
            std::vector<int> types(agentCount, 0);
            auto enumerate = [&](auto&& self, int index, int supplies) -> void {
                if (formationTimeUp()) return;
                const int remaining = agentCount - index;
                if (supplies > supplyCount || supplies + remaining < supplyCount) return;
                if (index == agentCount) {
                    if (supplies == supplyCount && types != legacy)
                        selected.push_back(types);
                    return;
                }
                types[index] = 0;
                self(self, index + 1, supplies);
                types[index] = 1;
                self(self, index + 1, supplies + 1);
                types[index] = 0;
            };
            enumerate(enumerate, 0, 0);
            return selected;
        }
        std::vector<int> bestStatic = legacy;
        auto bestStaticRank = assignmentRank(legacy);
        bool haveEqualAlternative = false;
        std::vector<int> types(agentCount, 0);
        long long visitedNodes = 0;

        // Exact branch-and-bound when time permits. Undecided agents remain
        // Patrols in assignmentRank(), which is an admissible optimistic bound:
        // removing Patrols cannot add reachable brands/stock or shorten paths.
        auto search = [&](auto&& self, int index, int supplies) -> void {
            if ((++visitedNodes & 255) == 0 && formationTimeUp()) return;
            const int remaining = agentCount - index;
            if (supplies > supplyCount || supplies + remaining < supplyCount) return;
            const auto optimisticRank = assignmentRank(types);
            if (optimisticRank < bestStaticRank ||
                (optimisticRank == bestStaticRank && haveEqualAlternative)) return;
            if (index == agentCount) {
                if (supplies == supplyCount) {
                    auto rank = assignmentRank(types);
                    if (rank > bestStaticRank) {
                        bestStaticRank = rank;
                        bestStatic = types;
                        haveEqualAlternative = true;
                    } else if (rank == bestStaticRank && types != legacy &&
                               bestStatic == legacy) {
                        bestStatic = types;
                        haveEqualAlternative = true;
                    }
                }
                return;
            }

            if (supplies < supplyCount) {
                types[index] = 1;
                self(self, index + 1, supplies + 1);
            }
            if (!formationTimeUp()) {
                types[index] = 0;
                self(self, index + 1, supplies);
            }
            types[index] = 0;
        };
        search(search, 0, 0);

        std::vector<std::vector<int>> selected{legacy};
        if (bestStatic != legacy) selected.push_back(std::move(bestStatic));
        return selected;
    };

    auto evaluate = [&](int supplyCount, bool writeLog = true) -> const Formation& {
        auto& formation = formations[supplyCount];
        const auto candidates = assignmentCandidates(supplyCount);
        for (const auto& types : candidates) {
            if (formationTimeUp() &&
                (formation.valid || bestRank != invalidFormationRank)) break;
            Formation assignment;
            assignment.types = types;

            for (bool useRegions : {false, true}) {
                if (useRegions && !kEnablePatrolRegions) continue;
                bool valid = true;
                std::vector<std::tuple<int, int, int>> scenarioScores;
                std::vector<int> trafficMultipliers;
                if (config.players > 2) {
                    trafficMultipliers.push_back(0);
                    if (useTrafficStress) trafficMultipliers.push_back(config.players);
                } else {
                    trafficMultipliers.push_back(config.players);
                }
                for (int trafficMultiplier : trafficMultipliers) {
                    GameState state{};
                    for (int i = 0; i < agentCount; ++i) {
                        state.agents.push_back({assignment.types[i],
                            config.initialAgentPositions[i], config.fuelLimit});
                    }
                    Map map(config.map.height, config.map.width, config.map.cells);
                    Solver solver;
                    solver.useRegions_ = useRegions;
                    solver.enableTwoDayLookahead_ = false;
                    MatchScore score;
                    std::vector<long long> previousOccupancy;
                    for (int day = 0; day < rolloutDays; ++day) {
                        if (day > 0 && formationTimeUp() && bestRank != invalidFormationRank) {
                            valid = false;
                            break;
                        }
                        state.day = day;
                        auto actions = solver.solve(config, state, map, !shortRollout);
                        auto result = MoveSimulator::simulateDay(config, state, actions, map);
                        if (!result.valid) {
                            valid = false;
                            break;
                        }
                        score.add(result);
                        state.agents = std::move(result.agents);
                        if (day + 1 < static_cast<int>(config.daySteps.size())) {
                            for (auto& count : result.roadOccupancy)
                                count *= trafficMultiplier;
                            state.traffics = MoveSimulator::nextTraffic(
                                config, previousOccupancy, result.roadOccupancy);
                            previousOccupancy = std::move(result.roadOccupancy);
                        }
                        solver.commitLastPlan();
                    }
                    if (!valid) break;
                    scenarioScores.push_back(score.rank());
                }

                if (writeLog) {
                    std::cerr << "[FORMATION] supply=" << supplyCount
                              << " types=" << formatTypes(assignment.types)
                              << " regions=" << (useRegions ? "on" : "off");
                    for (size_t scenario = 0; scenario < scenarioScores.size(); ++scenario) {
                        const auto& score = scenarioScores[scenario];
                        std::cerr << (scenario == 0 ? " score=" : " stress=")
                                  << std::get<0>(score) << '/' << std::get<1>(score)
                                  << '/' << std::get<2>(score);
                    }
                    std::cerr << (valid ? "" : " invalid") << '\n';
                }

                if (valid && !scenarioScores.empty()) {
                    const auto& neutral = scenarioScores.front();
                    const auto& stress = scenarioScores.back();
                    FormationRank rank{
                        std::get<0>(neutral), std::get<0>(stress),
                        std::get<1>(neutral), std::get<1>(stress),
                        std::get<2>(neutral), std::get<2>(stress)};
                    if (!assignment.valid || rank > assignment.rank) {
                        assignment.rank = rank;
                        assignment.score = neutral;
                        assignment.useRegions = useRegions;
                        assignment.valid = true;
                    }
                }
            }
            if (assignment.valid) {
                const auto primary = std::make_tuple(
                    std::get<0>(assignment.rank), std::get<1>(assignment.rank),
                    std::get<2>(assignment.rank), std::get<3>(assignment.rank));
                const auto currentPrimary = std::make_tuple(
                    std::get<0>(formation.rank), std::get<1>(formation.rank),
                    std::get<2>(formation.rank), std::get<3>(formation.rank));
                if (!formation.valid || primary > currentPrimary ||
                    (primary == currentPrimary && config.players > 2 &&
                     assignment.rank > formation.rank))
                    formation = std::move(assignment);
            }
        }

        const auto formationPrimary = std::make_tuple(
            std::get<0>(formation.rank), std::get<1>(formation.rank),
            std::get<2>(formation.rank), std::get<3>(formation.rank));
        const auto bestPrimary = std::make_tuple(
            std::get<0>(bestRank), std::get<1>(bestRank),
            std::get<2>(bestRank), std::get<3>(bestRank));
        // A short bounded rollout is reliable for coverage, but early servings
        // can favor too few Supply vehicles and lose daily brands later. Keep
        // the center-first incumbent unless another count improves Types/Daily.
        const bool improvesBest = shortRollout
            ? (!formation.valid ? false : formationPrimary > bestPrimary)
            : (formation.rank > bestRank ||
               (formation.rank == bestRank && supplyCount < bestSupplyCount));
        if (formation.valid && improvesBest) {
            bestRank = formation.rank;
            bestScore = formation.score;
            bestTypes = formation.types;
            bestUseRegions = formation.useRegions;
            bestSupplyCount = supplyCount;
        }
        return formation;
    };
    // Search likely counts first, but visit every count exactly once when the
    // search space fits. Large formations stop at the deadline and use the
    // best completed simulation instead of repeating an already tested case.
    const int center = (maxSupplyCount + 1) / 2;
    std::vector<int> searchOrder{center};
    for (int distance = 1; searchOrder.size() < formations.size(); ++distance) {
        if (center - distance >= 0) searchOrder.push_back(center - distance);
        if (center + distance <= maxSupplyCount)
            searchOrder.push_back(center + distance);
    }
    for (int supplyCount : searchOrder) {
        if (formationTimeUp() && bestRank != invalidFormationRank) break;
        evaluate(supplyCount);
    }

    std::cerr << "[FORMATION] selected score=" << std::get<0>(bestScore) << '/'
              << std::get<1>(bestScore) << '/' << std::get<2>(bestScore) << " types=[";
    for (int i = 0; i < agentCount; ++i) {
        if (i > 0) std::cerr << ',';
        std::cerr << bestTypes[i];
    }
    const auto formationMs = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now() - formationStarted).count();
    std::cerr << "] regions=" << (bestUseRegions ? "on" : "off")
              << " mode=" << (timedFormation ? "timed" :
                              (boundedFormation ? "bounded" : "exact"))
              << " rolloutDays=" << rolloutDays << " elapsedMs=" << formationMs << '\n';

    if (selectedUseRegions) *selectedUseRegions = bestUseRegions;

    return bestTypes;
}

std::vector<int> Solver::decideAgentTypes(
    const GameConfig& config, long long simulationBudgetMs) {
    return AgentStrategy::decideAgentTypes(
        config, &useRegions_, simulationBudgetMs);
}

void Solver::commitLastPlan() {
    if (!hasPendingPlan_) return;
    collectedBrandsTotal_ = pendingBrandsTotal_;
    hasPendingPlan_ = false;
}

void Solver::discardLastPlan() {
    pendingBrandsTotal_.clear();
    hasPendingPlan_ = false;
}

int Solver::getPlannedTargetSpot(int agentIdx) const {
    if (agentIdx >= 0 && agentIdx < static_cast<int>(currentTargets_.size())) {
        return currentTargets_[agentIdx];
    }
    return -1;
}

Position Solver::getPlannedTargetPosition(int agentIdx) const {
    if (agentIdx >= 0 && agentIdx < static_cast<int>(currentTargetPositions_.size())) {
        return currentTargetPositions_[agentIdx];
    }
    return {-1, -1};
}

int Solver::getPlannedStepSpot(int agentIdx, int step) const {
    if (agentIdx >= 0 && agentIdx < static_cast<int>(plannedStepSpots_.size()) &&
        step >= 0 && step < static_cast<int>(plannedStepSpots_[agentIdx].size())) {
        return plannedStepSpots_[agentIdx][step];
    }
    return -1;
}

Position Solver::getPlannedStepPosition(int agentIdx, int step) const {
    if (agentIdx >= 0 && agentIdx < static_cast<int>(plannedStepPositions_.size()) &&
        step >= 0 && step < static_cast<int>(plannedStepPositions_[agentIdx].size())) {
        return plannedStepPositions_[agentIdx][step];
    }
    return {-1, -1};
}

int Solver::getSupportedPatrol(int agentIdx) const {
    if (agentIdx >= 0 && agentIdx < static_cast<int>(supportedPatrols_.size())) {
        return supportedPatrols_[agentIdx];
    }
    return -1;
}

// =============================================================================
// Reset trạng thái đầu ngày
// =============================================================================

void Solver::resetDailyState(const GameConfig& config, int numAgents) {
    // Reset stock to max for each spot (stock replenishes each day)
    remainingStock_.resize(config.spots.size());
    for (size_t i = 0; i < config.spots.size(); ++i) {
        remainingStock_[i] = config.spots[i].stocks;
    }

    // Reset visited spots for each patrol
    visitedSpotsToday_.assign(numAgents, {});
    claimedSpots_.clear();

    // Reset current targets
    currentTargets_.assign(numAgents, -1);
    currentTargetPositions_.assign(numAgents, {-1, -1});
    supportedPatrols_.assign(numAgents, -1);
    plannedStepSpots_.assign(numAgents, {});
    plannedStepPositions_.assign(numAgents, {});
}

// =============================================================================
// MAIN SOLVER — Nhạc trưởng điều phối các module
// =============================================================================

std::vector<std::vector<int>> Solver::solve(
    const GameConfig& config,
    const GameState& state,
    Map& map,
    bool rewardRoutes
) {
    int daySteps = config.getDaySteps(state.day);

    int numAgents = static_cast<int>(state.agents.size());
    std::vector<std::vector<int>> actions(numAgents);

    if (daySteps <= 0) return actions;

    // Preserve a complete ordinary-route plan, including its supply repairs.
    Solver ordinarySolver = *this;
    std::vector<std::vector<int>> ordinaryActions;
    if (rewardRoutes) ordinaryActions = ordinarySolver.solve(config, state, map, false);

    // 1. Cập nhật giao thông trên bản đồ
    map.updateTraffic(state.traffics);
    PathCache pathCache(map);
    const auto nowEpochMs = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::system_clock::now().time_since_epoch()).count();
    const long long deadlineMs = state.endsAt > 0 ? state.endsAt * 1000LL - 750 : LLONG_MAX;
    auto hasSearchTime = [&] {
        // Ignore stale fixture timestamps used by local stdin tests.
        if (deadlineMs < nowEpochMs - 60000) return true;
        auto current = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch()).count();
        return current < deadlineMs;
    };
    if (rewardRoutes && !hasSearchTime()) {
        *this = std::move(ordinarySolver);
        return ordinaryActions;
    }

    struct Candidate {
        std::vector<std::vector<int>> actions;
        std::vector<int> targets, supported;
        std::vector<Position> targetPositions;
        std::vector<std::vector<int>> stepSpots;
        std::vector<std::vector<Position>> stepPositions;
        std::set<int> brands;
        std::tuple<int, int, int, int, int> rank{-1, -1, -1, -1, -1};
        bool metadataStale = false;
    } best;
    std::vector<Candidate> shortlist;

    std::vector<int> original(numAgents);
    std::iota(original.begin(), original.end(), 0);
    std::vector<int> patrols;
    for (int i : original) if (state.agents[i].kind == 0) patrols.push_back(i);
    std::set<int> mapBrands;
    for (const auto& spot : config.spots) mapBrands.insert(spot.brand);
    const size_t supplyCount = static_cast<size_t>(numAgents) - patrols.size();
    // ponytail: with several refuel vehicles but fewer than one per two patrols,
    // four brands per patrol is the measured point where fuel continuity wins.
    const bool prioritizeEndurance = !patrols.empty() &&
        mapBrands.size() >= patrols.size() * 4 &&
        supplyCount >= 2 && supplyCount * 2 < patrols.size();
    const auto regions = assignPatrolRegions(
        config, state, map, patrols, daySteps, pathCache);
    const std::vector<std::set<int>> noRegions(numAgents);
    std::vector<std::vector<int>> orders;
    auto addOrder = [&](const std::vector<int>& order) {
        if (std::find(orders.begin(), orders.end(), order) == orders.end())
            orders.push_back(order);
    };
    if (patrols.size() <= 4) {
        std::sort(patrols.begin(), patrols.end());
        do addOrder(patrols); while (std::next_permutation(patrols.begin(), patrols.end()));
    } else {
        addOrder(patrols);
        auto reversed = patrols;
        std::reverse(reversed.begin(), reversed.end());
        addOrder(reversed);
        for (size_t shift = 1; shift < patrols.size() && orders.size() < 24; ++shift) {
            auto rotated = patrols;
            std::rotate(rotated.begin(), rotated.begin() + shift, rotated.end());
            addOrder(rotated);
            std::reverse(rotated.begin(), rotated.end());
            addOrder(rotated);
        }
        auto lowFuelFirst = patrols;
        std::stable_sort(lowFuelFirst.begin(), lowFuelFirst.end(), [&](int a, int b) {
            return state.agents[a].fuel < state.agents[b].fuel;
        });
        addOrder(lowFuelFirst);
    }

    auto evaluateCandidate = [&](Candidate& candidate) {
        auto result = MoveSimulator::simulateDay(config, state, candidate.actions, map);
        if (!result.valid) return;
        int newTypes = 0;
        int patrolFuel = 0;
        int nextReachableTotal = 0;
        for (int brand : result.brands) newTypes += !collectedBrandsTotal_.count(brand);
        for (const auto& agent : result.agents) if (agent.kind == 0) patrolFuel += agent.fuel;
        std::set<int> nextReachableBrands;
        if (state.day + 1 < static_cast<int>(config.daySteps.size())) {
            int nextSteps = config.getDaySteps(state.day + 1);
            for (const auto& nextAgent : result.agents) {
                if (nextAgent.kind != 0 || nextAgent.fuel <= 0) continue;
                Position from = map.posToCoordinate(nextAgent.pos);
                auto reachable = PathFinder::computeSSSP(from, map, nextAgent.fuel, 1.0);
                if (config.players > 2) {
                    std::set<int> agentReachableBrands;
                    for (const auto& spot : config.spots) {
                        auto path = reachable.extractPath(spot.pos);
                        if (path.found && path.totalSteps <= nextSteps) {
                            nextReachableBrands.insert(spot.brand);
                            agentReachableBrands.insert(spot.brand);
                        }
                    }
                    nextReachableTotal += static_cast<int>(agentReachableBrands.size());
                } else {
                    for (const auto& spot : config.spots) {
                        auto path = reachable.extractPath(spot.pos);
                        if (path.found && path.totalSteps <= nextSteps)
                            nextReachableBrands.insert(spot.brand);
                    }
                }
            }
        }
        if (state.day + 1 == static_cast<int>(config.daySteps.size())) patrolFuel = 0;
        // Match the official whole-match priority. Reachable brands precede
        // today's servings because they protect the higher-priority Daily score
        // on following days; the two-day rollout below replaces this proxy with
        // simulated Types, total Daily, and total Serving.
        // Preserve union coverage first, then prefer plans where several Patrols
        // remain capable of collecting next day. Union-only scoring treated one
        // healthy Patrol as equivalent to a full active fleet.
        const int coverageBase = static_cast<int>(patrols.size() * mapBrands.size()) + 1;
        const int nextCoverage = config.players > 2
            ? static_cast<int>(nextReachableBrands.size()) * coverageBase + nextReachableTotal
            : static_cast<int>(nextReachableBrands.size());
        candidate.rank = {newTypes, static_cast<int>(result.brands.size()), nextCoverage,
                          static_cast<int>(result.collections.size()), patrolFuel};
        candidate.brands = collectedBrandsTotal_;
        candidate.brands.insert(result.brands.begin(), result.brands.end());
    };

    auto considerCandidate = [&](Candidate candidate) {
        if (std::get<0>(candidate.rank) < 0) return;
        if (candidate.rank > best.rank) best = candidate;
        if (std::any_of(shortlist.begin(), shortlist.end(), [&](const auto& existing) {
                return existing.actions == candidate.actions;
            })) return;
        shortlist.push_back(std::move(candidate));
        std::stable_sort(shortlist.begin(), shortlist.end(), [](const auto& a, const auto& b) {
            return a.rank > b.rank;
        });
        if (shortlist.size() > 8) shortlist.resize(8);
    };

    auto refineCandidate = [&](Candidate candidate) {
        if (!hasSearchTime() || std::get<0>(candidate.rank) < 0) return candidate;
        auto refined = candidate.actions;
        SupplyPlanner::improveDay(config, state, map, refined,
            collectedBrandsTotal_, deadlineMs < nowEpochMs - 60000 ? LLONG_MAX : deadlineMs, rewardRoutes);
        if (refined == candidate.actions) return candidate;
        Candidate improved = candidate;
        improved.actions = std::move(refined);
        improved.rank = {-1, -1, -1, -1, -1};
        evaluateCandidate(improved);
        if (improved.rank > candidate.rank) {
            improved.metadataStale = true;
            return improved;
        }
        return candidate;
    };

    auto planCandidate = [&](const std::vector<int>& order,
                             bool officialRanking, bool exclusiveClaims,
                             const std::vector<std::set<int>>& candidateRegions,
                             bool prioritizeMatchTypes,
                             const std::vector<std::pair<int, int>>& forcedTargets = {}) {
        resetDailyState(config, numAgents);
        Candidate candidate;
        candidate.actions.resize(numAgents);
        std::set<int> matchBrands = collectedBrandsTotal_;
        std::set<int> dailyBrands;
        for (int i = 0; i < numAgents; ++i) {
            if (state.agents[i].kind != 0) continue;
            for (size_t si = 0; si < config.spots.size(); ++si) {
                if (config.spots[si].pos != state.agents[i].pos) continue;
                visitedSpotsToday_[i].insert(static_cast<int>(si));
                if (remainingStock_[si] <= 0) break;
                --remainingStock_[si];
                matchBrands.insert(config.spots[si].brand);
                dailyBrands.insert(config.spots[si].brand);
                break;
            }
        }
        auto firstSpots = assignFirstSpots(
            config, state, map, patrols, daySteps, remainingStock_,
            visitedSpotsToday_, pathCache, candidateRegions, matchBrands, dailyBrands,
            prioritizeMatchTypes);
        for (const auto& [responsiblePatrol, requiredSpot] : forcedTargets) {
            for (int p : patrols)
                if (p != responsiblePatrol && firstSpots[p] == requiredSpot)
                    firstSpots[p] = -2;
            firstSpots[responsiblePatrol] = requiredSpot;
        }
        for (int i : order) {
            const Agent& agent = state.agents[i];
            if (agent.kind != 0) continue;
            candidate.actions[i] = PatrolPlanner::planDay(
                config, map, map.posToCoordinate(agent.pos), daySteps, agent.fuel,
                remainingStock_, visitedSpotsToday_[i], matchBrands, dailyBrands,
                currentTargets_[i], currentTargetPositions_[i], plannedStepSpots_[i],
                plannedStepPositions_[i], claimedSpots_, officialRanking, exclusiveClaims,
                &pathCache, firstSpots[i], candidateRegions[i], rewardRoutes);
        }
        std::set<int> suppliedPatrols;
        for (int i = 0; i < numAgents; ++i) {
            const Agent& agent = state.agents[i];
            if (agent.kind != 1) continue;
            candidate.actions[i] = SupplyPlanner::planDay(
                config, map, agent, state.agents, i, daySteps, currentTargets_,
                currentTargetPositions_, candidate.actions,
                supportedPatrols_[i], currentTargets_[i],
                currentTargetPositions_[i], plannedStepSpots_[i], plannedStepPositions_[i],
                matchBrands, remainingStock_, suppliedPatrols, prioritizeEndurance);
            if (supportedPatrols_[i] >= 0) suppliedPatrols.insert(supportedPatrols_[i]);
        }

        // ponytail: one refuel suffix per patrol/day; evaluate multiple meetings
        // only if recorded matches show a second refill pays for its search cost.
        std::set<int> extendedPatrols;
        for (int supply = 0; supply < numAgents; ++supply) {
            int patrol = supportedPatrols_[supply];
            if (patrol < 0 || !extendedPatrols.insert(patrol).second) continue;

            auto movementPrefix = [&](int agent, Position& finalPos, int& readyAt) {
                std::vector<int> prefix;
                finalPos = map.posToCoordinate(state.agents[agent].pos);
                readyAt = 0;
                for (int action : candidate.actions[agent]) {
                    if (action < 0) break;
                    readyAt += map.getTravelTime(finalPos);
                    finalPos = map.nextPosition(finalPos, action);
                    prefix.push_back(action);
                }
                return prefix;
            };

            Position patrolPos, supplyPos;
            int patrolReadyAt = 0, supplyReadyAt = 0;
            auto patrolPrefix = movementPrefix(patrol, patrolPos, patrolReadyAt);
            movementPrefix(supply, supplyPos, supplyReadyAt);
            int resumeAt = std::max(patrolReadyAt, supplyReadyAt) + 1;
            if (patrolPos != supplyPos || resumeAt >= daySteps) continue;

            std::vector<int> suffixSpots;
            std::vector<Position> suffixPositions;
            int suffixTarget = -1;
            Position suffixTargetPos = patrolPos;
            auto suffix = PatrolPlanner::planDay(
                config, map, patrolPos, daySteps - resumeAt, config.fuelLimit,
                remainingStock_, visitedSpotsToday_[patrol], matchBrands, dailyBrands,
                suffixTarget, suffixTargetPos, suffixSpots, suffixPositions,
                claimedSpots_, officialRanking, exclusiveClaims, &pathCache,
                -2, candidateRegions[patrol], rewardRoutes);

            candidate.actions[patrol] = std::move(patrolPrefix);
            candidate.actions[patrol].push_back(-(resumeAt - patrolReadyAt));
            candidate.actions[patrol].insert(candidate.actions[patrol].end(),
                                              suffix.begin(), suffix.end());
            currentTargets_[patrol] = suffixTarget;
            currentTargetPositions_[patrol] = suffixTargetPos;
            for (int step = patrolReadyAt; step < resumeAt; ++step) {
                plannedStepSpots_[patrol][step] = -1;
                plannedStepPositions_[patrol][step] = patrolPos;
            }
            for (size_t step = 0; step < suffixSpots.size(); ++step) {
                plannedStepSpots_[patrol][resumeAt + step] = suffixSpots[step];
                plannedStepPositions_[patrol][resumeAt + step] = suffixPositions[step];
            }
        }

        evaluateCandidate(candidate);
        if (std::get<0>(candidate.rank) < 0) return candidate;
        candidate.targets = currentTargets_;
        candidate.targetPositions = currentTargetPositions_;
        candidate.supported = supportedPatrols_;
        candidate.stepSpots = plannedStepSpots_;
        candidate.stepPositions = plannedStepPositions_;
        return candidate;
    };

    // Preserve the former policy as a candidate, then try official-score
    // ranking under multiple patrol orders and select by simulated outcome.
    const auto& selectedRegions = useRegions_ ? regions : noRegions;
    considerCandidate(planCandidate(original, false, true, selectedRegions, false));
    // Earlier days already rank every target by missing match type and retain
    // future daily coverage. On the final day there is no future endpoint to
    // protect, so make the first wave explicitly finish any remaining types.
    const bool missingMatchTypes = collectedBrandsTotal_.size() < mapBrands.size() &&
        state.day + 1 == static_cast<int>(config.daySteps.size());
    for (const auto& order : orders) {
        if (!hasSearchTime()) break;
        considerCandidate(planCandidate(order, true, false, selectedRegions, false));
    }
    if (missingMatchTypes && hasSearchTime()) {
        auto matchPriority = planCandidate(original, true, false, selectedRegions, true);
        if (std::get<0>(matchPriority.rank) > std::get<0>(best.rank))
            considerCandidate(std::move(matchPriority));
    }
    // Also sample spatially balanced ownership. Regions are only a soft
    // preference, so the simulator can keep the ordinary plan whenever the
    // partition does not improve real coverage and collections.
    // Region ownership paid off on the 24-spot map but changed future endpoints
    // for the already saturated smaller replay. Sample it only when each Patrol
    // otherwise has to cover more than four spots on average.
    if (!useRegions_ && config.spots.size() > patrols.size() * 4) {
        for (const auto& order : orders) {
            if (!hasSearchTime()) break;
            considerCandidate(planCandidate(order, true, false, regions, false));
        }
    }
    // Assign a named patrol to each still-missing brand; never hard-code a brand
    // number or map corner. Replan the rest after that patrol reserves its route.
    for (size_t spot = 0; spot < config.spots.size() && hasSearchTime(); ++spot) {
        auto current = MoveSimulator::simulateDay(config, state, best.actions, map);
        if (!current.valid || current.brands.count(config.spots[spot].brand)) continue;

        // ponytail: scan one-edge detours only; use k-opt if traces show that
        // missing brands regularly require replacing two or more route legs.
        // Truncating only the tail trades a duplicate final visit for a nearby
        // missing brand while preserving the coordinated part of the plan.
        for (int p : patrols) {
            auto pos = map.posToCoordinate(state.agents[p].pos);
            const auto originalActions = best.actions[p];
            for (size_t edge = 0; edge < originalActions.size() && hasSearchTime(); ++edge) {
                int action = originalActions[edge];
                if (action < 0) continue;
                auto next = map.nextPosition(pos, action);
                auto viaMissing = pathCache.get(pos, INT_MAX, 1.0)
                    .extractPath(config.spots[spot].pos);
                auto rejoin = pathCache.get(map.posToCoordinate(config.spots[spot].pos),
                                             INT_MAX, 1.0)
                    .extractPath(map.coordinateToPos(next));
                if (viaMissing.found && rejoin.found) {
                    std::vector<int> detour;
                    detour.insert(detour.end(), originalActions.begin(), originalActions.begin() + edge);
                    detour.insert(detour.end(), viaMissing.directions.begin(), viaMissing.directions.end());
                    detour.insert(detour.end(), rejoin.directions.begin(), rejoin.directions.end());
                    detour.insert(detour.end(), originalActions.begin() + edge + 1, originalActions.end());

                    std::vector<int> fitted;
                    auto fittedPos = map.posToCoordinate(state.agents[p].pos);
                    int used = 0;
                    for (int a : detour) {
                        int duration = a < 0 ? -a : map.getTravelTime(fittedPos);
                        if (used + duration > daySteps) {
                            if (a < 0 && used < daySteps) {
                                fitted.push_back(-(daySteps - used));
                                used = daySteps;
                            }
                            break;
                        }
                        fitted.push_back(a);
                        used += duration;
                        if (a >= 0) fittedPos = map.nextPosition(fittedPos, a);
                    }
                    MoveSimulator::padWithWait(fitted, used, daySteps);

                    Candidate candidate = best;
                    candidate.actions[p] = std::move(fitted);
                    candidate.rank = {-1, -1, -1, -1, -1};
                    candidate.metadataStale = true;
                    evaluateCandidate(candidate);
                    considerCandidate(std::move(candidate));
                }
                pos = next;
            }
        }

        for (int p : patrols) {
            if (!hasSearchTime()) break;
            auto route = pathCache.get(map.posToCoordinate(state.agents[p].pos),
                state.agents[p].fuel, 1.0).extractPath(config.spots[spot].pos);
            if (!route.found || route.totalSteps > daySteps) continue;
            auto order = patrols;
            order.erase(std::find(order.begin(), order.end(), p));
            order.insert(order.begin(), p);
            auto candidate = planCandidate(
                order, true, false, selectedRegions, false,
                {{p, static_cast<int>(spot)}});
            considerCandidate(std::move(candidate));
        }
    }

    // A single forced brand can merely swap which brand is missing. Repair two
    // missing brands together on distinct Patrols and accept only a simulated
    // improvement in the official lexicographic score.
    auto pairedBase = MoveSimulator::simulateDay(config, state, best.actions, map);
    if (pairedBase.valid && state.agents.size() <= 6 && patrols.size() >= 2) {
        std::vector<std::vector<int>> missingBrandSpots;
        for (int brand : mapBrands) {
            if (pairedBase.brands.count(brand)) continue;
            std::vector<int> spots;
            for (size_t spot = 0; spot < config.spots.size(); ++spot)
                if (config.spots[spot].brand == brand)
                    spots.push_back(static_cast<int>(spot));
            if (!spots.empty()) missingBrandSpots.push_back(std::move(spots));
        }
        int pairedCandidates = 0;
        for (size_t a = 0; a < missingBrandSpots.size() && hasSearchTime(); ++a) {
            for (size_t b = a + 1; b < missingBrandSpots.size() && hasSearchTime(); ++b) {
                for (int firstPatrol : patrols) for (int secondPatrol : patrols) {
                    if (firstPatrol == secondPatrol || pairedCandidates >= 48 ||
                        !hasSearchTime()) continue;
                    for (int firstSpot : missingBrandSpots[a])
                        for (int secondSpot : missingBrandSpots[b]) {
                            if (pairedCandidates++ >= 48 || !hasSearchTime()) break;
                            auto order = patrols;
                            order.erase(std::find(order.begin(), order.end(), firstPatrol));
                            order.erase(std::find(order.begin(), order.end(), secondPatrol));
                            order.insert(order.begin(), secondPatrol);
                            order.insert(order.begin(), firstPatrol);
                            considerCandidate(planCandidate(
                                order, true, false, selectedRegions, false,
                                {{firstPatrol, firstSpot}, {secondPatrol, secondSpot}}));
                        }
                }
            }
        }
    }
    considerCandidate(refineCandidate(best));
    if (rewardRoutes) {
        Candidate ordinary;
        ordinary.actions = ordinaryActions;
        ordinary.metadataStale = true;
        evaluateCandidate(ordinary);
        considerCandidate(std::move(ordinary));
    }

    if (rewardRoutes && enableTwoDayLookahead_ &&
        state.day + 1 < static_cast<int>(config.daySteps.size()) &&
        config.players > 0 && config.players <= 2 && config.busyThreshold > 0 &&
        config.jammedThreshold > config.busyThreshold && hasSearchTime()) {
        // Re-rank a small beam with a real next-day rollout. The nested solve uses
        // the ordinary planner, so lookahead stops at exactly two days. Include
        // near-best current plans and compare their two-day official score.
        // Mirroring every opponent is only a useful stress scenario in a
        // two-player match; with many teams it invents concentrated traffic and
        // can steer the live plan away from higher Daily coverage.
        std::vector<Candidate> forecastCandidates = shortlist;
        if (forecastCandidates.size() > 4) forecastCandidates.resize(4);
        if (forecastCandidates.size() < 2) forecastCandidates.clear();
        const auto baselineActions = best.actions;
        std::tuple<int, int, int, int, int> baselineForecast{-1, -1, -1, -1, -1};
        bool forecasted = false;
        Candidate forecastBest;
        for (auto candidate : forecastCandidates) {
            if (!hasSearchTime()) break;
            auto today = MoveSimulator::simulateDay(config, state, candidate.actions, map);
            if (!today.valid) continue;

            GameState nextState{};
            nextState.day = state.day + 1;
            nextState.agents = today.agents;
            nextState.endsAt = state.endsAt; // Nested search shares the live deadline.
            auto mirrored = today.roadOccupancy;
            for (auto& count : mirrored) count *= config.players;
            nextState.traffics = MoveSimulator::nextTraffic(config, {}, mirrored);

            Map nextMap(config.map.height, config.map.width, config.map.cells);
            Solver forecastSolver = *this;
            forecastSolver.collectedBrandsTotal_ = candidate.brands;
            forecastSolver.pendingBrandsTotal_.clear();
            forecastSolver.hasPendingPlan_ = false;
            forecastSolver.enableTwoDayLookahead_ = false;
            auto nextActions = forecastSolver.solve(config, nextState, nextMap, false);
            auto tomorrow = MoveSimulator::simulateDay(
                config, nextState, nextActions, nextMap);
            if (!tomorrow.valid) continue;

            auto combinedBrands = candidate.brands;
            combinedBrands.insert(tomorrow.brands.begin(), tomorrow.brands.end());
            int fresh = 0, fuel = 0;
            for (int brand : combinedBrands) fresh += !collectedBrandsTotal_.count(brand);
            for (const auto& agent : tomorrow.agents)
                if (agent.kind == 0) fuel += agent.fuel;
            candidate.rank = {
                fresh,
                static_cast<int>(today.brands.size() + tomorrow.brands.size()),
                static_cast<int>(today.collections.size() + tomorrow.collections.size()),
                static_cast<int>(tomorrow.brands.size()), fuel
            };
            if (candidate.actions == baselineActions)
                baselineForecast = candidate.rank;
            if (!forecasted || candidate.rank > forecastBest.rank) {
                forecastBest = std::move(candidate);
                forecasted = true;
            }
        }
        const auto baselinePrimary = std::make_pair(
            std::get<0>(baselineForecast), std::get<1>(baselineForecast));
        const auto forecastPrimary = std::make_pair(
            std::get<0>(forecastBest.rank), std::get<1>(forecastBest.rank));
        // A two-day serving gain is too short-horizon to justify changing later
        // endpoints. Adopt lookahead only for the higher-priority Types/Daily.
        if (forecasted && baselinePrimary.first >= 0 &&
            forecastPrimary > baselinePrimary)
            best = std::move(forecastBest);
    }
    if (removeRedundantFinalDaySupplies(config, state, map, best.actions,
                                        collectedBrandsTotal_))
        best.metadataStale = true;
    actions = best.actions;
    auto improved = MoveSimulator::simulateDay(config, state, actions, map);
    if (improved.valid && best.metadataStale) {
        if (best.targets.size() != static_cast<size_t>(numAgents))
            best.targets.assign(numAgents, -1);
        if (best.targetPositions.size() != static_cast<size_t>(numAgents))
            best.targetPositions.assign(numAgents, {-1, -1});
        if (best.supported.size() != static_cast<size_t>(numAgents))
            best.supported.assign(numAgents, -1);
        if (best.stepSpots.size() != static_cast<size_t>(numAgents))
            best.stepSpots.resize(numAgents);
        if (best.stepPositions.size() != static_cast<size_t>(numAgents))
            best.stepPositions.resize(numAgents);
        for (int i = 0; i < numAgents; ++i) {
            if (state.agents[i].kind == 1)
                best.supported[i] = -1; // A multi-stop supply has no single supported patrol.
            auto pos = map.posToCoordinate(state.agents[i].pos);
            int time = 0;
            best.stepSpots[i].assign(daySteps, -1);
            best.stepPositions[i].assign(daySteps, pos);
            for (int a : actions[i]) {
                int duration = a < 0 ? -a : map.getTravelTime(pos);
                auto to = a < 0 ? pos : map.nextPosition(pos, a);
                int spot = -1;
                for (size_t s = 0; s < config.spots.size(); ++s)
                    if (config.spots[s].pos == map.coordinateToPos(to)) spot = static_cast<int>(s);
                for (int t = time; t < time + duration; ++t) {
                    best.stepSpots[i][t] = spot;
                    best.stepPositions[i][t] = to;
                }
                time += duration;
                pos = to;
                best.targets[i] = spot;
                best.targetPositions[i] = to;
            }
        }
    }
    currentTargets_ = std::move(best.targets);
    currentTargetPositions_ = std::move(best.targetPositions);
    supportedPatrols_ = std::move(best.supported);
    plannedStepSpots_ = std::move(best.stepSpots);
    plannedStepPositions_ = std::move(best.stepPositions);
    pendingBrandsTotal_ = std::move(best.brands);
    currentDay_ = state.day;
    hasPendingPlan_ = true;

    return actions;
}

// =============================================================================
// Fallback — Tất cả xe đứng yên cả ngày
// =============================================================================

std::vector<std::vector<int>> Solver::createFallbackActions(
    const GameConfig& config,
    const GameState& state
) {
    int daySteps = config.getDaySteps(state.day);

    std::vector<std::vector<int>> fallback(state.agents.size());
    for (size_t i = 0; i < state.agents.size(); ++i) {
        if (daySteps > 0) {
            fallback[i].push_back(-daySteps);
        }
    }
    return fallback;
}
