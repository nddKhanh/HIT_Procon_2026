#include <iostream>
#include <cassert>
#include <cmath>
#include <climits>
#include <fstream>
#include <filesystem>
#include <nlohmann/json.hpp>
#include "model/GameConfig.hpp"
#include "GameState.hpp"
#include "map/Map.hpp"
#include "solver/PathFinder.hpp"
#include "solver/ActionValidator.hpp"
#include "solver/Solver.hpp"
#include "solver/MoveSimulator.hpp"
#include "solver/PatrolPlanner.hpp"
#include "solver/SupplyPlanner.hpp"
#include "io/DiaryWriter.hpp"
#include "solver\SpotScorer.hpp"

// =============================================================================
// Test 1: Map basics and hex geometry
// =============================================================================
void test_map_and_geometry() {
    std::vector<std::vector<int>> cells = {
        {3, 0, 1, 2},
        {0, 1, 2, 0},
        {1, 2, 0, 3}
    };
    Map map(3, 4, cells);

    assert(map.getHeight() == 3);
    assert(map.getWidth() == 4);
    assert(!map.canMove(0, 0)); // Pond
    assert(map.canMove(1, 0));  // Plain
    assert(map.canMove(2, 0));  // Road
    assert(map.canMove(3, 0));  // Mountain

    Position p = map.posToCoordinate(5);
    assert(p.x == 1 && p.y == 1);
    assert(map.coordinateToPos(p) == 5);

    std::cout << "[PASS] Map and Geometry tests passed!" << std::endl;
}

// =============================================================================
// Test 2: Travel time and fuel cost
// =============================================================================
void test_travel_time_and_fuel() {
    std::vector<std::vector<int>> cells = {{0, 1, 2, 3}};
    Map map(1, 4, cells);

    assert(map.getTravelTime(0) == 2);   // Plain
    assert(map.getFuelCost(0) == 1);
    assert(map.getTravelTime(1) == 1);   // Road smooth
    assert(map.getFuelCost(1) == 2);
    assert(map.getTravelTime(2) == 3);   // Mountain
    assert(map.getFuelCost(2) == 2);
    assert(map.getTravelTime(3) == 999); // Pond

    std::vector<Traffic> traffics = {{1, 1}};
    map.updateTraffic(traffics);
    assert(map.getTravelTime(1) == 2);   // Congested
    traffics = {{1, 2}};
    map.updateTraffic(traffics);
    assert(map.getTravelTime(1) == 4);   // Jammed
    assert(map.getFuelCost(1) == 2);     // Always 2 for road

    std::cout << "[PASS] Travel time and fuel cost tests passed!" << std::endl;
}

// =============================================================================
// Test 3: SSSP — Single-Source Shortest Path
// =============================================================================
void test_sssp() {
    std::vector<std::vector<int>> cells = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    Map map(3, 3, cells);

    Position source{0, 0};
    auto sssp = PathFinder::computeSSSP(source, map);

    // Source to itself = 0
    int srcPos = map.coordinateToPos(source);
    assert(sssp.dist[srcPos] == 0);
    assert(sssp.fuel[srcPos] == 0);

    // All cells should be reachable (all plains, no ponds)
    for (int i = 0; i < 9; ++i) {
        assert(sssp.dist[i] != INT_MAX);
    }

    // Extract path from SSSP should match findPath
    Position goal{2, 2};
    auto pathFromSSP = sssp.extractPath(map.coordinateToPos(goal));
    auto pathDirect = PathFinder::findPath(source, goal, map);

    assert(pathFromSSP.found == pathDirect.found);
    assert(pathFromSSP.totalSteps == pathDirect.totalSteps);

    std::cout << "[PASS] SSSP tests passed!" << std::endl;
}

// =============================================================================
// Test 4: PathFinder fuel constraint
// =============================================================================
void test_pathfinder_fuel_limit() {
    std::vector<std::vector<int>> cells = {{0, 0, 0, 0, 0}};
    Map map(1, 5, cells);

    Position start{0, 0};
    Position goal{4, 0};

    auto path1 = PathFinder::findPath(start, goal, map, 10);
    assert(path1.found);

    auto path2 = PathFinder::findPath(start, goal, map, 1);
    assert(!path2.found);

    std::cout << "[PASS] PathFinder fuel constraint tests passed!" << std::endl;
}

// =============================================================================
// Test 5: ActionValidator with travel time
// =============================================================================
void test_validator_travel_time() {
    GameConfig config{};
    config.map.height = 1;
    config.map.width = 3;
    config.map.cells = {{0, 0, 0}};
    config.daySteps = {10};
    config.fuelLimit = 20;

    GameState state;
    state.day = 0;
    state.agents.push_back({0, 0, 20}); // Patrol at pos 0

    Map map(1, 3, config.map.cells);

    std::vector<std::vector<int>> validWait = {{-10}};
    assert(ActionValidator::validate(config, state, validWait, map));

    std::vector<std::vector<int>> validMove = {{2, -8}}; // move(2 steps) + wait(8)
    assert(ActionValidator::validate(config, state, validMove, map));

    std::vector<std::vector<int>> wrongSteps = {{2, -7}};
    assert(!ActionValidator::validate(config, state, wrongSteps, map));

    std::cout << "[PASS] ActionValidator travel time tests passed!" << std::endl;
}

