#include <algorithm>
#include <chrono>
#include <fstream>
#include <iostream>
#include <string>
#include <tuple>
#include <nlohmann/json.hpp>
#include "solver/Solver.hpp"
#include "solver/MoveSimulator.hpp"

// Same inputs for every revision; never submits actions to a server.
int main(int argc, char** argv) {
    using nlohmann::json;
    std::string replayPath = "HexaUdon/tests/replay_5cc3b9ea.json";
    bool formationMode = false;
    bool checkBaseline = false;
    for (int i = 1; i < argc; ++i) {
        if (std::string(argv[i]) == "--formation") formationMode = true;
        else if (std::string(argv[i]) == "--check") checkBaseline = true;
        else replayPath = argv[i];
    }
    std::ifstream input(replayPath);
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
    struct Scenario {
        int shift;
        bool fixed;
        std::vector<int> types;
    };
    std::vector<Scenario> scenarios;
    if (formationMode) {
        auto selected = AgentStrategy::decideAgentTypes(config);
        for (bool fixed : {true, false}) scenarios.push_back({0, fixed, selected});
    } else {
        for (int shift : {0, 2}) for (bool fixed : {true, false}) for (int supplies : {3, 2}) {
            std::vector<int> types(config.initialAgentPositions.size(), 0);
            for (int i = 0; i < supplies; ++i)
                types[types.size() - 1 - i] = 1;
            scenarios.push_back({shift, fixed, std::move(types)});
        }
    }

    json output = json::array();
    for (const auto& benchmark : scenarios) {
        auto scenario = config;
        std::rotate(scenario.initialAgentPositions.begin(),
                    scenario.initialAgentPositions.begin() + benchmark.shift,
                    scenario.initialAgentPositions.end());
        Map map(scenario.map.height, scenario.map.width, scenario.map.cells);
        GameState state{};
        int n = static_cast<int>(scenario.initialAgentPositions.size());
        for (int i = 0; i < n; ++i)
            state.agents.push_back({benchmark.types[i], scenario.initialAgentPositions[i], scenario.fuelLimit});
        Solver solver;
        MatchScore score;
        std::vector<long long> previous;
        json days = json::array();
        double totalMs = 0;
        for (int day = 0; day < static_cast<int>(scenario.daySteps.size()); ++day) {
            state.day = day;
            if (benchmark.fixed) {
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
            if (!benchmark.fixed) {
                for (auto& x : result.roadOccupancy) x *= scenario.players;
                state.traffics = MoveSimulator::nextTraffic(scenario, previous, result.roadOccupancy);
                previous = result.roadOccupancy;
            }
            solver.commitLastPlan();
        }
        int supplies = static_cast<int>(std::count(benchmark.types.begin(), benchmark.types.end(), 1));
        output.push_back({{"shift",benchmark.shift},
            {"traffic",benchmark.fixed?"recorded-fixed":"mirrored-dynamic"},
            {"types",benchmark.types}, {"supplies",supplies},
            {"score",{score.brands.size(),score.dailyTypes,score.servings}},
            {"ms",totalMs},{"days",days}});
        std::cerr << "shift=" << benchmark.shift << " fixed=" << benchmark.fixed
                  << " supply=" << supplies
                  << " score=" << score.brands.size() << '/' << score.dailyTypes << '/' << score.servings
                  << " ms=" << totalMs << '\n';
    }
    std::cout << output.dump(2) << '\n';
    if (checkBaseline) {
        std::ifstream baselineInput("HexaUdon/tests/benchmark_baseline.json");
        if (!baselineInput) {
            std::cerr << "Benchmark baseline not found\n";
            return 3;
        }
        json baseline;
        baselineInput >> baseline;
        for (const auto& expected : baseline) {
            auto actual = std::find_if(output.begin(), output.end(), [&](const auto& result) {
                return result["shift"] == expected["shift"] &&
                       result["traffic"] == expected["traffic"] &&
                       result["supplies"] == expected["supplies"];
            });
            if (actual == output.end() ||
                actual->at("score").get<std::vector<int>>() <
                    expected.at("score").get<std::vector<int>>()) {
                std::cerr << "[REGRESSION] shift=" << expected["shift"]
                          << " traffic=" << expected["traffic"]
                          << " supplies=" << expected["supplies"] << '\n';
                return 4;
            }
        }
        std::cerr << "[PASS] All benchmark scores meet the tracked baseline.\n";
    }
}
