#include <chrono>
#include <iostream>
#include <string>
#include "io/JsonReader.hpp"
#include "solver/Solver.hpp"
#include "solver/MoveSimulator.hpp"

// Feed example/sample_16.json or sample_24.json on stdin. No server writes.
int main(int argc, char** argv) {
    if (argc < 3) {
        std::cerr << "usage: small_map_replay TYPES neutral|own|mirror [day_budget_ms] [days] [min_daily]\n";
        return 1;
    }
    const auto config = JsonReader::readGameConfig();
    const std::string types = argv[1], traffic = argv[2];
    if (types.size() != config.initialAgentPositions.size() ||
        (traffic != "neutral" && traffic != "own" && traffic != "mirror")) return 1;
    const long long budgetMs = argc > 3 ? std::stoll(argv[3]) : 45000;
    const int days = argc > 4 ? std::stoi(argv[4]) : static_cast<int>(config.daySteps.size());
    GameState state{};
    for (size_t i = 0; i < types.size(); ++i) {
        if (types[i] != '0' && types[i] != '1') return 1;
        state.agents.push_back({types[i] - '0', config.initialAgentPositions[i], config.fuelLimit});
    }
    Map map(config.map.height, config.map.width, config.map.cells);
    Solver solver;
    MatchScore score;
    std::vector<long long> previousOccupancy;
    for (state.day = 0; state.day < std::min<int>(days, config.daySteps.size()); ++state.day) {
        const auto now = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch()).count();
        state.endsAt = (now + budgetMs + 750) / 1000;
        const auto started = std::chrono::steady_clock::now();
        const auto actions = solver.solve(config, state, map);
        const auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now() - started).count();
        const auto result = MoveSimulator::simulateDay(config, state, actions, map);
        if (!result.valid) {
            std::cerr << "invalid day " << state.day << ": " << result.error << '\n';
            return 2;
        }
        score.add(result);
        std::cout << "day=" << state.day << " daily=" << result.brands.size()
                  << " servings=" << result.collections.size() << " solve_ms=" << ms
                  << " missing=";
        std::set<int> missing;
        for (const auto& spot : config.spots)
            if (!result.brands.count(spot.brand)) missing.insert(spot.brand);
        for (int brand : missing) std::cout << brand << ',';
        std::cout << " fuel=";
        for (const auto& agent : result.agents)
            if (agent.kind == 0) std::cout << agent.fuel << ',';
        std::cout << '\n';
        state.agents = result.agents;
        solver.commitLastPlan();
        if (traffic != "neutral") {
            auto occupancy = result.roadOccupancy;
            if (traffic == "mirror")
                for (auto& count : occupancy) count *= config.players;
            state.traffics = MoveSimulator::nextTraffic(config, previousOccupancy, occupancy);
            previousOccupancy = std::move(occupancy);
        }
    }
    std::cout << "score=" << score.brands.size() << '/' << score.dailyTypes << '/'
              << score.servings << '\n';
    if (argc > 5 && score.dailyTypes < std::stoi(argv[5])) return 3;
}