// =============================================================================
// Test 6: ActionValidator fuel check
// =============================================================================
void test_validator_fuel_check() {
    GameConfig config;
    config.map.height = 1;
    config.map.width = 5;
    config.map.cells = {{0, 0, 0, 0, 0}};
    config.daySteps = {100};

    GameState state;
    state.day = 0;
    state.agents.push_back({0, 0, 2}); // Patrol, fuel=2

    Map map(1, 5, config.map.cells);

    std::vector<std::vector<int>> valid = {{2, 2, -96}};
    assert(ActionValidator::validate(config, state, valid, map));

    std::vector<std::vector<int>> noFuel = {{2, 2, 2, -94}};
    assert(!ActionValidator::validate(config, state, noFuel, map));

    state.agents[0].kind = 1; // Supply
    state.agents[0].fuel = 0;
    std::vector<std::vector<int>> supplyMoves = {{2, 2, 2, -94}};
    assert(ActionValidator::validate(config, state, supplyMoves, map));

    std::cout << "[PASS] ActionValidator fuel check tests passed!" << std::endl;
}

// =============================================================================
// Test 7: Solver multi-spot chaining (NEW — key v2 test)
// =============================================================================
void test_solver_multi_spot() {
    GameConfig config;
    config.map.height = 1;
    config.map.width = 8;
    config.map.cells = {{0, 0, 0, 0, 0, 0, 0, 0}}; // All plains, 1 row
    config.daySteps = {100}; // Plenty of steps
    config.fuelLimit = 50;
    config.initialAgentPositions = {0};
    config.players = 2;
    config.busyThreshold = 5;
    config.jammedThreshold = 10;
    config.startsAt = 0;
    config.daySeconds = {10};

    // 3 spots at positions 2, 4, 6 — different brands
    config.spots = {
        {0, 2, 1},  // brand 0, pos 2
        {1, 4, 1},  // brand 1, pos 4
        {2, 6, 1}   // brand 2, pos 6
    };

    GameState state;
    state.day = 0;
    state.endsAt = 10;
    state.agents = {{0, 0, 50}}; // Patrol at pos 0, plenty of fuel

    Map map(1, 8, config.map.cells);

    Solver solver;
    auto actions = solver.solve(config, state, map);

    assert(actions.size() == 1);

    // Validate the plan
    bool isValid = ActionValidator::validate(config, state, actions, map);
    assert(isValid);

    // Count number of move actions (should be > 1 move since multi-spot)
    int moveCount = 0;
    for (int act : actions[0]) {
        if (act >= 0 && act <= 5) moveCount++;
    }
    // Should visit multiple spots: pos 2 = 2 moves, pos 4 = 2 more, pos 6 = 2 more
    // With 100 steps and all plains (2 steps each), can easily do 6+ moves
    assert(moveCount >= 2); // At minimum 2 moves to reach first spot

    std::cout << "[PASS] Solver multi-spot chaining test passed! (moves=" << moveCount << ")" << std::endl;
}

// =============================================================================
// Test 8: Solver with supply car (integration)
// =============================================================================
void test_solver_with_supply() {
    GameConfig config;
    config.map.height = 3;
    config.map.width = 3;
    config.map.cells = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    config.daySteps = {20};
    config.fuelLimit = 20;
    config.initialAgentPositions = {0, 4, 8};
    config.players = 2;
    config.busyThreshold = 5;
    config.jammedThreshold = 10;
    config.startsAt = 0;
    config.daySeconds = {10};
    config.spots = {{0, 2, 2}, {1, 6, 1}};

    GameState state;
    state.day = 0;
    state.endsAt = 10;
    state.agents = {
        {0, 0, 20},  // Patrol
        {0, 4, 20},  // Patrol
        {1, 8, 20}   // Supply
    };

    Map map(3, 3, config.map.cells);

    Solver solver;
    auto actions = solver.solve(config, state, map);

    assert(actions.size() == 3);
    bool isValid = ActionValidator::validate(config, state, actions, map);
    assert(isValid);

    std::cout << "[PASS] Solver with supply car test passed!" << std::endl;
}

// =============================================================================
// Test 9: SpotScorer scoring
// =============================================================================
void test_spot_scoring() {
    std::vector<Spot> spots = {
        {0, 1, 2},  // brand 0
        {1, 5, 1},  // brand 1
    };

    std::set<int> collected = {0}; // brand 0 already collected

    // Spot 1 (brand 1, new) should score higher than spot 0 (brand 0, old)
    int score0 = SpotScorer::scoreSpot(spots[0].brand, 10, collected, 2);
    int score1 = SpotScorer::scoreSpot(spots[1].brand, 10, collected, 1);
    assert(score1 > score0); // New brand bonus outweighs stock

    // Zero stock should return -1
    int scoreNoStock = SpotScorer::scoreSpot(spots[0].brand, 10, collected, 0);
    assert(scoreNoStock == -1);

    std::cout << "[PASS] SpotScorer scoring test passed!" << std::endl;
}

void test_tactical_scoring_and_claims() {
    std::set<int> none;
    int common = SpotScorer::scoreSpot(7, 5, none, 3, 3, 1, 10);
    int rareUrgent = SpotScorer::scoreSpot(7, 5, none, 1, 1, 1, 10);
    assert(rareUrgent > common);

    GameConfig config{};
    config.map.height = 2;
    config.map.width = 2;
    config.map.cells = {{0, 0}, {0, 0}};
    config.daySteps = {2};
    config.fuelLimit = 1;
    config.initialAgentPositions = {0, 0};
    config.spots = {{0, 1, 1}, {1, 2, 1}};

    GameState state;
    state.day = 0;
    state.agents = {{0, 0, 1}, {0, 0, 1}};
    Map map(2, 2, config.map.cells);
    Solver solver;
    auto actions = solver.solve(config, state, map);

    assert(ActionValidator::validate(config, state, actions, map));
    assert(solver.getPlannedTargetSpot(0) >= 0);
    assert(solver.getPlannedTargetSpot(1) >= 0);
    assert(solver.getPlannedTargetSpot(0) != solver.getPlannedTargetSpot(1));
    std::cout << "[PASS] Tactical scoring and patrol claims test passed!" << std::endl;
}

