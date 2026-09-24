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
    const std::vector<std::set<int>>& regions) {
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

    struct Parent { int mask = -1; int patrol = -1; };
    std::vector<int> cost(stateCount, unreachable);
    std::vector<std::vector<Parent>> parent(config.spots.size() + 1,
                                             std::vector<Parent>(stateCount));
    cost[0] = 0;

    // ponytail: O(spots * patrols * 2^patrols); switch to Hungarian matching
    // if future matches raise the patrol count beyond the current single digits.
    for (size_t spot = 0; spot < config.spots.size(); ++spot) {
        auto next = cost;
        for (int mask = 0; mask < stateCount; ++mask) {
            if (cost[mask] < unreachable) parent[spot + 1][mask] = {mask, -1};
            for (int p = 0; p < patrolCount; ++p) {
                if ((mask & (1 << p)) || travel[p][spot] >= unreachable) continue;
                int nextMask = mask | (1 << p);
                int nextCost = cost[mask] + travel[p][spot];
                if (cost[mask] < unreachable && nextCost < next[nextMask]) {
                    next[nextMask] = nextCost;
                    parent[spot + 1][nextMask] = {mask, p};
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
    for (int spot = static_cast<int>(config.spots.size()); spot > 0; --spot) {
        Parent step = parent[spot][mask];
        if (step.mask < 0) continue;
        if (step.patrol >= 0) assigned[patrols[step.patrol]] = spot - 1;
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
    auto bestRank = std::make_tuple(-1, -1, -1);
    bool bestUseRegions = false;
    int bestSupplyCount = INT_MAX;
    std::cerr << "[FORMATION] traffic scenario: opponents mirror own road occupancy\n";

    struct Formation {
        std::vector<int> types;
        std::tuple<int, int, int> rank{-1, -1, -1};
        bool useRegions = false;
        bool valid = false;
        bool evaluated = false;
    };
    const int maxSupplyCount = agentCount / 2;
    std::vector<Formation> formations(maxSupplyCount + 1);
    auto evaluate = [&](int supplyCount) -> const Formation& {
        auto& formation = formations[supplyCount];
        if (formation.evaluated) return formation;
        formation.evaluated = true;
        formation.types.assign(agentCount, 0);
        for (int i = 0; i < supplyCount; ++i)
            formation.types[agentCount - 1 - i] = 1;

        for (bool useRegions : {false, true}) {
            if (useRegions && !kEnablePatrolRegions) continue;
            GameState state{};
            for (int i = 0; i < agentCount; ++i) {
                state.agents.push_back(
                    {formation.types[i], config.initialAgentPositions[i], config.fuelLimit});
            }

            Map map(config.map.height, config.map.width, config.map.cells);
            Solver solver;
            solver.useRegions_ = useRegions;
            MatchScore score;
            std::vector<long long> previousOccupancy;
            bool valid = true;
            for (int day = 0; day < static_cast<int>(config.daySteps.size()); ++day) {
                state.day = day;
                auto actions = solver.solve(config, state, map);
                auto result = MoveSimulator::simulateDay(config, state, actions, map);
                if (!result.valid) {
                    valid = false;
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
            }

            std::cerr << "[FORMATION] supply=" << supplyCount
                      << " regions=" << (useRegions ? "on" : "off")
                      << " score=" << score.brands.size() << '/' << score.dailyTypes
                      << '/' << score.servings << (valid ? "" : " invalid")
                      << '\n';

            if (valid && (!formation.valid || score.rank() > formation.rank)) {
                formation.rank = score.rank();
                formation.useRegions = useRegions;
                formation.valid = true;
            }
        }

        if (formation.valid &&
            (formation.rank > bestRank ||
             (formation.rank == bestRank && supplyCount < bestSupplyCount))) {
            bestRank = formation.rank;
            bestTypes = formation.types;
            bestUseRegions = formation.useRegions;
            bestSupplyCount = supplyCount;
        }
        return formation;
    };
    auto better = [](const Formation& candidate, int candidateCount,
                     const Formation& current, int currentCount) {
        if (!candidate.valid) return false;
        if (!current.valid) return true;
        return candidate.rank > current.rank ||
               (candidate.rank == current.rank && candidateCount < currentCount);
    };

    // ponytail: assume the supply-count score is unimodal; restore an exhaustive
    // scan if recorded formations show multiple local peaks. Probe the middle and
    // both neighbors, then climb only toward the improving side.
    int current = maxSupplyCount / 2;
    evaluate(current);
    const int left = current - 1;
    const int right = current + 1;
    if (left >= 0) evaluate(left);
    if (right <= maxSupplyCount) evaluate(right);

    int direction = 0;
    if (left >= 0 && better(formations[left], left, formations[current], current))
        direction = -1;
    if (right <= maxSupplyCount &&
        better(formations[right], right, formations[current], current) &&
        (direction == 0 || better(formations[right], right, formations[left], left)))
        direction = 1;
    while (direction != 0) {
        int next = current + direction;
        if (next < 0 || next > maxSupplyCount) break;
        evaluate(next);
        if (!better(formations[next], next, formations[current], current)) break;
        current = next;
    }

    std::cerr << "[FORMATION] selected score=" << std::get<0>(bestRank) << '/'
              << std::get<1>(bestRank) << '/' << std::get<2>(bestRank) << " types=[";
    for (int i = 0; i < agentCount; ++i) {
        if (i > 0) std::cerr << ',';
        std::cerr << bestTypes[i];
    }
    std::cerr << "] regions=" << (bestUseRegions ? "on" : "off") << '\n';

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

    auto boostServings = [&](Candidate candidate) {
        // ponytail: bounded tail substitutions, not route-wide search. Upgrade
        // to multi-patrol k-opt only if replayed maps show this misses servings.
        constexpr size_t kTailEdges = 12;
        constexpr size_t kTargetSpots = 12;
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
            if (targets.size() > kTargetSpots) targets.resize(kTargetSpots);

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
                        std::set<int> visited;
                        for (const auto& event : baseline.collections)
                            if (event.agent == patrol && event.step <= step) visited.insert(event.spot);
                        const int fuel = baseline.fuelAtTime[patrol][step];
                        const auto& paths = pathCache.get(
                            map.posToCoordinate(baseline.positionsAtTime[patrol][step]), fuel, 1.0);
                        for (int spot : targets) {
                            if (visited.count(spot)) continue;
                            auto path = paths.extractPath(config.spots[spot].pos);
                            if (!path.found || path.directions.empty() ||
                                path.totalSteps > daySteps - step) continue;

                            Candidate proposal = candidate;
                            proposal.actions[patrol].assign(patrolActions.begin(),
                                                            patrolActions.begin() + edge);
                            proposal.actions[patrol].insert(proposal.actions[patrol].end(),
                                                            path.directions.begin(), path.directions.end());
                            MoveSimulator::padWithWait(proposal.actions[patrol],
                                                        step + path.totalSteps, daySteps);
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
                             int responsiblePatrol = -1, int requiredSpot = -1) {
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
            visitedSpotsToday_, pathCache, candidateRegions);
        if (responsiblePatrol >= 0) {
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
    best = planCandidate(original, false, true, selectedRegions);
    for (const auto& order : orders) {
        if (!hasSearchTime()) break;
        auto candidate = planCandidate(order, true, false, selectedRegions);
        if (candidate.rank > best.rank) best = std::move(candidate);
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
                    if (candidate.rank > best.rank) best = std::move(candidate);
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
            if (candidate.rank > best.rank) best = std::move(candidate);
        }
    }
    best = boostServings(refineCandidate(std::move(best)));
    if (rewardRoutes) {
        Candidate ordinary;
        ordinary.actions = ordinaryActions;
        evaluateCandidate(ordinary);
        if (ordinary.rank > best.rank) {
            if (removeRedundantFinalDaySupplies(config, state, map, ordinaryActions,
                                                 collectedBrandsTotal_)) {
                for (int i = 0; i < numAgents; ++i)
                    if (state.agents[i].kind == 1) ordinarySolver.supportedPatrols_[i] = -1;
            }
            *this = std::move(ordinarySolver);
            return ordinaryActions;
        }
    }
    if (removeRedundantFinalDaySupplies(config, state, map, best.actions,
                                        collectedBrandsTotal_))
        best.metadataStale = true;
    actions = best.actions;
    auto improved = MoveSimulator::simulateDay(config, state, actions, map);
    if (improved.valid && best.metadataStale) {
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
