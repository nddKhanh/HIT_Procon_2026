#include "solver/Solver.hpp"
#include "solver/PatrolPlanner.hpp"
#include "solver/SupplyPlanner.hpp"
#include "api/HttpClient.hpp"
#include "solver/MoveSimulator.hpp"
#include "solver/PathFinder.hpp"
#include <algorithm>
#include <chrono>
#include <climits>
#include <iostream>
#include <limits>
#include <numeric>
#include <tuple>

namespace {

constexpr bool kEnablePatrolRegions = false;

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
    std::vector<std::set<int>> brands(state.agents.size());
    std::vector<int> spots(config.spots.size());
    std::iota(spots.begin(), spots.end(), 0);
    std::stable_sort(spots.begin(), spots.end(), [&](int a, int b) {
        return config.spots[a].stocks > config.spots[b].stocks;
    });

    for (int spot : spots) {
        int bestPatrol = -1;
        int bestCost = std::numeric_limits<int>::max();
        int bestDistance = std::numeric_limits<int>::max();
        for (int patrol : patrols) {
            const auto& agent = state.agents[patrol];
            const auto& paths = pathCache.get(
                map.posToCoordinate(agent.pos), agent.fuel, 1.0);
            auto path = paths.extractPath(config.spots[spot].pos);
            if (!path.found || path.totalSteps > daySteps) continue;

            int duplicateBrandPenalty = brands[patrol].count(config.spots[spot].brand)
                ? std::max(1, daySteps / 4) : 0;
            int cost = path.totalSteps + workload[patrol] + duplicateBrandPenalty;
            if (cost < bestCost ||
                (cost == bestCost && path.totalSteps < bestDistance) ||
                (cost == bestCost && path.totalSteps == bestDistance && patrol < bestPatrol)) {
                bestPatrol = patrol;
                bestCost = cost;
                bestDistance = path.totalSteps;
            }
        }
        if (bestPatrol < 0) continue;
        regions[bestPatrol].insert(spot);
        workload[bestPatrol] += std::max(1, config.spots[spot].stocks);
        brands[bestPatrol].insert(config.spots[spot].brand);
    }
    return regions;
}