void test_fuel_weighted_path() {
    Map map(2, 4, {{0, 1, 1, 0}, {0, 0, 0, 0}});
    Position start{0, 0};
    Position goal{3, 0};
    auto fastest = PathFinder::findPath(start, goal, map);
    auto fuelAware = PathFinder::findPath(start, goal, map, INT_MAX, 10.0);
    assert(fastest.found && fuelAware.found);
    assert(fuelAware.totalFuel < fastest.totalFuel);
    assert(fuelAware.totalSteps > fastest.totalSteps);
    std::cout << "[PASS] Fuel-weighted path test passed!" << std::endl;
}

void test_pareto_path_and_cache() {
    Map map(2, 5, {
        {0, 1, 1, 0, 0},
        {3, 0, 0, 0, 3}
    });
    auto path = PathFinder::findPath({0, 0}, {4, 0}, map, 5, 0.0);
    assert(path.found);
    assert(path.totalFuel <= 5);
    assert(path.totalSteps > 5); // Must reject the faster fuel-heavy prefix.

    PathCache cache(map);
    const auto* first = &cache.get({0, 0}, 5, 1.0);
    const auto* second = &cache.get({0, 0}, 5, 1.0);
    assert(first == second && cache.size() == 1);
    assert(first->extractPath(4).found);
    std::cout << "[PASS] Pareto fuel path and daily route cache test passed!" << std::endl;
}

void test_lexicographic_brand_ranking() {
    std::set<int> matchBrands = {0, 1};
    std::set<int> dailyBrands = {0};
    auto repeatedToday = SpotScorer::rankSpot(0, 2, matchBrands, dailyBrands, 1, 1, 1);
    auto newToday = SpotScorer::rankSpot(1, 2, matchBrands, dailyBrands, 1, 1, 1);
    assert(newToday > repeatedToday);

    dailyBrands.clear();
    matchBrands = {0};
    auto oldMatchBrand = SpotScorer::rankSpot(0, 1, matchBrands, dailyBrands, 1, 1, 1);
    auto newMatchBrand = SpotScorer::rankSpot(1, 100, matchBrands, dailyBrands, 1, 1, 20);
    assert(newMatchBrand > oldMatchBrand);
    std::cout << "[PASS] Lexicographic match/daily brand ranking test passed!" << std::endl;
}

void test_stock_aware_coordination_and_reset() {
    GameConfig config{};
    config.map.height = 1;
    config.map.width = 2;
    config.map.cells = {{0, 0}};
    config.daySteps = {2, 2};
    config.fuelLimit = 10;
    config.initialAgentPositions = {0, 0};
    config.spots = {{0, 1, 2}};

    GameState state{};
    state.day = 0;
    state.agents = {{0, 0, 10}, {0, 0, 10}};
    Map map(1, 2, config.map.cells);
    Solver solver;
    auto actions = solver.solve(config, state, map);

    assert(ActionValidator::validate(config, state, actions, map));
    assert((solver.getPlannedTargetSpot(0) == 0) !=
           (solver.getPlannedTargetSpot(1) == 0)); // One physical spot has one first owner.
    assert(solver.solve(config, state, map) == actions);
    solver.commitLastPlan();
    state.day = 1;
    auto nextDay = solver.solve(config, state, map);
    assert(nextDay == actions); // Claims reset on retries and on a new day.
    std::cout << "[PASS] Stock-aware coordination and reset test passed!" << std::endl;
}

void test_first_spot_uses_global_shortest_assignment() {
    GameConfig config{};
    config.map.height = 1;
    config.map.width = 4;
    config.map.cells = {{0, 0, 0, 0}};
    config.daySteps = {3};
    config.fuelLimit = 10;
    config.initialAgentPositions = {0, 2};
    config.spots = {{1, 0, 1}, {0, 3, 1}, {1, 1, 1}};

    GameState state{};
    state.day = 0;
    state.agents = {{0, 0, 10}, {0, 2, 10}};
    Map map(1, 4, config.map.cells);
    Solver solver;
    auto actions = solver.solve(config, state, map);

    assert(ActionValidator::validate(config, state, actions, map));
    assert(solver.getPlannedStepSpot(0, 0) == 2); // Agent 0 owns nearby old-brand spot.
    assert(solver.getPlannedStepSpot(1, 0) == 1); // Agent 1 owns contested new-brand spot.
    assert(solver.getPlannedStepSpot(0, 0) != solver.getPlannedStepSpot(1, 0));
    std::cout << "[PASS] Global first-spot assignment test passed!" << std::endl;
}

