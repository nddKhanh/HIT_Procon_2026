#include <chrono>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include "solver/Solver.hpp"
#include "solver/MoveSimulator.hpp"

// Same inputs for every revision; never submits actions to a server.
int main(int argc, char** argv) {
    using nlohmann::json;
    std::ifstream input(argc > 1 ? argv[1] : "HexaUdon/tests/replay_5cc3b9ea.json");
    if (!input) { std::cerr << "Replay file not found\n"; return 1; }
    json replay; input >> replay;
    const auto& c = replay["config"];
    GameConfig config{};
    config.map = {c["map"]["height"], c["map"]["width"],
        c["map"]["cells"].get<std::vector<std::vector<int>>>()};
    config.daySteps = c["daySteps"].get<std::vector<int>>();
    config.initialAgentPositions = c["agents"].get<std::vector<int>>();
    config.fuelLimit = c["fuelLimits"];
    config.players = c["players"];
    config.busyThreshold = c["busyThreshold"];
    config.jammedThreshold = c["jammedThreshold"];
    for (const auto& s : c["spots"]) config.spots.push_back({s["brand"], s["pos"], s["stocks"]});
    json output = json::array();
    for (int shift : {0, 2}) for (bool fixed : {true, false}) for (int supplies : {3, 2}) {
        auto scenario = config;
        std::rotate(scenario.initialAgentPositions.begin(), scenario.initialAgentPositions.begin() + shift,
                    scenario.initialAgentPositions.end());
        Map map(scenario.map.height, scenario.map.width, scenario.map.cells);
        GameState state{};
        int n = static_cast<int>(scenario.initialAgentPositions.size());
        for (int i = 0; i < n; ++i)
            state.agents.push_back({i >= n - supplies ? 1 : 0, scenario.initialAgentPositions[i], scenario.fuelLimit});
        Solver solver;
        MatchScore score;
        std::vector<long long> previous;
        json days = json::array();
        double totalMs = 0;
        for (int day = 0; day < static_cast<int>(scenario.daySteps.size()); ++day) {
            state.day = day;
            if (fixed) {
                state.traffics.clear();
                for (const auto& t : replay["traffic"][day]) state.traffics.push_back({t[0],t[1]});
            }
            auto start = std::chrono::steady_clock::now();
            auto actions = solver.solve(scenario, state, map);
            double ms = std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now()-start).count();
            totalMs += ms;
            auto result = MoveSimulator::simulateDay(scenario, state, actions, map);
            if (!result.valid) { std::cerr << "Invalid day " << day << ": " << result.error << '\n'; return 2; }
            int patrolWait = 0, supplyWait = 0;
            for (int i = 0; i < n; ++i) for (int a : actions[i]) if (a < 0)
                (state.agents[i].kind ? supplyWait : patrolWait) -= a;
            std::set<int> missing;
            for (const auto& s : scenario.spots) if (!result.brands.count(s.brand)) missing.insert(s.brand);
            days.push_back({{"brands", result.brands.size()}, {"servings", result.collections.size()},
                {"missing", missing}, {"patrol_wait",patrolWait}, {"supply_wait",supplyWait}, {"ms",ms}});
            score.add(result);
            state.agents = result.agents;
            if (!fixed) {
                for (auto& x : result.roadOccupancy) x *= scenario.players;
                state.traffics = MoveSimulator::nextTraffic(scenario, previous, result.roadOccupancy);
                previous = result.roadOccupancy;
            }
            solver.commitLastPlan();
        }
        output.push_back({{"shift",shift},{"traffic",fixed?"recorded-fixed":"mirrored-dynamic"},
            {"supplies",supplies},{"score",{score.brands.size(),score.dailyTypes,score.servings}},
            {"ms",totalMs},{"days",days}});
        std::cerr << "shift=" << shift << " fixed=" << fixed << " supply=" << supplies
                  << " score=" << score.brands.size() << '/' << score.dailyTypes << '/' << score.servings
                  << " ms=" << totalMs << '\n';
    }
    std::cout << output.dump(2) << '\n';
}