std::vector<int> assignFirstSpots(
    const GameConfig& config, const GameState& state, const Map& map,
    const std::vector<int>& patrols, int daySteps,
    const std::vector<int>& remainingStock,
    const std::vector<std::set<int>>& visitedToday, PathCache& pathCache,
    const std::vector<std::set<int>>& regions,
    const std::set<int>& matchBrands, const std::set<int>& dailyBrands) {
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
        const int brand = config.spots[spot].brand;
        if (std::find(brands.begin(), brands.end(), brand) == brands.end())
            brands.push_back(brand);
    }

    std::vector<std::vector<int>> brandTravel(
        patrolCount, std::vector<int>(brands.size(), unreachable));
    std::vector<std::vector<int>> brandSpot(
        patrolCount, std::vector<int>(brands.size(), -1));
    for (int p = 0; p < patrolCount; ++p) {
        for (size_t b = 0; b < brands.size(); ++b) {
            for (size_t spot = 0; spot < config.spots.size(); ++spot) {
                if (config.spots[spot].brand != brands[b] || travel[p][spot] >= unreachable)
                    continue;
                const int oldSpot = brandSpot[p][b];
                if (travel[p][spot] < brandTravel[p][b] ||
                    (travel[p][spot] == brandTravel[p][b] && oldSpot >= 0 &&
                     remainingStock[spot] > remainingStock[oldSpot])) {
                    brandTravel[p][b] = travel[p][spot];
                    brandSpot[p][b] = static_cast<int>(spot);
                }
            }
        }
    }

    struct Parent { int mask = -1; int patrol = -1; int spot = -1; };
    using FirstWaveRank = std::tuple<int, int, int, int>;
    const FirstWaveRank invalidRank{-1, -1, -1, INT_MIN};
    std::vector<FirstWaveRank> rank(stateCount, invalidRank);
    std::vector<std::vector<Parent>> parent(brands.size() + 1,
                                             std::vector<Parent>(stateCount));
    rank[0] = {0, 0, 0, 0};

    // Assign distinct reachable brands globally, preserving official score
    // order before travel: new match brands, new daily brands, then travel.
    // ponytail: O(brands * patrols * 2^patrols); use matching algorithms only
    // if future game sizes raise patrol counts beyond the current small fleet.
    for (size_t b = 0; b < brands.size(); ++b) {
        auto next = rank;
        for (int mask = 0; mask < stateCount; ++mask)
            if (rank[mask] != invalidRank) parent[b + 1][mask] = {mask, -1, -1};
        for (int mask = 0; mask < stateCount; ++mask) {
            if (rank[mask] == invalidRank) continue;
            for (int p = 0; p < patrolCount; ++p) {
                if ((mask & (1 << p)) || brandTravel[p][b] >= unreachable) continue;
                const int nextMask = mask | (1 << p);
                auto candidate = rank[mask];
                std::get<0>(candidate) += !matchBrands.count(brands[b]);
                std::get<1>(candidate) += !dailyBrands.count(brands[b]);
                ++std::get<2>(candidate);
                std::get<3>(candidate) -= brandTravel[p][b];
                if (candidate > next[nextMask]) {
                    next[nextMask] = candidate;
                    parent[b + 1][nextMask] = {mask, p, brandSpot[p][b]};
                }
            }
        }
        rank = std::move(next);
    }

    int bestMask = 0;
    for (int mask = 1; mask < stateCount; ++mask)
        if (rank[mask] > rank[bestMask]) bestMask = mask;

    int mask = bestMask;
    for (int b = static_cast<int>(brands.size()); b > 0; --b) {
        const Parent step = parent[b][mask];
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
    const GameConfig& config, bool* selectedUseRegions) {
    const int agentCount = static_cast<int>(config.initialAgentPositions.size());
    std::vector<int> bestTypes(agentCount, 0);
    // Measured-policy rollback: 1 Supply through 10 agents, 2 above 10.
    const bool fuelTight = !config.daySteps.empty() &&
        config.fuelLimit < *std::min_element(config.daySteps.begin(), config.daySteps.end());
    const int maxSupplyCount = config.players > 2 && !fuelTight
        ? std::min(agentCount / 2, std::max(1, agentCount / 3))
        : agentCount / 2;
    const int preferredSupplyCount = agentCount > 10 ? 2 : 1;
    const long long totalDaySteps = std::accumulate(
        config.daySteps.begin(), config.daySteps.end(), 0LL);
    // ponytail: total step count is a cheap fuel-demand proxy; replay before
    // replacing it with a full fleet-level fuel forecast.
    const int minSupplyCount = config.players > 2 && agentCount >= 7 &&
        1LL * config.map.height * config.map.width > 600 &&
        totalDaySteps > 2LL * config.fuelLimit && maxSupplyCount >= 2 ? 2 : 0;
    const int incumbentSupplyCount = std::min(maxSupplyCount,
        std::max(minSupplyCount, preferredSupplyCount));
    for (int i = 0; i < std::min(incumbentSupplyCount, maxSupplyCount); ++i)
        bestTypes[agentCount - 1 - i] = 1;
    auto bestRank = std::make_tuple(-1, -1, -1);
    bool bestUseRegions = false;
    std::cerr << "[FORMATION] traffic scenario: opponents mirror own road occupancy\n";

    const auto selectionStartedMs = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::system_clock::now().time_since_epoch()).count();
    // Ponytail: cap formation search at 55s. A past startsAt can be stale at agent_select, so do not
    // let it disable simulations. For a future start, retain the POST/retry reserve.
    constexpr long long formationSearchBudgetMs = 55000;
    const long long searchDeadlineMs = selectionStartedMs + formationSearchBudgetMs;
    const long long configuredStartMs = config.startsAt > 0
        ? config.startsAt * 1000LL : LLONG_MAX;
    const long long officialDeadlineMs = configuredStartMs == LLONG_MAX
        ? LLONG_MAX : configuredStartMs - api_deadline::agentSelectionReserveMs;
    const bool startIsFuture = configuredStartMs > selectionStartedMs;
    const long long selectionDeadlineMs = !startIsFuture
        ? searchDeadlineMs
        : std::max(selectionStartedMs, std::min(searchDeadlineMs, officialDeadlineMs));
    if (config.startsAt > 0 && !startIsFuture) {
        std::cerr << "[FORMATION] startsAt is stale; using 55s bounded search\n";
    } else if (config.startsAt > 0 && officialDeadlineMs <= selectionStartedMs) {
        std::cerr << "[FORMATION] too little time before startsAt; keeping incumbent\n";
    }
    auto hasSelectionTime = [&] {
        const auto currentMs = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch()).count();
        return currentMs < selectionDeadlineMs;
    };

    struct Formation {
        std::vector<int> types;
        std::tuple<int, int, int> rank{-1, -1, -1};
        bool useRegions = false;
        bool valid = false;
        bool evaluated = false;
    };
    std::vector<Formation> formations(maxSupplyCount + 1);
    auto placementCandidates = [&](int supplyCount) {
        std::vector<int> legacy(agentCount, 0);
        for (int i = 0; i < supplyCount; ++i)
            legacy[agentCount - 1 - i] = 1;
        std::vector<std::vector<int>> candidates{legacy};
        if (agentCount < 7 || supplyCount == 0 ||
            1LL * config.map.height * config.map.width <= 600 ||
            config.map.cells.empty() || config.spots.empty())
            return candidates;

        Map placementMap(config.map.height, config.map.width, config.map.cells);
        const int maxDaySteps = config.daySteps.empty() ? 0
            : *std::max_element(config.daySteps.begin(), config.daySteps.end());
        std::vector<std::vector<int>> startDistance(
            agentCount, std::vector<int>(config.spots.size(), INT_MAX));
        for (int agent = 0; agent < agentCount && hasSelectionTime(); ++agent) {
            const auto paths = PathFinder::computeSSSP(
                placementMap.posToCoordinate(config.initialAgentPositions[agent]),
                placementMap, config.fuelLimit, 1.0);
            for (size_t spot = 0; spot < config.spots.size(); ++spot) {
                const auto path = paths.extractPath(config.spots[spot].pos);
                if (path.found && path.totalSteps <= maxDaySteps)
                    startDistance[agent][spot] = path.totalSteps;
            }
        }
        auto rank = [&](const std::vector<int>& types) {
            std::set<int> brands;
            int stock = 0;
            long long distance = 0;
            for (size_t spot = 0; spot < config.spots.size(); ++spot) {
                int nearest = INT_MAX;
                for (int agent = 0; agent < agentCount; ++agent)
                    if (types[agent] == 0)
                        nearest = std::min(nearest, startDistance[agent][spot]);
                if (nearest == INT_MAX) continue;
                brands.insert(config.spots[spot].brand);
                stock += config.spots[spot].stocks;
                distance += nearest;
            }
            return std::make_tuple(static_cast<int>(brands.size()), stock, -distance);
        };

        // ponytail: keep only the legacy placement and its best static alternative;
        // a full placement-by-route joint search grows combinatorially with agents.
        auto bestTypes = legacy;
        auto bestRank = rank(legacy);
        bool haveEqualAlternative = false;
        std::vector<int> types(agentCount, 0);
        long long visitedNodes = 0;
        auto search = [&](auto&& self, int index, int supplies) -> void {
            if ((++visitedNodes & 255) == 0 && !hasSelectionTime()) return;
            const int remaining = agentCount - index;
            if (supplies > supplyCount || supplies + remaining < supplyCount) return;
            const auto optimisticRank = rank(types);
            if (optimisticRank < bestRank ||
                (optimisticRank == bestRank && haveEqualAlternative)) return;
            if (index == agentCount) {
                if (supplies == supplyCount) {
                    const auto candidateRank = rank(types);
                    if (candidateRank > bestRank) {
                        bestRank = candidateRank;
                        bestTypes = types;
                        haveEqualAlternative = true;
                    } else if (candidateRank == bestRank &&
                               types != legacy && bestTypes == legacy) {
                        bestTypes = types;
                        haveEqualAlternative = true;
                    }
                }
                return;
            }
            if (supplies < supplyCount) {
                types[index] = 1;
                self(self, index + 1, supplies + 1);
            }
            if (hasSelectionTime()) {
                types[index] = 0;
                self(self, index + 1, supplies);
            }
            types[index] = 0;
        };
        search(search, 0, 0);
        if (bestTypes != legacy) candidates.push_back(std::move(bestTypes));
        return candidates;
    };
    auto evaluate = [&](int supplyCount) -> const Formation& {
        auto& formation = formations[supplyCount];
        if (formation.evaluated || !hasSelectionTime()) return formation;
        formation.evaluated = true;
        const auto candidates = placementCandidates(supplyCount);
        for (const auto& types : candidates) {
          for (bool useRegions : {false, true}) {
            if (useRegions && !kEnablePatrolRegions) continue;
            GameState state{};
            state.endsAt = selectionDeadlineMs == LLONG_MAX
                ? 0 : (selectionDeadlineMs + 750LL) / 1000;
            for (int i = 0; i < agentCount; ++i) {
                state.agents.push_back(
                    {types[i], config.initialAgentPositions[i], config.fuelLimit});
            }

            Map map(config.map.height, config.map.width, config.map.cells);
            Solver solver;
            solver.useRegions_ = useRegions;
            solver.enableTwoDayLookahead_ = false;
            MatchScore score;
            std::vector<long long> previousOccupancy;
            bool valid = true;
            bool invalidSimulation = false;
            bool prunedByBound = false;
            int simulatedDays = 0;
            for (int day = 0;
                 day < static_cast<int>(config.daySteps.size()) && hasSelectionTime();
                 ++day) {
                state.day = day;
                const auto now = std::chrono::duration_cast<std::chrono::milliseconds>(
                    std::chrono::system_clock::now().time_since_epoch()).count();
                const long long screeningMs = agentCount >= 7 && supplyCount == 2
                    ? 4000 : 2000;
                const long long dayDeadline = std::min(selectionDeadlineMs,
                    now + screeningMs + 750);
                state.endsAt = (dayDeadline + 750) / 1000;
                auto actions = solver.solve(config, state, map);
                auto result = MoveSimulator::simulateDay(config, state, actions, map);
                if (!result.valid) {
                    valid = false;
                    invalidSimulation = true;
                    break;
                }
                score.add(result);
                state.agents = std::move(result.agents);
                if (day + 1 < static_cast<int>(config.daySteps.size())) {
                    // ponytail: unknown opponents mirror this team's traffic;
                    // use recorded/explicit opponent actions for exact match evaluation.
                    for (auto& count : result.roadOccupancy) count *= config.players;
                    state.traffics = MoveSimulator::nextTraffic(
                        config, previousOccupancy, result.roadOccupancy);
                    previousOccupancy = std::move(result.roadOccupancy);
                }
                solver.commitLastPlan();
                ++simulatedDays;
                // Without Supply, every future arrival spends at least one fuel.
                // Count one free starting brand per patrol/day: an optimistic bound,
                // not a heuristic score. Prune only when even this cannot win.
                if (supplyCount == 0 && std::get<0>(bestRank) >= 0) {
                    std::set<int> allBrands;
                    for (const auto& spot : config.spots) allBrands.insert(spot.brand);
                    int fuel = 0;
                    for (const auto& agent : state.agents) fuel += agent.fuel;
                    const int remaining = static_cast<int>(config.daySteps.size()) - simulatedDays;
                    const int dailyUpper = score.dailyTypes + std::min(
                        remaining * static_cast<int>(allBrands.size()), remaining * agentCount + fuel);
                    if (std::make_pair(static_cast<int>(allBrands.size()), dailyUpper) <
                        std::make_pair(std::get<0>(bestRank), std::get<1>(bestRank))) {
                        prunedByBound = true;
                        break;
                    }
                }
            }
            if (simulatedDays != static_cast<int>(config.daySteps.size()) ||
                !hasSelectionTime()) valid = false;

            std::cerr << "[FORMATION] supply=" << supplyCount
                      << " types=[";
            for (int i = 0; i < agentCount; ++i) {
                if (i) std::cerr << ',';
                std::cerr << types[i];
            }
            std::cerr << "]"
                      << " regions=" << (useRegions ? "on" : "off")
                      << " score=" << score.brands.size() << '/' << score.dailyTypes
                      << '/' << score.servings
                      << " outcome=" << (valid ? "complete"
                          : prunedByBound ? "pruned-bound"
                          : invalidSimulation ? "simulation-invalid"
                          : "deadline-incomplete")
                      << '\n';

            if (valid && (!formation.valid || score.rank() > formation.rank)) {
                formation.rank = score.rank();
                formation.types = types;
                formation.useRegions = useRegions;
                formation.valid = true;
            }
          }
        }

        // Keep the incumbent on exact ties; only a strictly better official tuple
        // is evidence to depart from the known-good formation policy.
        if (formation.valid && formation.rank > bestRank) {
            bestRank = formation.rank;
            bestTypes = formation.types;
            bestUseRegions = formation.useRegions;
        }
        return formation;
    };

    // Seed a measured-policy incumbent before exploring alternatives: 1 Supply
    // through 10 vehicles, 2 above 10 (clamped to a legal formation).
    if (agentCount >= 2)
        evaluate(std::min(incumbentSupplyCount, maxSupplyCount));

    // Evaluate every legal count in incumbent-distance order. Scores need not be
    // unimodal; keep the incumbent if the deadline prevents a complete rollout.
    for (int distance = 1; distance <= maxSupplyCount && hasSelectionTime(); ++distance) {
        for (int direction : {1, -1}) {
            if (!hasSelectionTime()) break;
            const int supplyCount = incumbentSupplyCount + direction * distance;
            if (supplyCount < 0 || supplyCount > maxSupplyCount) continue;
            if (supplyCount < minSupplyCount) continue;
            evaluate(supplyCount);
        }
    }

    std::cerr << "[FORMATION] selected score=" << std::get<0>(bestRank) << '/'
              << std::get<1>(bestRank) << '/' << std::get<2>(bestRank) << " types=[";
    for (int i = 0; i < agentCount; ++i) {
        if (i > 0) std::cerr << ',';
        std::cerr << bestTypes[i];
    }
    std::cerr << "] regions=" << (bestUseRegions ? "on" : "off") << '\n';
    const auto selectionFinishedMs = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::system_clock::now().time_since_epoch()).count();
    std::cerr << "[FORMATION] elapsed_ms=" << (selectionFinishedMs - selectionStartedMs)
              << " budget_remaining_ms="
              << (selectionDeadlineMs == LLONG_MAX
                      ? -1 : selectionDeadlineMs - selectionFinishedMs)
              << '\n';

    if (selectedUseRegions) *selectedUseRegions = bestUseRegions;

    return bestTypes;
}