void test_upgrade_plan_policies() {
    std::set<int> none;
    assert(SpotScorer::scoreSpot(0, 5, none, 1, 1, 6, 10) == 5235);
    assert(SpotScorer::scoreSpot(0, 5, none, 2, 2, 5, 10) == 5295);
    assert(SpotScorer::scoreSpot(0, 5, {0}, 3, 3, 0, 10) == -5);

    GameConfig config{};
    config.map.height = 1;
    config.map.width = 7;
    config.map.cells = {{0, 0, 0, 0, 0, 0, 0}};
    config.daySteps = {6};
    config.fuelLimit = 20;
    config.spots = {{0, 0, 1}, {1, 4, 1}, {2, 6, 1}};
    Map map(1, 7, config.map.cells);
    std::vector<int> stock = {1, 1, 1};
    assert(SpotScorer::findBestSpot({3, 0}, config, map, 20, 6,
        {}, stock, {}, {}, {0, 1}) >= 0); // Claims are advisory; stock is authoritative.

    GameState state{};
    state.day = 0;
    state.agents = {{0, 3, 20}};
    Solver solver;
    auto actions = solver.solve(config, state, map);
    assert(ActionValidator::validate(config, state, actions, map));
    assert(actions[0].front() == 2); // Right visits two brands; left visits only one.
    assert(solver.getPlannedTargetSpot(0) == 2);

    config.spots = {{7, 5, 1}};
    // An urgent empty patrol loses to a patrol able to reach a new brand.
    std::vector<Agent> agents = {{0, 0, 0}, {0, 4, 10}, {1, 3, 0}};
    assert(SupplyPlanner::findTargetPatrol(agents, 2, config, map,
        {}, {1}, {3, 0}) == 1);
    assert(SupplyPlanner::findTargetPatrol(agents, 2, config, map,
        {7}, {1}, {3, 0}) == 0);
    assert(SupplyPlanner::findTargetPatrol(agents, 2, config, map,
        {}, {0}, {3, 0}) == 0);

    config.daySteps = {10};
    config.fuelLimit = 5;
    config.map.width = 7;
    config.map.cells = {{0, 0, 0, 0, 0, 0, 0}};
    agents = {{0, 0, 5}, {0, 4, 5}, {1, 2, 0}};
    std::vector<std::vector<int>> patrolActions = {
        {2, -8}, {5, 5, 5, -4}, {}
    };
    int targetPatrol = -1, targetSpot = -1;
    Position targetPos{-1, -1};
    std::vector<int> stepSpots;
    std::vector<Position> stepPositions;
    auto supplyActions = SupplyPlanner::planDay(config, map, agents[2], agents,
        2, 10, {-1, -1, -1}, {{1, 0}, {1, 0}, {2, 0}}, patrolActions,
        targetPatrol, targetSpot, targetPos, stepSpots, stepPositions, {}, {});
    assert(targetPatrol == 1 && !supplyActions.empty());

    // For equal deficits, prefer the refill that can still reach remaining stock.
    agents = {{0, 0, 1}, {0, 4, 1}, {1, 2, 0}};
    patrolActions = {{2, -8}, {5, -8}, {}};
    supplyActions = SupplyPlanner::planDay(config, map, agents[2], agents,
        2, 10, {-1, -1, -1}, {{1, 0}, {3, 0}, {2, 0}}, patrolActions,
        targetPatrol, targetSpot, targetPos, stepSpots, stepPositions, {}, {1});
    assert(targetPatrol == 1 && !supplyActions.empty());
    std::cout << "[PASS] Upgrade scoring, claims, lookahead and supply policies passed!" << std::endl;
}

void test_solver_retry_is_transactional() {
    GameConfig config{};
    config.map.height = 1;
    config.map.width = 4;
    config.map.cells = {{0, 0, 0, 0}};
    config.daySteps = {6};
    config.fuelLimit = 10;
    config.initialAgentPositions = {0};
    config.spots = {{0, 1, 1}, {1, 2, 1}, {2, 3, 1}};

    GameState state{};
    state.day = 0;
    state.agents = {{0, 0, 10}};
    Map map(1, 4, config.map.cells);
    Solver solver;
    auto first = solver.solve(config, state, map);
    solver.discardLastPlan();
    auto retry = solver.solve(config, state, map);

    assert(first == retry);
    assert(ActionValidator::validate(config, state, retry, map));
    std::cout << "[PASS] Transactional retry test passed!" << std::endl;
}

