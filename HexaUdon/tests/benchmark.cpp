#include <algorithm>
#include <chrono>
#include <fstream>
#include <iostream>
#include <string>
#include <tuple>
#include <nlohmann/json.hpp>
#include "solver/Solver.hpp"
#include "solver/MoveSimulator.hpp"
#include "solver/MapStrategy.hpp"

namespace {
GameConfig readConfig(const nlohmann::json& c) {
    GameConfig config{};
    config.map = {c["map"]["height"], c["map"]["width"],
        c["map"]["cells"].get<std::vector<std::vector<int>>>()};
    config.daySteps = c["daySteps"].get<std::vector<int>>();
    config.daySeconds = c.value("daySeconds", std::vector<int>{});
    config.initialAgentPositions = c["agents"].get<std::vector<int>>();
    config.fuelLimit = c["fuelLimits"];
    config.players = c["players"];
    config.busyThreshold = c["busyThreshold"];
    config.jammedThreshold = c["jammedThreshold"];
    for (const auto& s : c["spots"]) config.spots.push_back({s["brand"], s["pos"], s["stocks"]});
    return config;
}

int runCoverageBenchmark(bool fleetRepair = true, int onlySeed = -1) {
    using nlohmann::json;
    std::ifstream input("HexaUdon/tests/coverage_cases.json");
    if (!input) { std::cerr << "Coverage cases not found\n"; return 1; }
    json cases;
    input >> cases;
    json output = json::array();
    bool passed = true;
    for (const auto& test : cases) {
        if (onlySeed >= 0 && test.at("seed").get<int>() != onlySeed) continue;
        auto config = readConfig(test.at("config"));
        auto types = test.at("types").get<std::vector<int>>();
        GameState state{};
        for (size_t i = 0; i < types.size(); ++i)
            state.agents.push_back({types[i], config.initialAgentPositions[i], config.fuelLimit});
        Map map(config.map.height, config.map.width, config.map.cells);
        Solver solver(fleetRepair);
        MatchScore score;
        std::vector<long long> previous;
        json days = json::array();
        auto started = std::chrono::steady_clock::now();
        for (size_t day = 0; day < config.daySteps.size(); ++day) {
            state.day = static_cast<int>(day);
            auto actions = solver.solve(config, state, map);
            auto result = MoveSimulator::simulateDay(config, state, actions, map);
            if (!result.valid) {
                std::cerr << "Invalid seed=" << test.at("seed") << " day=" << day
                          << ": " << result.error << '\n';
                return 2;
            }
            days.push_back({result.brands.size(), result.collections.size()});
            score.add(result);
            state.agents = result.agents;
            for (auto& count : result.roadOccupancy)
                count *= test.at("trafficMultiplier").get<int>();
            state.traffics = MoveSimulator::nextTraffic(config, previous, result.roadOccupancy);
            previous = std::move(result.roadOccupancy);
            solver.commitLastPlan();
        }
        std::vector<int> actual{static_cast<int>(score.brands.size()), score.dailyTypes, score.servings};
        auto expected = test.at("expected").get<std::vector<int>>();
        passed = passed && actual >= expected;
        double ms = std::chrono::duration<double, std::milli>(
            std::chrono::steady_clock::now() - started).count();
        output.push_back({{"seed", test.at("seed")}, {"baseline", test.at("baseline")},
                          {"score", actual}, {"days", days}, {"ms", ms}});
        std::cerr << (actual >= expected ? "[PASS]" : "[REGRESSION]")
                  << " seed=" << test.at("seed") << " score=" << actual[0]
                  << '/' << actual[1] << '/' << actual[2] << '\n';
    }
    std::cout << output.dump(2) << '\n';
    return passed ? 0 : 4;
}
}