std::vector<int> Solver::decideAgentTypes(const GameConfig& config) {
    return AgentStrategy::decideAgentTypes(config, &useRegions_);
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
    std::vector<Candidate> tiedCandidates;
    std::vector<Candidate> endpointBeam;

    std::vector<int> original(numAgents);
    std::iota(original.begin(), original.end(), 0);
    std::vector<int> patrols;
    for (int i : original) if (state.agents[i].kind == 0) patrols.push_back(i);
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
        for (int brand : result.brands) newTypes += !collectedBrandsTotal_.count(brand);
        for (const auto& agent : result.agents) if (agent.kind == 0) patrolFuel += agent.fuel;
        std::set<int> nextReachableBrands;
        if (state.day + 1 < static_cast<int>(config.daySteps.size())) {
            int nextSteps = config.getDaySteps(state.day + 1);
            for (const auto& nextAgent : result.agents) {
                if (nextAgent.kind != 0 || nextAgent.fuel <= 0) continue;
                Position from = map.posToCoordinate(nextAgent.pos);
                auto reachable = PathFinder::computeSSSP(from, map, nextAgent.fuel, 1.0);
                for (const auto& spot : config.spots) {
                    auto path = reachable.extractPath(spot.pos);
                    if (path.found && path.totalSteps <= nextSteps) {
                        nextReachableBrands.insert(spot.brand);
                    }
                }
            }
        }
        if (state.day + 1 == static_cast<int>(config.daySteps.size())) patrolFuel = 0;
        // The server compares the completed match lexicographically by match
        // brands, daily brands, then servings. Tomorrow's reachability is a
        // tie-break only after every score already on the board.
        candidate.rank = {newTypes, static_cast<int>(result.brands.size()),
                          static_cast<int>(result.collections.size()),
                          static_cast<int>(nextReachableBrands.size()), patrolFuel};
        candidate.brands = collectedBrandsTotal_;
        candidate.brands.insert(result.brands.begin(), result.brands.end());
    };

    auto officialRank = [](const Candidate& candidate) {
        return std::make_tuple(std::get<0>(candidate.rank),
                               std::get<1>(candidate.rank),
                               std::get<2>(candidate.rank));
    };
    auto considerCandidate = [&](Candidate candidate) {
        if (std::get<0>(candidate.rank) < 0) return;
        const auto candidateOfficial = officialRank(candidate);
        const auto bestOfficial = officialRank(best);
        if (candidateOfficial > bestOfficial) {
            best = candidate;
            tiedCandidates.clear();
        } else if (candidateOfficial < bestOfficial) {
            return;
        } else if (candidate.rank > best.rank) {
            best = candidate;
        }
        if (std::any_of(tiedCandidates.begin(), tiedCandidates.end(),
                        [&](const Candidate& existing) {
                            return existing.actions == candidate.actions;
                        })) return;
        tiedCandidates.push_back(std::move(candidate));
        std::stable_sort(tiedCandidates.begin(), tiedCandidates.end(),
                         [](const Candidate& a, const Candidate& b) {
                             return a.rank > b.rank;
                         });
        if (tiedCandidates.size() > 16) tiedCandidates.resize(16);
    };

    auto refineCandidate = [&](Candidate candidate) {
        if (!hasSearchTime() || std::get<0>(candidate.rank) < 0) return candidate;
        auto refined = candidate.actions;
        std::vector<std::vector<std::vector<int>>> alternatives;
        const bool keepEndpoints = rewardRoutes && enableTwoDayLookahead_ &&
            config.players > 2 && config.map.width * config.map.height <= 256 &&
            state.day + 1 < static_cast<int>(config.daySteps.size());
        SupplyPlanner::improveDay(config, state, map, refined,
            collectedBrandsTotal_, deadlineMs < nowEpochMs - 60000 ? LLONG_MAX : deadlineMs,
            rewardRoutes, keepEndpoints ? &alternatives : nullptr);
        for (auto& actions : alternatives) {
            Candidate endpoint;
            endpoint.actions = std::move(actions);
            endpoint.metadataStale = true;
            evaluateCandidate(endpoint);
            if (std::get<0>(endpoint.rank) >= 0)
                endpointBeam.push_back(std::move(endpoint));
        }
        std::stable_sort(endpointBeam.begin(), endpointBeam.end(),
            [](const Candidate& a, const Candidate& b) { return a.rank > b.rank; });
        std::set<std::vector<int>> uniqueEndpoints;
        endpointBeam.erase(std::remove_if(endpointBeam.begin(), endpointBeam.end(),
            [&](const Candidate& endpoint) {
                auto day = MoveSimulator::simulateDay(config, state, endpoint.actions, map);
                std::vector<int> key;
                for (const auto& agent : day.agents) {
                    key.push_back(agent.pos);
                    key.push_back(agent.fuel);
                }
                return !uniqueEndpoints.insert(std::move(key)).second;
            }), endpointBeam.end());
        if (endpointBeam.size() > 16) endpointBeam.resize(16);
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

    auto boostServings = [&](Candidate candidate) {
        // ponytail: bounded tail substitutions, not route-wide search. Upgrade
        // to multi-patrol k-opt only if replayed maps show this misses servings.
        constexpr size_t kTailEdges = 12;
        for (size_t pass = 0; pass < patrols.size() && hasSearchTime(); ++pass) {
            const auto baseline = MoveSimulator::simulateDay(config, state, candidate.actions, map);
            if (!baseline.valid) break;
            int baselineFresh = 0;
            for (int brand : baseline.brands)
                baselineFresh += !collectedBrandsTotal_.count(brand);
            const int baselineDaily = static_cast<int>(baseline.brands.size());
            const int baselineServings = static_cast<int>(baseline.collections.size());

            std::vector<int> targets;
            for (size_t spot = 0; spot < config.spots.size(); ++spot)
                if (baseline.remainingStock[spot] > 0) targets.push_back(static_cast<int>(spot));
            std::stable_sort(targets.begin(), targets.end(), [&](int a, int b) {
                return baseline.remainingStock[a] > baseline.remainingStock[b];
            });


            bool improved = false;
            for (int patrol : patrols) {
                if (!hasSearchTime()) break;
                const auto& patrolActions = candidate.actions[patrol];
                if (patrolActions.empty()) continue;

                std::vector<size_t> edges = {0};
                const size_t firstTailEdge = patrolActions.size() > kTailEdges
                    ? patrolActions.size() - kTailEdges : 0;
                for (size_t edge = firstTailEdge; edge < patrolActions.size(); ++edge)
                    if (std::find(edges.begin(), edges.end(), edge) == edges.end()) edges.push_back(edge);

                int step = 0;
                Position position = map.posToCoordinate(state.agents[patrol].pos);
                for (size_t edge = 0; edge < patrolActions.size() && !improved; ++edge) {
                    if (std::find(edges.begin(), edges.end(), edge) != edges.end()) {
                        std::vector<int> stock;
                        for (const auto& configuredSpot : config.spots)
                            stock.push_back(configuredSpot.stocks);
                        std::set<int> visited, brands = collectedBrandsTotal_, daily, claims;
                        for (const auto& event : baseline.collections)
                            if (event.step <= step) {
                                --stock[event.spot];
                                brands.insert(event.brand);
                                daily.insert(event.brand);
                                if (event.agent == patrol) visited.insert(event.spot);
                            }
                        const int fuel = baseline.fuelAtTime[patrol][step];
                        for (int spot : targets) {
                            if (visited.count(spot)) continue;
                            int suffixTarget = -1;
                            Position suffixTargetPos;
                            std::vector<int> suffixSpots;
                            std::vector<Position> suffixPositions;
                            auto suffix = PatrolPlanner::planDay(
                                config, map,
                                map.posToCoordinate(baseline.positionsAtTime[patrol][step]),
                                daySteps - step, fuel, stock, visited, brands, daily,
                                suffixTarget, suffixTargetPos, suffixSpots, suffixPositions,
                                claims, true, false, &pathCache, spot, {}, rewardRoutes);

                            Candidate proposal = candidate;
                            proposal.actions[patrol].assign(patrolActions.begin(),
                                                            patrolActions.begin() + edge);
                            proposal.actions[patrol].insert(proposal.actions[patrol].end(),
                                                            suffix.begin(), suffix.end());
                            const auto simulated = MoveSimulator::simulateDay(
                                config, state, proposal.actions, map);
                            if (!simulated.valid ||
                                static_cast<int>(simulated.collections.size()) <= baselineServings ||
                                static_cast<int>(simulated.brands.size()) < baselineDaily)
                                continue;
                            int fresh = 0;
                            for (int brand : simulated.brands)
                                fresh += !collectedBrandsTotal_.count(brand);
                            if (fresh < baselineFresh) continue;

                            proposal.rank = {-1, -1, -1, -1, -1};
                            proposal.metadataStale = true;
                            evaluateCandidate(proposal);
                            candidate = std::move(proposal);
                            improved = true;
                            break;
                        }
                        if (improved) break;
                    }
                    const int action = patrolActions[edge];
                    step += action < 0 ? -action : map.getTravelTime(position);
                    if (action >= 0) position = map.nextPosition(position, action);
                }
                if (improved) break;
            }
            if (!improved) break;
        }
        return candidate;
    };

    auto planCandidate = [&](const std::vector<int>& order,
                             bool officialRanking, bool exclusiveClaims,
                             const std::vector<std::set<int>>& candidateRegions,
                             int responsiblePatrol = -1, int requiredSpot = -1,
                             const std::vector<int>* forcedFirstSpots = nullptr) {
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
            visitedSpotsToday_, pathCache, candidateRegions, matchBrands, dailyBrands);
        if (forcedFirstSpots) {
            std::set<int> forced;
            for (int p : patrols)
                if (p < static_cast<int>(forcedFirstSpots->size()) && (*forcedFirstSpots)[p] >= 0)
                    forced.insert((*forcedFirstSpots)[p]);
            for (int p : patrols)
                if (forced.count(firstSpots[p])) firstSpots[p] = -2;
            for (int p : patrols)
                if (p < static_cast<int>(forcedFirstSpots->size()) && (*forcedFirstSpots)[p] >= 0)
                    firstSpots[p] = (*forcedFirstSpots)[p];
        } else if (responsiblePatrol >= 0) {
            for (int p : patrols) if (firstSpots[p] == requiredSpot) firstSpots[p] = -2;
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
                matchBrands, remainingStock_, suppliedPatrols);
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
    considerCandidate(planCandidate(original, false, true, selectedRegions));
    for (const auto& order : orders) {
        if (!hasSearchTime()) break;
        auto candidate = planCandidate(order, true, false, selectedRegions);
        considerCandidate(std::move(candidate));
    }
    // ponytail: bounded joint first-target beam; expand only if it raises Daily
    // on replayed maps without consuming the server response budget.
    const auto current = MoveSimulator::simulateDay(config, state, best.actions, map);
    if (current.valid) {
        struct Assignment { int patrol, spot, steps, fresh; };
        std::vector<Assignment> assignments;
        for (size_t spot = 0; spot < config.spots.size(); ++spot) {
            if (current.brands.count(config.spots[spot].brand)) continue;
            for (int patrol : patrols) {
                auto route = pathCache.get(map.posToCoordinate(state.agents[patrol].pos),
                                           state.agents[patrol].fuel, 1.0)
                    .extractPath(config.spots[spot].pos);
                if (!route.found || route.totalSteps > daySteps) continue;
                assignments.push_back({patrol, static_cast<int>(spot), route.totalSteps,
                    !collectedBrandsTotal_.count(config.spots[spot].brand)});
            }
        }
        std::stable_sort(assignments.begin(), assignments.end(), [](const Assignment& a,
                                                                       const Assignment& b) {
            return std::make_tuple(a.fresh, -a.steps, -a.patrol, -a.spot) >
                   std::make_tuple(b.fresh, -b.steps, -b.patrol, -b.spot);
        });
        constexpr size_t kJointSeeds = 8;
        constexpr size_t kJointPairs = 12;
        std::vector<int> seedCount(numAgents);
        std::vector<Assignment> seeds;
        for (const auto& assignment : assignments) {
            if (seedCount[assignment.patrol] >= 2) continue;
            seeds.push_back(assignment);
            ++seedCount[assignment.patrol];
            if (seeds.size() == kJointSeeds) break;
        }
        size_t tested = 0;
        for (size_t first = 0; first < assignments.size() && tested < kJointPairs && hasSearchTime(); ++first) {
            for (size_t second = first + 1;
                 second < assignments.size() && tested < kJointPairs && hasSearchTime(); ++second) {
                if (assignments[first].patrol == assignments[second].patrol ||
                    config.spots[assignments[first].spot].brand == config.spots[assignments[second].spot].brand)
                    continue;
                std::vector<int> forced(numAgents, -1);
                forced[assignments[first].patrol] = assignments[first].spot;
                forced[assignments[second].patrol] = assignments[second].spot;
                auto candidate = planCandidate(patrols, true, false, selectedRegions,
                                               -1, -1, &forced);
                considerCandidate(std::move(candidate));
                ++tested;
            }
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
                order, true, false, selectedRegions, p, static_cast<int>(spot));

            considerCandidate(std::move(candidate));
        }

    }

    considerCandidate(boostServings(refineCandidate(best)));
    if (rewardRoutes) {
        Candidate ordinary;
        ordinary.actions = ordinaryActions;
        ordinary.metadataStale = true;
        evaluateCandidate(ordinary);
        considerCandidate(std::move(ordinary));
    }
    if (rewardRoutes && enableTwoDayLookahead_ && !endpointBeam.empty() &&
        state.day + 1 < static_cast<int>(config.daySteps.size()) &&
        config.players > 0 && config.busyThreshold >= 0 &&
        config.jammedThreshold >= config.busyThreshold && hasSearchTime()) {
        // ponytail: bounded whole-horizon continuation. Keep traffic fixed in
        // each forecast, and require a candidate to rank better under both the
        // observed-traffic and self-occupancy forecasts.
        const auto epochMs = [] {
            return std::chrono::duration_cast<std::chrono::milliseconds>(
                std::chrono::system_clock::now().time_since_epoch()).count();
        };
        const long long requestedStop = std::min<long long>(epochMs() + 40000,
            deadlineMs < nowEpochMs - 60000 ? LLONG_MAX : deadlineMs);
        const long long stop = requestedStop;
        auto remainingMs = [&] { return stop - epochMs(); };
        if (remainingMs() > 30000) {
            auto forecastRank = [](const MatchScore& score, long long patrolStartWait) {
                const auto official = score.rank();
                return std::make_tuple(std::get<0>(official), std::get<1>(official),
                                       std::get<2>(official), -patrolStartWait);
            };
            auto forecast = [&](const Candidate& candidate, bool generatedTraffic) {
                MatchScore score;
                score.brands = collectedBrandsTotal_;
                long long patrolStartWait = 0;
                auto addPatrolStartWait = [&](const auto& actions, const auto& agents) {
                    for (size_t i = 0; i < std::min(actions.size(), agents.size()); ++i) {
                        if (agents[i].kind != 0) continue;
                        for (int action : actions[i]) {
                            if (action >= 0) break;
                            patrolStartWait -= static_cast<long long>(action);
                        }
                    }
                };
                addPatrolStartWait(candidate.actions, state.agents);
                auto today = MoveSimulator::simulateDay(
                    config, state, candidate.actions, map);
                if (!today.valid)
                    return std::make_pair(false, forecastRank(score, patrolStartWait));
                score.add(today);
                if (state.day + 1 >= static_cast<int>(config.daySteps.size()))
                    return std::make_pair(true, forecastRank(score, patrolStartWait));

                std::vector<Traffic> forecastTraffic = state.traffics;
                if (generatedTraffic) {
                    auto occupancy = today.roadOccupancy;
                    for (auto& count : occupancy) count *= config.players;
                    forecastTraffic = MoveSimulator::nextTraffic(config, {}, occupancy);
                }
                GameState next{};
                next.agents = today.agents;
                next.traffics = std::move(forecastTraffic);
                Solver continuation = *this;
                continuation.collectedBrandsTotal_ = score.brands;
                continuation.pendingBrandsTotal_.clear();
                continuation.hasPendingPlan_ = false;
                continuation.enableTwoDayLookahead_ = false;
                Map nextMap(config.map.height, config.map.width, config.map.cells);
                for (int day = state.day + 1;
                     day < static_cast<int>(config.daySteps.size()); ++day) {
                    if (epochMs() >= stop)
                        return std::make_pair(false, forecastRank(score, patrolStartWait));
                    next.day = day;
                    next.endsAt = (stop + 999) / 1000;
                    auto nextActions = continuation.solve(config, next, nextMap, false);
                    addPatrolStartWait(nextActions, next.agents);
                    auto result = MoveSimulator::simulateDay(
                        config, next, nextActions, nextMap);
                    if (!result.valid)
                        return std::make_pair(false, forecastRank(score, patrolStartWait));
                    score.add(result);
                    next.agents = std::move(result.agents);
                    continuation.commitLastPlan();
                }
                return std::make_pair(epochMs() < stop,
                                      forecastRank(score, patrolStartWait));
            };

            std::vector<Candidate> candidates;
            candidates.push_back(best);
            for (const auto& candidate : tiedCandidates)
                if (candidate.actions != best.actions &&
                    officialRank(candidate) == officialRank(best))
                    candidates.push_back(candidate);
            for (const auto& candidate : endpointBeam)
                if (candidate.actions != best.actions &&
                    officialRank(candidate) == officialRank(best))
                    candidates.push_back(candidate);
            std::stable_sort(candidates.begin() + 1, candidates.end(),
                [](const Candidate& a, const Candidate& b) { return a.rank > b.rank; });
            std::set<std::vector<std::vector<int>>> uniqueCandidates;
            candidates.erase(std::remove_if(candidates.begin(), candidates.end(),
                [&](const Candidate& candidate) {
                    return !uniqueCandidates.insert(candidate.actions).second;
                }), candidates.end());
            if (candidates.size() > 4) candidates.resize(4);
            std::cerr << "[LOOKAHEAD] map=" << config.map.width << 'x'
                      << config.map.height << " endpoints=" << endpointBeam.size()
                      << " candidates=" << candidates.size()
                      << " budget_ms=" << remainingMs() << '\n';

            const auto baseObserved = forecast(candidates.front(), false);
            const auto baseGenerated = remainingMs() > 1000
                ? forecast(candidates.front(), true) : decltype(baseObserved){};
            if (baseObserved.first && baseGenerated.first) {
                for (size_t i = 1; i < candidates.size() && remainingMs() > 2500; ++i) {
                    const auto observed = forecast(candidates[i], false);
                    if (!observed.first || observed.second <= baseObserved.second) continue;
                    const auto generated = forecast(candidates[i], true);
                    if (generated.first && generated.second > baseGenerated.second) {
                        best = candidates[i];
                        break;
                    }
                }
            }
        }
    }

    // The earlier searches may trade one missing brand for another. Run one
    // bounded tail-replacement pass on the final route set, not on intermediate
    // candidates, so it cannot pre-empt a better same-day repair.
    auto finalMissing = MoveSimulator::simulateDay(config, state, best.actions, map);
    if (finalMissing.valid) {
        for (size_t spot = 0;
             spot < config.spots.size() && hasSearchTime(); ++spot) {
            if (finalMissing.brands.count(config.spots[spot].brand)) continue;
            for (int p : patrols) {
                if (!hasSearchTime()) break;
                const auto originalActions = best.actions[p];
                std::vector<int> prefix;
                auto pos = map.posToCoordinate(state.agents[p].pos);
                int used = 0;
                for (size_t edge = 0;
                     edge <= originalActions.size() && hasSearchTime(); ++edge) {
                    auto route = pathCache.get(
                        pos, finalMissing.fuelAtTime[p][used], 1.0)
                        .extractPath(config.spots[spot].pos);
                    if (route.found && used + route.totalSteps <= daySteps) {
                        Candidate candidate = best;
                        candidate.actions[p] = prefix;
                        candidate.actions[p].insert(candidate.actions[p].end(),
                            route.directions.begin(), route.directions.end());
                        MoveSimulator::padWithWait(candidate.actions[p],
                            used + route.totalSteps, daySteps);
                        candidate.rank = {-1, -1, -1, -1, -1};
                        candidate.metadataStale = true;
                        evaluateCandidate(candidate);

                        considerCandidate(std::move(candidate));
                    }
                    if (edge == originalActions.size()) break;
                    const int action = originalActions[edge];
                    used += action < 0 ? -action : map.getTravelTime(pos);
                    if (action >= 0) pos = map.nextPosition(pos, action);
                    prefix.push_back(action);
                }
            }
        }
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