// =============================================================================
// Main
// =============================================================================
void test_server_replay() {
    using nlohmann::json;
    auto path = std::filesystem::path(__FILE__).parent_path() / "replay_5cc3b9ea.json";
    std::ifstream input(path);
    assert(input && "Missing recorded server replay");
    json replay;
    input >> replay;
    const auto& c = replay["config"];
    GameConfig config{};
    config.daySteps = c["daySteps"].get<std::vector<int>>();
    config.fuelLimit = c["fuelLimits"];
    config.players = c["players"];
    config.busyThreshold = c["busyThreshold"];
    config.jammedThreshold = c["jammedThreshold"];
    config.map.height = c["map"]["height"];
    config.map.width = c["map"]["width"];
    config.map.cells = c["map"]["cells"].get<std::vector<std::vector<int>>>();
    for (const auto& s : c["spots"])
        config.spots.push_back({s["brand"], s["pos"], s["stocks"]});
    Map map(config.map.height, config.map.width, config.map.cells);
    std::vector<std::vector<long long>> totalOccupancy(config.daySteps.size(),
        std::vector<long long>(config.map.height * config.map.width));
    for (const auto& team : replay["teams"]) {
        GameState state{};
        for (size_t i = 0; i < team["kinds"].size(); ++i)
            state.agents.push_back({team["kinds"][i], c["agents"][i], config.fuelLimit});
        MatchScore score;
        for (const auto& expected : team["days"]) {
            state.traffics.clear();
            for (const auto& t : replay["traffic"][state.day])
                state.traffics.push_back({t[0], t[1]});
            auto actions = expected["actions"].get<std::vector<std::vector<int>>>();
            auto result = MoveSimulator::simulateDay(config, state, actions, map);
            json agents = json::array(), collections = json::array();
            json occupancy = json::object();
            for (const auto& a : result.agents) agents.push_back({a.pos, a.fuel});
            for (const auto& e : result.collections) collections.push_back({e.agent, e.brand});
            for (size_t p = 0; p < result.roadOccupancy.size(); ++p)
                if (result.roadOccupancy[p])
                    occupancy[std::to_string(p)] = result.roadOccupancy[p];
            bool matches = result.valid && agents == expected["agents"] &&
                collections == expected["collections"] &&
                result.remainingStock == expected["stock"].get<std::vector<int>>() &&
                occupancy == expected["occupancy"];
            if (!matches) {
                std::cerr << "Replay mismatch: " << team["name"] << " day " << state.day + 1
                          << " error=" << result.error << "\nagents=" << agents
                          << "\ncollections=" << collections << "\noccupancy=" << occupancy << '\n';
            }
            assert(matches);
            for (size_t p = 0; p < result.roadOccupancy.size(); ++p)
                totalOccupancy[state.day][p] += result.roadOccupancy[p];
            score.add(result);
            state.agents = result.agents; // Carry predictions, never reset to the server's answer.
            ++state.day;
        }
        assert(score.rank() == std::make_tuple(team["score"][0].get<int>(),
            team["score"][1].get<int>(), team["score"][2].get<int>()));
    }
    for (size_t day = 0; day + 1 < config.daySteps.size(); ++day) {
        auto next = MoveSimulator::nextTraffic(config,
            day ? totalOccupancy[day - 1] : std::vector<long long>{}, totalOccupancy[day]);
        json actual = json::array();
        for (const auto& t : next) actual.push_back({t.pos, t.status});
        assert(actual == replay["traffic"][day + 1]);
    }
    std::cout << "[PASS] Server replay: 14 team-days, 112 agent states, collections, stock, occupancy and 6 traffic transitions.\n";
}

void test_joint_simulator() {
    GameConfig config{};
    config.daySteps = {6, 6};
    config.fuelLimit = 3;
    config.spots = {{0, 1, 2}, {1, 2, 1}};
    Map map(1, 3, {{0, 0, 0}});
    GameState state{};
    state.day = 0;
    state.agents = {{0, 0, 3}, {0, 0, 3}};
    auto day = MoveSimulator::simulateDay(config, state,
        {{2, 2, 5}, {2, 2, -2}}, map);
    assert(day.valid);
    assert(day.collections.size() == 3);
    assert(day.collections[0].step == 2 && day.collections[2].step == 4);
    assert(day.remainingStock == std::vector<int>({0, 0}));
    assert(day.agents[0].pos == 1 && day.agents[0].fuel == 0);
    MatchScore score;
    score.add(day);
    score.add(day);
    assert(score.rank() == std::make_tuple(2, 4, 6));

    config.daySteps[0] = 5;
    state.agents = {{0, 0, 0}, {1, 0, 0}};
    auto refill = MoveSimulator::simulateDay(config, state,
        {{-1, 2, 2}, {-5}}, map);
    assert(refill.valid && refill.refuels == 1);
    assert(refill.agents[0].pos == 2 && refill.agents[0].fuel == 1);
    assert(refill.fuelAtTime[0] == std::vector<int>({0, 3, 3, 2, 2, 1}));
    assert(refill.collections.size() == 2);
    // A future refill cannot make a zero-fuel departure legal.
    assert(!MoveSimulator::simulateDay(config, state, {{2, 2, -1}, {-5}}, map).valid);
    state.agents[0].fuel = 1;
    auto departWhileRefueling = MoveSimulator::simulateDay(config, state,
        {{2, 2, -1}, {-5}}, map);
    assert(departWhileRefueling.valid && departWhileRefueling.refuels == 1);
    assert(departWhileRefueling.agents[0].pos == 2 &&
           departWhileRefueling.agents[0].fuel == 1);

    config.daySteps[0] = 2;
    state.agents = {{0, 0, 0}, {1, 1, 0}};
    auto late = MoveSimulator::simulateDay(config, state, {{-2}, {5}}, map);
    assert(late.valid && late.refuels == 1 && late.agents[0].fuel == 3);
    state.agents = {{0, 1, 1}};
    assert(MoveSimulator::simulateDay(config, state, {{-2}}, map).collections.size() == 1);

    config.daySteps[0] = 4;
    state.agents = {{0, 1, 3}};
    auto noDoubleCollect = MoveSimulator::simulateDay(config, state, {{5, 2}}, map);
    assert(noDoubleCollect.valid && noDoubleCollect.collections.size() == 1);
    assert(!MoveSimulator::simulateDay(config, state, {{INT_MIN}}, map).valid);
    assert(!MoveSimulator::simulateDay(config, state, {{-1}}, map).valid);
    assert(!MoveSimulator::simulateDay(config, state, {{6}}, map).valid);
    assert(!MoveSimulator::simulateDay(config, state, {{2, -1}}, map).valid);

    config.spots.clear();
    config.daySteps[0] = 2;
    Map roads(1, 2, {{1, 0}});
    state.agents = {{0, 0, 3}};
    state.traffics = {{0, 1}};
    auto road = MoveSimulator::simulateDay(config, state, {{2}}, roads);
    assert(road.valid && road.roadOccupancy[0] == 1 && road.agents[0].fuel == 1);
    std::cout << "[PASS] Joint simulation, collection, refueling and score tests passed!" << std::endl;
}

