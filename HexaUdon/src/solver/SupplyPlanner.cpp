#include "solver/SupplyPlanner.hpp"
#include "solver/MoveSimulator.hpp"
#include "solver/PathFinder.hpp"
#include "solver/PatrolPlanner.hpp"
#include <algorithm>
#include <chrono>
#include <climits>
#include <tuple>

void SupplyPlanner::repairCoverage(const GameConfig& config, const GameState& state,
    const Map& inputMap, std::vector<std::vector<int>>& actions,
    const std::set<int>& matchBrands, long long deadlineMs, int budgetMs) {
    using Clock = std::chrono::steady_clock;
    const auto started = Clock::now();
    const auto epoch = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::system_clock::now().time_since_epoch()).count();
    if (deadlineMs <= epoch || budgetMs <= 0) return;
    const auto stop = started + std::chrono::milliseconds(
        std::min<long long>(budgetMs, deadlineMs - epoch));
    auto inTime = [&] { return Clock::now() < stop; };
    Map map = inputMap;
    map.updateTraffic(state.traffics);
    auto incumbent = MoveSimulator::simulateDay(config, state, actions, map);
    if (!incumbent.valid) return;
    const int steps = config.getDaySteps(state.day);
    const int n = static_cast<int>(state.agents.size());
    auto score = [&](const DaySimulation& result) {
        int fresh = 0;
        for (int brand : result.brands) fresh += !matchBrands.count(brand);
        return std::make_tuple(fresh, result.brands.size(), result.collections.size());
    };
    PathCache cache(map);
    int attempts[4]{}, rewards[4]{1, 1, 1, 1};
    std::set<std::vector<std::vector<int>>> evaluated;
    // ponytail: bounded four-operator search; extra live time permits more
    // distinct suffixes, but the incumbent and official score still gate changes.
    const int trialLimit = budgetMs > 1200 ? 64 : 32;
    for (int trial = 0; trial < trialLimit && inTime(); ++trial) {
        int op = 0;
        for (int i = 1; i < 4; ++i)
            if ((!attempts[i] && attempts[op]) ||
                (attempts[i] && attempts[op] &&
                 rewards[i] * attempts[op] > rewards[op] * attempts[i])) op = i;
        const int variant = attempts[op]++;
        const int cut = steps * op / 4;
        if (cut >= steps) continue;
        std::vector<std::vector<int>> candidate(n);
        std::vector<std::set<int>> visited(n);
        // Cancel a move crossing the cut, never split it in transit. Simulate the
        // resulting prefix, including waits/refuels, instead of guessing fuel.
        for (int i = 0; i < n; ++i) {
            auto pos = map.posToCoordinate(state.agents[i].pos);
            auto markVisited = [&] {
                for (size_t s = 0; s < config.spots.size(); ++s)
                    if (config.spots[s].pos == map.coordinateToPos(pos))
                        visited[i].insert(static_cast<int>(s));
            };
            markVisited();
            int time = 0;
            for (int action : actions[i]) {
                int duration = action < 0 ? -action : map.getTravelTime(pos);
                if (time + duration > cut) break;
                candidate[i].push_back(action);
                time += duration;
                if (action >= 0) { pos = map.nextPosition(pos, action); markVisited(); }
            }
            MoveSimulator::padWithWait(candidate[i], time, cut);
        }
        auto prefixConfig = config;
        prefixConfig.daySteps[state.day] = cut;
        auto prefix = MoveSimulator::simulateDay(prefixConfig, state, candidate, map);
        if (!prefix.valid) continue;
        auto stock = prefix.remainingStock;
        auto daily = prefix.brands;
        auto brands = matchBrands;
        brands.insert(daily.begin(), daily.end());
        std::set<int> claims;
        std::vector<int> pending, targets(n, -1);
        std::vector<Position> positions(n);
        std::vector<std::vector<int>> tails(n);
        for (int p = 0; p < n; ++p)
            if (state.agents[p].kind == 0) pending.push_back(p);
        if (!pending.empty())
            std::rotate(pending.begin(), pending.begin() + variant % pending.size(), pending.end());
        bool first = true;
        while (!pending.empty() && inTime()) {
            struct Choice { int patrol, spot; std::tuple<int, int, int, int> rank; };
            std::vector<Choice> choices;
            std::set<int> considered;
            for (size_t s = 0; s < config.spots.size(); ++s) {
                const int brand = config.spots[s].brand;
                if (daily.count(brand) || !considered.insert(brand).second) continue;
                int best = INT_MAX, second = INT_MAX, owner = -1, target = -1;
                for (int p : pending) {
                    int cost = INT_MAX, spot = -1;
                    const auto& paths = cache.get(map.posToCoordinate(prefix.agents[p].pos),
                                                  prefix.agents[p].fuel, 1.0);
                    for (size_t t = 0; t < config.spots.size(); ++t) {
                        if (config.spots[t].brand != brand || stock[t] <= 0 ||
                            visited[p].count(static_cast<int>(t))) continue;
                        auto path = paths.extractPath(config.spots[t].pos, steps - cut);
                        if (path.found && path.totalSteps < cost) {
                            cost = path.totalSteps;
                            spot = static_cast<int>(t);
                        }
                    }
                    if (cost < best) {
                        second = best; best = cost; owner = p; target = spot;
                    } else second = std::min(second, cost);
                }
                if (owner < 0) continue;
                // Regret is measured between different Patrols, not two spots
                // of the same brand that only the same Patrol can reach.
                const int regret = second == INT_MAX ? steps + 1 : second - best;
                choices.push_back({owner, target,
                    {!brands.count(brand), second == INT_MAX, regret, -best}});
            }
            std::stable_sort(choices.begin(), choices.end(),
                [](const Choice& a, const Choice& b) { return a.rank > b.rank; });
            int p = pending.front(), target = -2;
            if (!choices.empty()) {
                const auto& choice = choices[first ? variant % std::min<size_t>(3, choices.size()) : 0];
                p = choice.patrol; target = choice.spot;
            }
            first = false;
            std::vector<int> stepSpots;
            std::vector<Position> stepPositions;
            tails[p] = PatrolPlanner::planDay(config, map,
                map.posToCoordinate(prefix.agents[p].pos), steps - cut, prefix.agents[p].fuel,
                stock, visited[p], brands, daily, targets[p], positions[p], stepSpots,
                stepPositions, claims, true, false, &cache, target, {}, true, true);
            pending.erase(std::find(pending.begin(), pending.end(), p));
        }
        if (!pending.empty() || !inTime()) break;
        std::set<int> supplied;
        for (int s = 0; s < n; ++s) {
            if (state.agents[s].kind != 1) continue;
            int patrol = -1, target = -1;
            Position pos;
            std::vector<int> stepSpots;
            std::vector<Position> stepPositions;
            tails[s] = planDay(config, map, prefix.agents[s], prefix.agents, s,
                steps - cut, targets, positions, tails, patrol, target, pos,
                stepSpots, stepPositions, brands, stock, supplied, true);
            if (patrol >= 0) supplied.insert(patrol);
        }
        for (int i = 0; i < n; ++i)
            candidate[i].insert(candidate[i].end(), tails[i].begin(), tails[i].end());
        if (!inTime()) break;
        if (!evaluated.insert(candidate).second) continue;
        const auto remainingMs = std::chrono::duration_cast<std::chrono::milliseconds>(
            stop - Clock::now()).count();
        const auto currentEpoch = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch()).count();
        improveDay(config, state, map, candidate, matchBrands,
                   std::min(deadlineMs, currentEpoch + std::min<long long>(80, remainingMs)), true);
        auto result = MoveSimulator::simulateDay(config, state, candidate, map);
        if (result.valid && score(result) > score(incumbent)) {
            actions = std::move(candidate);
            incumbent = std::move(result);
            rewards[op] += 4;
        }
    }
}

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
    const std::set<int>& excludedPatrols,
    bool prioritizeFuelDeficit
) {
    plannedTargetPatrol = -1;
    plannedTargetSpot = -1;
    plannedTargetPos = map.posToCoordinate(supplyAgent.pos);
    plannedStepSpots.assign(daySteps, -1);
    plannedStepPositions.assign(daySteps, plannedTargetPos);

    Position agentPos = map.posToCoordinate(supplyAgent.pos);
    int targetPatrol = -1;
    Position targetPos = agentPos;
    std::set<int> plannedDailyBrands;
    for (size_t si = 0; si < config.spots.size() && si < remainingStock.size(); ++si) {
        if (remainingStock[si] < config.spots[si].stocks)
            plannedDailyBrands.insert(config.spots[si].brand);
    }
    std::tuple<int, int, int, int> bestRank{-1, -1, INT_MIN, INT_MIN};
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
        std::set<int> missingDailyBrands;
        int usableSteps = daySteps - overlapAt - 1;
        auto reachable = PathFinder::computeSSSP(point.pos, map, config.fuelLimit, 1.0);
        for (size_t si = 0; si < config.spots.size(); ++si) {
            if (si >= remainingStock.size() || remainingStock[si] <= 0) continue;
            auto route = reachable.extractPath(config.spots[si].pos);
            if (!route.found || route.totalSteps > usableSteps) continue;
            ++extensionPotential;
            if (!plannedDailyBrands.count(config.spots[si].brand))
                missingDailyBrands.insert(config.spots[si].brand);
        }
        auto rank = prioritizeFuelDeficit
            ? std::make_tuple(static_cast<int>(missingDailyBrands.size()),
                              deficit, extensionPotential, usableSteps)
            : std::make_tuple(static_cast<int>(missingDailyBrands.size()),
                              extensionPotential, usableSteps, deficit);
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
    const std::set<int>& matchBrands, long long deadlineMs, bool rewardRoutes,
    std::vector<std::vector<std::vector<int>>>* alternatives) {
    Map map = inputMap;
    map.updateTraffic(state.traffics);
    const int steps = config.getDaySteps(state.day);
    const int n = static_cast<int>(state.agents.size());
    const int supplyCount = static_cast<int>(std::count_if(
        state.agents.begin(), state.agents.end(), [](const Agent& agent) {
            return agent.kind == 1;
        }));
    const bool allowMovingRendezvous = supplyCount <= 2;
    auto result = MoveSimulator::simulateDay(config, state, actions, map);
    if (!result.valid) return;
    const auto originalBrands = result.brands;
    std::set<std::vector<int>> endpoints;
    PathCache cache(map);
    auto rank = [&](const DaySimulation& day) -> std::tuple<int, int, int, int, int, int> {
        int fresh = 0, fuel = 0, minimumFuel = INT_MAX, readyPatrols = 0;
        for (int b : day.brands) fresh += !matchBrands.count(b);
        for (const auto& a : day.agents) if (a.kind == 0) {
            fuel += a.fuel;
            minimumFuel = std::min(minimumFuel, a.fuel);
            readyPatrols += a.fuel >= std::max(1, config.fuelLimit / 4);
        }
        // Fuel can only help on a later day. On the final day, never replace an
        // equally scoring plan merely because a Supply shadows a Patrol.
        if (state.day + 1 == static_cast<int>(config.daySteps.size())) {
            minimumFuel = 0;
            readyPatrols = 0;
            fuel = 0;
        }
        if (config.players > 2)
            return {fresh, static_cast<int>(day.brands.size()),
                    static_cast<int>(day.collections.size()), minimumFuel,
                    fuel, readyPatrols};
        return {fresh, static_cast<int>(day.brands.size()),
                static_cast<int>(day.collections.size()), fuel, 0, 0};
    };
    auto inTime = [&] {
        return std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch()).count() < deadlineMs;
    };
    struct Wait { int agent, begin, end, pos; bool continuationOnly = false; };
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
    // ponytail: bounded greedy joint repair (64 meetings/round, at most n rounds).
    // Expand to a beam only when this measured search ceiling leaves useful rescues.
    for (int round = 0; round < n && inTime(); ++round) {
        std::vector<Wait> waits;
        // A previous target choice must not lock the refinement pass. Treat the
        // supply's initial position as a full-day departure window so a better
        // rendezvous can replace its route from step zero.
        for (int i = 0; i < n; ++i) {
            if (state.agents[i].kind == 1)
                waits.push_back({i, 0, steps, state.agents[i].pos});
        }
        // A Supply can leave immediately after a moving rendezvous even when
        // its incumbent route has no wait there. Preserve that completed refill.
        if (alternatives)
            for (const auto& refill : result.refuelEvents)
                if (refill.step < steps)
                    waits.push_back({refill.supply, refill.step, steps, refill.pos, true});
        for (int i = 0; i < n; ++i) {
            int time = 0;
            auto pos = map.posToCoordinate(state.agents[i].pos);
            for (int a : actions[i]) {
                int duration = a < 0 ? -a : map.getTravelTime(pos);
                if (a < 0) {
                    waits.push_back({i, time, time + duration, map.coordinateToPos(pos)});
                } else {
                    pos = map.nextPosition(pos, a);
                    // An exact arrival boundary is also a legal rendezvous. This
                    // lets a Supply intercept a moving Patrol without requiring
                    // the original route to contain an artificial wait.
                    if (allowMovingRendezvous && state.agents[i].kind == 0)
                        waits.push_back({i, time + duration, time + duration,
                                         map.coordinateToPos(pos)});
                }
                time += duration;
            }
        }
        struct Meeting {
            int supply, patrol, depart, meet, pos;
            PathResult path;
            std::tuple<int,int,int,int,int> priority;
            bool protectedRescue = false;
            bool continuationOnly = false;
        };
        std::vector<Meeting> meetings;
        for (const auto& sw : waits) {
            if (!inTime()) break;
            if (state.agents[sw.agent].kind != 1) continue;
            std::set<int> departures{sw.begin};
            // Reuse the supply immediately after any already planned encounter.
            for (int t = std::max(1, sw.begin); t < sw.end; ++t)
                for (int p = 0; p < n; ++p)
                    if (state.agents[p].kind == 0 && result.positionsAtTime[p][t] == sw.pos &&
                        result.fuelAtTime[p][t] > result.fuelAtTime[p][t-1]) departures.insert(t);
            const auto& paths = cache.get(map.posToCoordinate(sw.pos));
            for (const auto& pw : waits) {
                if (!inTime()) break;
                if (state.agents[pw.agent].kind != 0) continue;
                auto path = paths.extractPath(pw.pos);
                if (!path.found) continue;
                for (int depart : departures) {
                    int meet = std::max({1, pw.begin, depart + path.totalSteps});
                    if (meet > steps || (meet == steps && !alternatives) ||
                        meet > pw.end || result.fuelAtTime[pw.agent][meet] >= config.fuelLimit)
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
                        {fresh, daily, potential, pw.end - meet, -path.totalSteps},
                        false, sw.continuationOnly || meet == steps});
                }
            }
        }
        std::stable_sort(meetings.begin(), meetings.end(), [](const Meeting& a, const Meeting& b) {
            return a.priority > b.priority;
        });
        const size_t meetingLimit = allowMovingRendezvous ? 64 : 24;
        std::vector<Meeting> boundaryMeetings;
        if (alternatives) {
            std::set<std::pair<int, int>> pairs;
            for (const auto& meeting : meetings)
                if (meeting.continuationOnly &&
                    pairs.insert({meeting.supply, meeting.patrol}).second)
                    boundaryMeetings.push_back(meeting);
            meetings.erase(std::remove_if(meetings.begin(), meetings.end(), [](const auto& meeting) {
                return meeting.continuationOnly;
            }), meetings.end());
        }
        if (meetings.size() > meetingLimit) {
            // Preserve the proven global beam, then append one otherwise
            // omitted rendezvous for each Patrol that began the day stranded.
            // These extras are only allowed to win by Types/Daily below, so a
            // serving-only rescue cannot disturb a stronger multi-day route.
            auto allMeetings = meetings;
            meetings.resize(meetingLimit);
            for (int patrol = 0; patrol < n; ++patrol) {
                if (state.agents[patrol].kind != 0 ||
                    (state.agents[patrol].fuel > std::max(1, config.fuelLimit / 8) &&
                     (config.spots.size() > 18 ||
                      result.agents[patrol].fuel > std::max(1, config.fuelLimit / 8)))) continue;
                auto represented = std::find_if(meetings.begin(), meetings.end(),
                    [&](const Meeting& m) { return m.patrol == patrol; });
                if (represented != meetings.end()) {
                    if (config.spots.size() <= 18) represented->protectedRescue = true;
                    continue;
                }
                auto rescue = std::find_if(allMeetings.begin() + meetingLimit, allMeetings.end(),
                    [&](const Meeting& m) { return m.patrol == patrol; });
                if (rescue != allMeetings.end()) {
                    rescue->protectedRescue = true;
                    meetings.push_back(*rescue);
                }
            }
        }
        meetings.insert(meetings.begin(), boundaryMeetings.begin(), boundaryMeetings.end());
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
                stepSpots, stepPositions, claims, true, false, &cache, -2, {}, rewardRoutes);
            candidate[m.patrol].insert(candidate[m.patrol].end(), suffix.begin(), suffix.end());
            auto simulated = MoveSimulator::simulateDay(config, state, candidate, map);
            if (alternatives && simulated.valid && simulated.brands.size() >= originalBrands.size()) {
                std::vector<int> endpoint;
                for (const auto& agent : simulated.agents) {
                    endpoint.push_back(agent.pos);
                    endpoint.push_back(agent.fuel);
                }
                // ponytail: cap the endpoint beam; whole-match rollouts are the
                // expensive stage, not duplicate rendezvous at the same state.
                if (alternatives->size() < 64 && endpoints.insert(endpoint).second)
                    alternatives->push_back(candidate);
            }
            auto simulatedRank = simulated.valid ? rank(simulated) : decltype(bestRank){};
            const auto simulatedPrimary = std::make_pair(
                std::get<0>(simulatedRank), std::get<1>(simulatedRank));
            const auto bestPrimary = std::make_pair(
                std::get<0>(bestRank), std::get<1>(bestRank));
            const bool continuityRescue = m.protectedRescue && simulated.valid &&
                simulatedPrimary == bestPrimary &&
                simulated.agents[m.patrol].fuel > bestResult.agents[m.patrol].fuel &&
                simulated.agents[m.patrol].fuel >= std::max(1, config.fuelLimit / 4);
            if (simulated.valid && !m.continuationOnly &&
                ((simulatedRank > bestRank &&
                  (!m.protectedRescue || simulatedPrimary > bestPrimary)) ||
                 continuityRescue)) {
                bestRank = simulatedRank;
                bestActions = std::move(candidate);
                bestResult = std::move(simulated);
            }
        }
        if (bestActions == actions) break;
        actions = std::move(bestActions);
        result = std::move(bestResult);
    }
}
