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

std::vector<int> assignFirstSpots(
    const GameConfig& config, const GameState& state, const Map& map,
    const std::vector<int>& patrols, int daySteps,
    const std::vector<int>& remainingStock,
    const std::vector<std::set<int>>& visitedToday, PathCache& pathCache) {
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
            if (path.found && path.totalSteps <= daySteps)
                travel[p][spot] = path.totalSteps;
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

std::vector<int> AgentStrategy::decideAgentTypes(const GameConfig& config) {
    const int agentCount = static_cast<int>(config.initialAgentPositions.size());
    std::vector<int> bestTypes(agentCount, 0);
    int bestServings = -1;

    for (int supplyCount = 0; supplyCount <= agentCount / 2; ++supplyCount) {
        std::vector<int> types(agentCount, 0);
        for (int i = 0; i < supplyCount; ++i) types[agentCount - 1 - i] = 1;

        GameState state{};
        for (int i = 0; i < agentCount; ++i) {
            state.agents.push_back({types[i], config.initialAgentPositions[i], config.fuelLimit});
        }

        Map map(config.map.height, config.map.width, config.map.cells);
        Solver solver;
        int servings = 0;
        bool valid = true;
        for (int day = 0; day < static_cast<int>(config.daySteps.size()); ++day) {
            state.day = day;
            auto actions = solver.solve(config, state, map);
            auto result = MoveSimulator::simulateDay(config, state, actions, map);
            if (!result.valid) {
                valid = false;
                break;
            }
            servings += static_cast<int>(result.collections.size());
            state.agents = std::move(result.agents);
            solver.commitLastPlan();
        }

        std::cerr << "[FORMATION] supply=" << supplyCount
                  << " servings=" << (valid ? std::to_string(servings) : "invalid")
                  << '\n';

        if (valid && servings > bestServings) {
            bestServings = servings;
            bestTypes = std::move(types);
        }
    }

    std::cerr << "[FORMATION] selected servings=" << bestServings << " types=[";
    for (int i = 0; i < agentCount; ++i) {
        if (i > 0) std::cerr << ',';
        std::cerr << bestTypes[i];
    }
    std::cerr << "]\n";

    return bestTypes;
}

std::vector<int> Solver::decideAgentTypes(const GameConfig& config) {
    return AgentStrategy::decideAgentTypes(config);
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
    Map& map
) {
    int daySteps = config.getDaySteps(state.day);

    int numAgents = static_cast<int>(state.agents.size());
    std::vector<std::vector<int>> actions(numAgents);

    if (daySteps <= 0) return actions;

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

    struct Candidate {
        std::vector<std::vector<int>> actions;
        std::vector<int> targets, supported;
        std::vector<Position> targetPositions;
        std::vector<std::vector<int>> stepSpots;
        std::vector<std::vector<Position>> stepPositions;
        std::set<int> brands;
        std::tuple<int, int, int, int> rank{-1, -1, -1, -1};
    } best;

    std::vector<int> original(numAgents);
    std::iota(original.begin(), original.end(), 0);
    std::vector<int> patrols;
    for (int i : original) if (state.agents[i].kind == 0) patrols.push_back(i);
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

    auto planCandidate = [&](const std::vector<int>& order,
                             bool officialRanking, bool exclusiveClaims) {
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
        const auto firstSpots = assignFirstSpots(
            config, state, map, patrols, daySteps, remainingStock_,
            visitedSpotsToday_, pathCache);
        for (int i : order) {
            const Agent& agent = state.agents[i];
            if (agent.kind != 0) continue;
            candidate.actions[i] = PatrolPlanner::planDay(
                config, map, map.posToCoordinate(agent.pos), daySteps, agent.fuel,
                remainingStock_, visitedSpotsToday_[i], matchBrands, dailyBrands,
                currentTargets_[i], currentTargetPositions_[i], plannedStepSpots_[i],
                plannedStepPositions_[i], claimedSpots_, officialRanking, exclusiveClaims,
                &pathCache, firstSpots[i]);
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
                claimedSpots_, officialRanking, exclusiveClaims, &pathCache);

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

        auto result = MoveSimulator::simulateDay(config, state, candidate.actions, map);
        if (!result.valid) return candidate;
        int newTypes = 0;
        for (int brand : result.brands) newTypes += !collectedBrandsTotal_.count(brand);
        std::set<int> nextReachableBrands;
        if (state.day + 1 < static_cast<int>(config.daySteps.size())) {
            int nextSteps = config.getDaySteps(state.day + 1);
            for (const auto& nextAgent : result.agents) {
                if (nextAgent.kind != 0 || nextAgent.fuel <= 0) continue;
                Position from = map.posToCoordinate(nextAgent.pos);
                auto reachable = PathFinder::computeSSSP(from, map, nextAgent.fuel, 1.0);
                for (const auto& spot : config.spots) {
                    auto path = reachable.extractPath(spot.pos);
                    if (path.found && path.totalSteps <= nextSteps)
                        nextReachableBrands.insert(spot.brand);
                }
            }
        }
        candidate.rank = {newTypes, static_cast<int>(result.brands.size()),
                          static_cast<int>(result.collections.size()),
                          static_cast<int>(nextReachableBrands.size())};
        candidate.brands = collectedBrandsTotal_;
        candidate.brands.insert(result.brands.begin(), result.brands.end());
        candidate.targets = currentTargets_;
        candidate.targetPositions = currentTargetPositions_;
        candidate.supported = supportedPatrols_;
        candidate.stepSpots = plannedStepSpots_;
        candidate.stepPositions = plannedStepPositions_;
        return candidate;
    };

    // Preserve the former policy as a candidate, then try official-score
    // ranking under multiple patrol orders and select by simulated outcome.
    best = planCandidate(original, false, true);
    for (const auto& order : orders) {
        if (!hasSearchTime()) break;
        auto candidate = planCandidate(order, true, false);
        if (candidate.rank > best.rank) best = std::move(candidate);
    }
    actions = std::move(best.actions);
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