void test_simulator_step_boundaries() {
    GameConfig config{};
    config.daySteps = {2};
    config.fuelLimit = 5;
    config.spots = {{7, 1, 1}};
    GameState state{};
    Map plain(1, 3, {{0, 0, 0}});
    state.agents = {{0, 0, 1}, {1, 2, 5}};
    auto meeting = MoveSimulator::simulateDay(config, state, {{2}, {5}}, plain);
    assert(meeting.valid && meeting.agents[0].fuel == 5 && meeting.refuels == 1);
    assert(meeting.fuelAtTime[0] == std::vector<int>({1, 1, 5}));
    assert(meeting.collections.size() == 1 && meeting.collections[0].step == 2);

    // Swapping adjacent cells is not a same-cell encounter at a step boundary.
    state.agents[1].pos = 1;
    auto crossing = MoveSimulator::simulateDay(config, state, {{2}, {5}}, plain);
    assert(crossing.valid && crossing.refuels == 0 && crossing.agents[0].fuel == 0);

    config.daySteps = {4};
    config.spots.clear();
    Map terrain(1, 3, {{2, 1, 0}});
    state.agents = {{0, 0, 2}, {1, 1, 5}};
    auto transit = MoveSimulator::simulateDay(config, state, {{2, 2}, {5, 2}}, terrain);
    assert(transit.valid && transit.refuels == 1);
    assert(transit.fuelAtTime[0] == std::vector<int>({2, 5, 5, 3, 1}));
    assert(transit.agents[0].pos == 2 && transit.agents[0].fuel == 1);
    assert(transit.roadOccupancy == std::vector<long long>({0, 2, 0}));

    // Arrivals on roads count on the last boundary, and one-step road moves finish.
    config.daySteps = {1};
    Map roads(1, 2, {{1, 1}});
    state.agents = {{0, 0, 2}};
    auto last = MoveSimulator::simulateDay(config, state, {{2}}, roads);
    assert(last.valid && last.agents[0].pos == 1 && last.agents[0].fuel == 0);
    assert(last.roadOccupancy == std::vector<long long>({0, 1}));

    config.map = {1, 2, {{1, 1}}};
    config.players = 2;
    config.busyThreshold = 2;
    config.jammedThreshold = 4;
    auto traffic = MoveSimulator::nextTraffic(config, {1, 3}, {3, 5});
    assert(traffic.size() == 2 && traffic[0].status == 1 && traffic[1].status == 2);
    assert(MoveSimulator::nextTraffic(config, {}, {0, 0}).empty());
    bool rejected = false;
    try { MoveSimulator::nextTraffic(config, {}, {-1, 0}); }
    catch (const std::invalid_argument&) { rejected = true; }
    assert(rejected);
    std::cout << "[PASS] Arrival fuel, moving/final-step refueling and traffic boundaries.\n";
}

void test_diary_uses_canonical_simulation() {
    GameConfig config{};
    config.map = {1, 2, {{1, 0}}};
    config.daySteps = {2};
    config.fuelLimit = 3;
    GameState state{};
    state.agents = {{0, 0, 3}};
    state.traffics = {{0, 1}};
    Map staleMap(1, 2, config.map.cells);
    Solver solver;
    auto root = std::filesystem::path(__FILE__).parent_path().parent_path() /
        ".build" / "diary_simulator_test";
    assert(DiaryWriter::writeDay(root.string(), "valid", 0, 2,
        config, state, staleMap, solver, {{2}}, false));
    std::ifstream valid(root / "valid" / "day_0.md");
    std::string text((std::istreambuf_iterator<char>(valid)), {});
    assert(text.find("| 0-1 |") != std::string::npos);
    assert(DiaryWriter::writeDay(root.string(), "invalid", 0, 2,
        config, state, staleMap, solver, {{-3}}, false));
    std::ifstream invalid(root / "invalid" / "day_0.md");
    text.assign(std::istreambuf_iterator<char>(invalid), {});
    assert(text.find("Wait exceeds day") != std::string::npos);
    assert(text.find("`[-3]`") != std::string::npos);
    assert(text.find("|---") == std::string::npos);
    valid.close();
    invalid.close();
    for (const auto* name : {"valid", "invalid"}) {
        std::filesystem::remove(root / name / "day_0.md");
        std::filesystem::remove(root / name);
    }
    std::filesystem::remove(root);
    std::cout << "[PASS] Diary uses snapshot traffic and reports invalid simulation without predictions.\n";
}

void test_joint_refuel_extends_patrol_route() {
    GameConfig config{};
    config.map.height = 1;
    config.map.width = 4;
    config.map.cells = {{0, 0, 0, 0}};
    config.daySteps = {8};
    config.fuelLimit = 3;
    config.initialAgentPositions = {0, 1};
    config.spots = {{0, 1, 1}, {1, 3, 1}};

    GameState state{};
    state.day = 0;
    state.agents = {{0, 0, 1}, {1, 1, 3}};
    Map map(1, 4, config.map.cells);
    Solver solver;
    auto actions = solver.solve(config, state, map);
    auto day = MoveSimulator::simulateDay(config, state, actions, map);

    assert(ActionValidator::validate(config, state, actions, map));
    assert(day.valid && day.refuels == 1);
    assert(day.agents[0].pos == 3);
    bool movedAfterWait = false, sawWait = false;
    for (int action : actions[0]) {
        sawWait |= action < 0;
        movedAfterWait |= sawWait && action >= 0;
    }
    assert(movedAfterWait);
    std::cout << "[PASS] Joint refuel extends patrol route test passed!" << std::endl;
}