// Same inputs for every revision; never submits actions to a server.
int main(int argc, char** argv) {
    using nlohmann::json;
    if (argc >= 3 && std::string(argv[1]) == "--sample") {
        std::ifstream input(argv[2]);
        if (!input) return 1;
        json data; input >> data;
        auto config = readConfig(data);
        bool profiles = true;
        bool mirroredTraffic = false;
        bool ownTraffic = false;
        bool autoFormation = false;
        std::string fixedTypes;
        bool multiDayEndpoints = false;
        long long formationBudgetMs = 57000;
        std::vector<int> minimumScore;
        bool componentMinimum = false;
        long long liveBudgetMs = 0;
        int supply = static_cast<int>(config.initialAgentPositions.size()) - 1;
        for (int i = 3; i < argc; ++i) {
            if (std::string(argv[i]) == "--legacy") profiles = false;
            else if (std::string(argv[i]) == "--multi-day-endpoints") multiDayEndpoints = true;
            else if (std::string(argv[i]) == "--mirrored-traffic") mirroredTraffic = true;
            else if (std::string(argv[i]) == "--own-traffic") ownTraffic = true;
            else if (std::string(argv[i]) == "--auto-formation") autoFormation = true;
            else if (std::string(argv[i]) == "--types") {
                if (++i >= argc) return 1;
                fixedTypes = argv[i];
            }
            else if (std::string(argv[i]) == "--formation-budget-ms") {
                if (++i >= argc) return 1;
                formationBudgetMs = std::stoll(argv[i]);
            }
            else if (std::string(argv[i]) == "--expect" || std::string(argv[i]) == "--at-least") {
                componentMinimum = std::string(argv[i]) == "--at-least";
                if (i + 3 >= argc) return 1;
                for (int field = 0; field < 3; ++field)
                    minimumScore.push_back(std::stoi(argv[++i]));
            }
            else if (std::string(argv[i]) == "--live-budget-ms") {
                if (++i >= argc) return 1;
                liveBudgetMs = std::stoll(argv[i]);
            }
            else supply = std::stoi(argv[i]);
        }
        if (supply < 0 || supply >= static_cast<int>(config.initialAgentPositions.size())) return 1;
        Solver solver(true, profiles, multiDayEndpoints);
        Map map(config.map.height, config.map.width, config.map.cells);
        GameState state{};
        std::vector<int> types(config.initialAgentPositions.size(), 0);
        types[supply] = 1;
        if (!fixedTypes.empty()) {
            if (fixedTypes.size() != types.size() ||
                fixedTypes.find_first_not_of("01") != std::string::npos) return 1;
            for (size_t i = 0; i < types.size(); ++i) types[i] = fixedTypes[i] - '0';
        }
        auto formationStart = std::chrono::steady_clock::now();
        if (autoFormation) types = solver.decideAgentTypes(config, formationBudgetMs);
        auto formationMs = std::chrono::duration<double, std::milli>(
            std::chrono::steady_clock::now() - formationStart).count();
        if (autoFormation && formationBudgetMs > 0 && formationMs > formationBudgetMs + 3000) {
            std::cerr << "Formation exceeded its reserved submission window\n";
            return 5;
        }
        for (size_t i = 0; i < config.initialAgentPositions.size(); ++i)
            state.agents.push_back({types[i],
                config.initialAgentPositions[i], config.fuelLimit});
        MatchScore total;
        std::vector<long long> previousOccupancy;
        json days = json::array();
        for (size_t day = 0; day < config.daySteps.size(); ++day) {
            state.day = static_cast<int>(day);
            if (liveBudgetMs > 0) {
                const auto now = std::chrono::duration_cast<std::chrono::milliseconds>(
                    std::chrono::system_clock::now().time_since_epoch()).count();
                state.endsAt = (now + liveBudgetMs + 750) / 1000;
            }
            auto start = std::chrono::steady_clock::now();
            auto actions = solver.solve(config, state, map);
            auto result = MoveSimulator::simulateDay(config, state, actions, map);
            if (!result.valid) { std::cerr << result.error << '\n'; return 2; }
            auto ms = std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now()-start).count();
            if (liveBudgetMs > 0 && ms > liveBudgetMs + 5000) {
                std::cerr << "Live planning exceeded its reserved submission window\n";
                return 5;
            }
            std::set<int> missing;
            for (const auto& spot : config.spots)
                if (!result.brands.count(spot.brand)) missing.insert(spot.brand);
            days.push_back({{"daily",result.brands.size()}, {"serving",result.collections.size()},
                {"missing",missing}, {"ms",ms}});
            std::cerr << "day=" << day << " daily=" << result.brands.size() << " ms=" << ms << '\n';
            total.add(result);
            state.agents = result.agents;
            if (mirroredTraffic || ownTraffic) {
                if (mirroredTraffic)
                    for (auto& count : result.roadOccupancy) count *= config.players;
                state.traffics = MoveSimulator::nextTraffic(config, previousOccupancy, result.roadOccupancy);
                previousOccupancy = std::move(result.roadOccupancy);
            }
            solver.commitLastPlan();
        }
        std::cout << json({{"profile", profiles ? MapStrategy::select(config).name : "legacy"},
            {"supplyIndex",autoFormation ? -1 : supply}, {"types",types}, {"autoFormation",autoFormation},
            {"multiDayEndpoints",multiDayEndpoints},
            {"formationMs",formationMs}, {"traffic",mirroredTraffic ? "mirrored-dynamic" : ownTraffic ? "own-dynamic" : "neutral"},
            {"score",{total.brands.size(), total.dailyTypes, total.servings}}, {"days",days}}).dump(2) << '\n';
        const std::vector<int> actual{static_cast<int>(total.brands.size()),
                                      total.dailyTypes, total.servings};
        bool belowMinimum = !minimumScore.empty() && actual < minimumScore;
        if (componentMinimum)
            for (size_t field = 0; field < minimumScore.size(); ++field)
                belowMinimum |= actual[field] < minimumScore[field];
        if (belowMinimum) {
            std::cerr << "[REGRESSION] Sample score is below --expect\n";
            return 4;
        }
        return 0;
    }
    if (argc > 1 && std::string(argv[1]) == "--coverage") {
        bool fleetRepair = true;
        int seed = -1;
        for (int i = 2; i < argc; ++i) {
            if (std::string(argv[i]) == "--no-fleet-repair") fleetRepair = false;
            else seed = std::stoi(argv[i]);
        }
        return runCoverageBenchmark(fleetRepair, seed);
    }
    std::string replayPath = "HexaUdon/tests/replay_5cc3b9ea.json";
    bool formationMode = false;
    bool checkBaseline = false;
    bool twoSupplyOnly = false;
    for (int i = 1; i < argc; ++i) {
        if (std::string(argv[i]) == "--formation") formationMode = true;
        else if (std::string(argv[i]) == "--check") checkBaseline = true;
        else if (std::string(argv[i]) == "--two-supply") twoSupplyOnly = true;
        else replayPath = argv[i];
    }
    std::ifstream input(replayPath);
    if (!input) { std::cerr << "Replay file not found\n"; return 1; }
    json replay; input >> replay;
    const auto& c = replay["config"];
    GameConfig config = readConfig(c);
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
            if (twoSupplyOnly && supplies != 2) continue;
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
            const auto expectedScore = expected.at("score").get<std::vector<int>>();
            const auto actualScore = actual == output.end() ? std::vector<int>{} :
                actual->at("score").get<std::vector<int>>();
            const bool scoreRegression = actual == output.end() || actualScore < expectedScore;
            const bool responseRegression = actual != output.end() &&
                actualScore == expectedScore && expected.contains("maxMs") &&
                actual->at("ms").get<double>() > expected.at("maxMs").get<double>();
            if (scoreRegression || responseRegression) {
                std::cerr << "[REGRESSION] shift=" << expected["shift"]
                          << " traffic=" << expected["traffic"]
                          << " supplies=" << expected["supplies"];
                if (responseRegression) std::cerr << " response_ms=" << actual->at("ms");
                std::cerr << '\n';
                return 4;
            }
        }
        std::cerr << "[PASS] All benchmark scores meet the tracked baseline.\n";
    }
    return 0;
}
