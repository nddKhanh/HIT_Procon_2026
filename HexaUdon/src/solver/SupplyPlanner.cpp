#include "solver/SupplyPlanner.hpp"
#include "solver/MoveSimulator.hpp"
#include "solver/PathFinder.hpp"
#include "solver/PatrolPlanner.hpp"
#include <algorithm>
#include <chrono>
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
        auto rank = std::make_tuple(extensionPotential, usableSteps, deficit);
        if (rank > bestRank) {
            bestRank = rank;
            targetPatrol = i;
            targetPos = point.pos;
        }
    }
    // Without a timed encounter, do not chase a patrol's obsolete start position.
    if (targetPatrol < 0) return {-daySteps};
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

void SupplyPlanner::improveDay(const GameConfig& config, const GameState& state,
    const Map& inputMap, std::vector<std::vector<int>>& actions,
    const std::set<int>& matchBrands, long long deadlineMs) {
    Map map = inputMap;
    map.updateTraffic(state.traffics);
    const int steps = config.getDaySteps(state.day);
    const int n = static_cast<int>(state.agents.size());
    auto result = MoveSimulator::simulateDay(config, state, actions, map);
    if (!result.valid) return;
    PathCache cache(map);
    auto rank = [&](const DaySimulation& day) {
        int fresh = 0, fuel = 0;
        for (int b : day.brands) fresh += !matchBrands.count(b);
        for (const auto& a : day.agents) if (a.kind == 0) fuel += a.fuel;
        return std::make_tuple(fresh, day.brands.size(), day.collections.size(), fuel);
    };
    auto inTime = [&] {
        return std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch()).count() < deadlineMs;
    };
    struct Wait { int agent, begin, end, pos; };
    // Only split at action boundaries or inside a wait, never in transit.
    auto prefix = [&](int agent, int until) {
        std::vector<int> out;
        int time = 0;
        auto pos = map.posToCoordinate(state.agents[agent].pos);
        for (int a : actions[agent]) {
            if (time == until) break;
            int duration = a < 0 ? -a : map.getTravelTime(pos);
            if (time + duration > until) { out.push_back(-(until - time)); break; }
            out.push_back(a);
            time += duration;
            if (a >= 0) pos = map.nextPosition(pos, a);
        }
        return out;
    };
    // ponytail: bounded greedy joint repair (24 meetings/round, at most 2*n rounds).
    // Expand to a beam only when this measured search ceiling leaves useful rescues.
    for (int round = 0; round < 2 * n && inTime(); ++round) {
        std::vector<Wait> waits;
        for (int i = 0; i < n; ++i) {
            int time = 0;
            auto pos = map.posToCoordinate(state.agents[i].pos);
            for (int a : actions[i]) {
                int duration = a < 0 ? -a : map.getTravelTime(pos);
                if (a < 0) waits.push_back({i, time, time + duration, map.coordinateToPos(pos)});
                else pos = map.nextPosition(pos, a);
                time += duration;
            }
        }
        struct Meeting {
            int supply, patrol, depart, meet, pos;
            PathResult path;
            std::tuple<int,int,int,int,int> priority;
        };
        std::vector<Meeting> meetings;
        for (const auto& sw : waits) {
            if (state.agents[sw.agent].kind != 1) continue;
            std::set<int> departures{sw.begin};
            // Reuse the supply immediately after any already planned encounter.
            for (int t = std::max(1, sw.begin); t < sw.end; ++t)
                for (int p = 0; p < n; ++p)
                    if (state.agents[p].kind == 0 && result.positionsAtTime[p][t] == sw.pos &&
                        result.fuelAtTime[p][t] > result.fuelAtTime[p][t-1]) departures.insert(t);
            const auto& paths = cache.get(map.posToCoordinate(sw.pos));
            for (const auto& pw : waits) {
                if (state.agents[pw.agent].kind != 0) continue;
                auto path = paths.extractPath(pw.pos);
                if (!path.found) continue;
                for (int depart : departures) {
                    int meet = std::max({1, pw.begin, depart + path.totalSteps});
                    if (meet >= steps || meet > pw.end || result.fuelAtTime[pw.agent][meet] >= config.fuelLimit)
                        continue;
                    std::set<int> visited;
                    for (const auto& e : result.collections)
                        if (e.agent == pw.agent && e.step <= meet) visited.insert(e.spot);
                    int fresh = 0, daily = 0, potential = 0;
                    const auto& onward = cache.get(map.posToCoordinate(pw.pos), config.fuelLimit, 1.0);
                    for (size_t s = 0; s < config.spots.size(); ++s) {
                        if (visited.count(static_cast<int>(s)) || result.remainingStock[s] <= 0) continue;
                        auto route = onward.extractPath(config.spots[s].pos);
                        if (!route.found || route.totalSteps > steps - meet) continue;
                        fresh += !matchBrands.count(config.spots[s].brand);
                        daily += !result.brands.count(config.spots[s].brand);
                        ++potential;
                    }
                    meetings.push_back({sw.agent, pw.agent, depart, meet, pw.pos, path,
                        {fresh, daily, potential, pw.end - meet, -path.totalSteps}});
                }
            }
        }
        std::stable_sort(meetings.begin(), meetings.end(), [](const Meeting& a, const Meeting& b) {
            return a.priority > b.priority;
        });
        if (meetings.size() > 24) meetings.resize(24);
        auto bestRank = rank(result);
        auto bestActions = actions;
        auto bestResult = result;
        for (const auto& m : meetings) {
            if (!inTime()) break;
            auto candidate = actions;
            candidate[m.supply] = prefix(m.supply, m.depart);
            candidate[m.supply].insert(candidate[m.supply].end(), m.path.directions.begin(), m.path.directions.end());
            MoveSimulator::padWithWait(candidate[m.supply], m.depart + m.path.totalSteps, steps);
            candidate[m.patrol] = prefix(m.patrol, m.meet);
            std::vector<int> stock;
            for (const auto& s : config.spots) stock.push_back(s.stocks);
            std::set<int> visited, daily, brands = matchBrands, claims;
            for (const auto& e : result.collections) {
                if (e.agent == m.patrol && e.step > m.meet) continue;
                --stock[e.spot];
                daily.insert(e.brand);
                brands.insert(e.brand);
                if (e.agent == m.patrol) visited.insert(e.spot);
            }
            int target = -1;
            Position targetPos;
            std::vector<int> stepSpots;
            std::vector<Position> stepPositions;
            auto suffix = PatrolPlanner::planDay(config, map, map.posToCoordinate(m.pos), steps-m.meet,
                config.fuelLimit, stock, visited, brands, daily, target, targetPos,
                stepSpots, stepPositions, claims, true, false, &cache);
            candidate[m.patrol].insert(candidate[m.patrol].end(), suffix.begin(), suffix.end());
            auto simulated = MoveSimulator::simulateDay(config, state, candidate, map);
            if (simulated.valid && rank(simulated) > bestRank) {
                bestRank = rank(simulated);
                bestActions = std::move(candidate);
                bestResult = std::move(simulated);
            }
        }
        if (bestRank <= rank(result)) break;
        actions = std::move(bestActions);
        result = std::move(bestResult);
    }
}