void test_recorded_match_120_score_regression() {
    // Match 6c560a25-4fb6-4494-bf35-99d73d645076: 18+26+27+25+24 = 120.
    const std::vector<int> dailyServings = {18, 26, 27, 25, 24};
    MatchScore score;
    for (int servings : dailyServings) {
        DaySimulation day;
        day.valid = true;
        for (int brand = 0; brand < 8; ++brand) day.brands.insert(brand);
        day.collections.resize(servings);
        score.add(day);
    }
    assert(score.rank() == std::make_tuple(8, 40, 120));
}

void test_incidental_spot_updates_planner_state() {
    GameConfig config{};
    config.map.height = 1;
    config.map.width = 4;
    config.map.cells = {{0, 0, 0, 0}};
    config.daySteps = {6};
    config.fuelLimit = 3;
    config.initialAgentPositions = {0};
    config.spots = {{0, 1, 1}, {1, 2, 1}, {0, 3, 1}};

    GameState state{};
    state.day = 0;
    state.agents = {{0, 0, 3}};
    Map map(1, 4, config.map.cells);
    Solver solver;
    auto actions = solver.solve(config, state, map);
    auto day = MoveSimulator::simulateDay(config, state, actions, map);

    assert(day.valid && day.collections.size() == 3);
    assert(day.agents[0].pos == 3);
    std::cout << "[PASS] Incidental spot updates planner state test passed!" << std::endl;
}

void test_zero_wait_multiday_movement() {
    GameConfig config{};
    config.map.height = 1;
    config.map.width = 10;
    config.map.cells = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    config.daySteps = {2, 2, 2};
    config.fuelLimit = 20;
    config.initialAgentPositions = {0};
    config.spots = {{0, 5, 1}};

    GameState state{};
    state.day = 0;
    state.agents = {{0, 0, 20}};
    Map map(1, 10, config.map.cells);
    Solver solver;

    auto actions0 = solver.solve(config, state, map);
    assert(ActionValidator::validate(config, state, actions0, map));
    assert(actions0.size() == 1);
    for (int act : actions0[0]) {
        assert(act >= 0);
    }

    state.day = 1;
    state.agents[0].pos = 2;
    state.agents[0].fuel = 18;
    auto actions1 = solver.solve(config, state, map);
    assert(ActionValidator::validate(config, state, actions1, map));
    for (int act : actions1[0]) {
        assert(act >= 0);
    }

    state.day = 2;
    state.agents[0].pos = 4;
    state.agents[0].fuel = 16;
    auto actions2 = solver.solve(config, state, map);
    assert(ActionValidator::validate(config, state, actions2, map));
    assert(!actions2[0].empty() && actions2[0][0] == 2);

    std::cout << "[PASS] Zero-Wait Multi-day Path Planning test passed!" << std::endl;
}

void test_day_steps_are_per_day() {
    GameConfig config{};
    config.daySteps = {31, 47, 62, 78, 93};

    for (size_t day = 0; day < config.daySteps.size(); ++day) {
        assert(config.getDaySteps(static_cast<int>(day)) == config.daySteps[day]);
    }
    assert(config.getDaySteps(-1) == 0);
    assert(config.getDaySteps(static_cast<int>(config.daySteps.size())) == 0);

    std::cout << "[PASS] Per-day step counts test passed!" << std::endl;
}

void test_agent_strategy_simulates_supply_counts() {
    GameConfig config{};
    config.players = 2;
    config.busyThreshold = 2;
    config.jammedThreshold = 4;
    config.initialAgentPositions = {0, 1, 2, 3, 4, 5};
    assert(AgentStrategy::decideAgentTypes(config) == std::vector<int>(6, 0));

    config.daySeconds = {60, 60, 60, 60, 60};
    config.daySteps = {8, 10, 12, 14, 16};
    config.map.height = 6;
    config.map.width = 6;
    config.map.cells = {
        {0, 0, 0, 1, 0, 0},
        {2, 1, 0, 2, 0, 0},
        {1, 0, 1, 0, 0, 0},
        {2, 0, 1, 0, 0, 2},
        {2, 1, 0, 0, 0, 2},
        {2, 1, 0, 0, 0, 0}
    };
    config.spots = {
        {0, 26, 2}, {1, 5, 1}, {2, 1, 4}, {3, 22, 1},
        {0, 8, 4}, {1, 10, 3}, {2, 21, 3}, {3, 15, 3}
    };
    config.initialAgentPositions = {29, 0, 19, 28};
    config.fuelLimit = 7;
    // Official ranking prefers 4/20/45 with one supply over 4/19/46 with two.
    assert(AgentStrategy::decideAgentTypes(config) ==
           std::vector<int>({0, 0, 0, 1}));
    std::cout << "[PASS] Simulated supply-count strategy test passed!" << std::endl;
}

void test_patrol_region_is_a_soft_preference() {
    GameConfig config{};
    config.map.height = 1;
    config.map.width = 5;
    config.map.cells = {{0, 0, 0, 0, 0}};
    config.daySteps = {4};
    config.fuelLimit = 10;
    config.spots = {{0, 1, 1}, {0, 4, 1}};
    Map map(1, 5, config.map.cells);

    std::vector<int> stock = {1, 1};
    std::set<int> visited, matchBrands, dailyBrands, claimed;
    int target = -1;
    Position targetPos{-1, -1};
    std::vector<int> stepSpots;
    std::vector<Position> stepPositions;
    auto actions = PatrolPlanner::planDay(
        config, map, {2, 0}, 4, 10, stock, visited, matchBrands, dailyBrands,
        target, targetPos, stepSpots, stepPositions, claimed,
        true, false, nullptr, -2, {1});
    assert(!actions.empty() && actions[0] == 2);

    stock = {1, 0};
    visited.clear();
    matchBrands.clear();
    dailyBrands.clear();
    claimed.clear();
    actions = PatrolPlanner::planDay(
        config, map, {2, 0}, 4, 10, stock, visited, matchBrands, dailyBrands,
        target, targetPos, stepSpots, stepPositions, claimed,
        true, false, nullptr, -2, {1});
    assert(!actions.empty() && actions[0] == 5);
    std::cout << "[PASS] Patrol region soft-preference test passed!" << std::endl;
}

void test_supply_intercept_lowest_fuel_multiday() {
    GameConfig config{};
    config.map.height = 1;
    config.map.width = 15;
    config.map.cells = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    config.daySteps = {2, 4, 6, 8};
    config.fuelLimit = 20;
    config.initialAgentPositions = {0, 14};
    config.spots = {{0, 10, 1}};

    GameState state{};
    state.day = 0;
    state.agents = {{0, 0, 3}, {1, 14, 20}};
    Map map(1, 15, config.map.cells);
    Solver solver;

    auto actions = solver.solve(config, state, map);
    assert(ActionValidator::validate(config, state, actions, map));
    assert(actions.size() == 2);
    assert(!actions[1].empty() && actions[1][0] == 5);

    std::cout << "[PASS] Supply Intercept & Multi-day Supply test passed!" << std::endl;
}

void test_supply_earliest_route_intercept() {
    GameConfig config{};
    config.map.height = 3;
    config.map.width = 5;
    config.map.cells = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    config.daySteps = {4};
    config.fuelLimit = 20;
    config.initialAgentPositions = {0, 6};
    config.spots = {{0, 4, 1}};

    GameState state{};
    state.day = 0;
    state.agents = {{0, 0, 10}, {1, 6, 20}};
    Map map(3, 5, config.map.cells);
    Solver solver;

    auto actions = solver.solve(config, state, map);
    assert(ActionValidator::validate(config, state, actions, map));
    assert(actions.size() == 2);
    assert(!actions[1].empty());
    assert(actions[1][0] >= 0 && actions[1][0] <= 5);

    std::cout << "[PASS] Supply Earliest Route Intercept test passed!" << std::endl;
}

void test_multiple_supplies_reserve_distinct_patrols() {
    GameConfig config{};
    config.map.height = 1;
    config.map.width = 7;
    config.map.cells = {{0, 0, 0, 0, 0, 0, 0}};
    config.daySteps = {10};
    config.fuelLimit = 10;
    config.spots = {{0, 1, 1}, {1, 5, 1}};
    Map map(1, 7, config.map.cells);
    std::vector<Agent> agents = {
        {0, 0, 1}, {0, 6, 1}, {1, 2, 10}, {1, 4, 10}
    };
    std::vector<std::vector<int>> patrolActions = {{2, -8}, {5, -8}, {}, {}};
    std::vector<int> targets = {0, 1, -1, -1};
    std::vector<Position> positions = {{1, 0}, {5, 0}, {-1, -1}, {-1, -1}};
    std::set<int> reserved;

    int firstPatrol = -1, targetSpot = -1;
    Position targetPos{-1, -1};
    std::vector<int> stepSpots;
    std::vector<Position> stepPositions;
    SupplyPlanner::planDay(config, map, agents[2], agents, 2, 10, targets,
        positions, patrolActions, firstPatrol, targetSpot, targetPos,
        stepSpots, stepPositions, {}, {1, 1}, reserved);
    assert(firstPatrol >= 0);
    reserved.insert(firstPatrol);

    int secondPatrol = -1;
    SupplyPlanner::planDay(config, map, agents[3], agents, 3, 10, targets,
        positions, patrolActions, secondPatrol, targetSpot, targetPos,
        stepSpots, stepPositions, {}, {1, 1}, reserved);
    assert(secondPatrol >= 0 && secondPatrol != firstPatrol);
    std::cout << "[PASS] Multiple supplies reserve distinct patrols test passed!" << std::endl;
}

int main() {
    test_server_replay();
    test_simulator_step_boundaries();
    test_diary_uses_canonical_simulation();
    test_day_steps_are_per_day();
    test_agent_strategy_simulates_supply_counts();
    test_patrol_region_is_a_soft_preference();
    test_joint_simulator();
    test_joint_refuel_extends_patrol_route();
    test_recorded_match_120_score_regression();
    test_incidental_spot_updates_planner_state();
    test_map_and_geometry();
    test_travel_time_and_fuel();
    test_sssp();
    test_pathfinder_fuel_limit();
    test_validator_travel_time();
    test_validator_fuel_check();
    test_solver_multi_spot();
    test_solver_with_supply();
    test_spot_scoring();
    test_tactical_scoring_and_claims();
    test_fuel_weighted_path();
    test_pareto_path_and_cache();
    test_lexicographic_brand_ranking();
    test_stock_aware_coordination_and_reset();
    test_first_spot_uses_global_shortest_assignment();
    test_upgrade_plan_policies();
    test_solver_retry_is_transactional();
    test_zero_wait_multiday_movement();
    test_supply_intercept_lowest_fuel_multiday();
    test_supply_earliest_route_intercept();
    test_multiple_supplies_reserve_distinct_patrols();
    std::cout << "\nAll unit tests completed successfully!" << std::endl;
    return 0;
}
