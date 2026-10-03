#include <cstdlib>
#include <iostream>
#include <vector>
#include "api/GameApiClient.hpp"
#include "map/Map.hpp"
#include "solver/MoveSimulator.hpp"
#include "solver/Solver.hpp"

int main() {
    const char* base = std::getenv("API_BASE_URL");
    const char* token = std::getenv("API_TOKEN");
    const char* match = std::getenv("MATCH_ID");
    if (!base || !token || !match) return 2;
    GameApiClient api(base, token);
    auto config = api.getMatchConfig(match);
    auto live = api.getMatchStatus(match);
    if (config.daySteps.empty() || live.agents.size() != config.initialAgentPositions.size()) return 3;
    GameState state{};
    for (size_t i = 0; i < live.agents.size(); ++i)
        state.agents.push_back({live.agents[i].kind, config.initialAgentPositions[i], config.fuelLimit});
    Map map(config.map.height, config.map.width, config.map.cells);
    Solver solver;
    MatchScore score;
    std::vector<long long> previous;
    for (int day = 0; day < static_cast<int>(config.daySteps.size()); ++day) {
        state.day = day;
        auto actions = solver.solve(config, state, map);
        auto result = MoveSimulator::simulateDay(config, state, actions, map);
        if (!result.valid) return 4;
        int fuel = 0, zero = 0;
        for (const auto& a : result.agents) if (a.kind == 0) { fuel += a.fuel; zero += a.fuel == 0; }
        std::cout << day << ':' << result.brands.size() << '/' << result.collections.size()
                  << " fuel=" << fuel << " zero=" << zero << " missing=";
        std::set<int> allBrands;
        for (const auto& spot : config.spots) allBrands.insert(spot.brand);
        for (int brand : allBrands) if (!result.brands.count(brand)) std::cout << brand << ',';
        std::cout << '\n';
        if (day == 1 || result.brands.size() < allBrands.size()) {
            for (size_t i = 0; i < result.agents.size(); ++i) if (result.agents[i].kind == 0) {
                std::cout << "  patrol=" << i << " start=" << state.agents[i].pos
                          << '/' << state.agents[i].fuel << " end=" << result.agents[i].pos
                          << '/' << result.agents[i].fuel << " brands=";
                for (const auto& event : result.collections)
                    if (event.agent == static_cast<int>(i)) std::cout << event.brand << ',';
                std::cout << '\n';
            }
            std::cout << "  refuels=";
            for (const auto& event : result.refuelEvents)
                std::cout << event.patrol << '@' << event.step << ',';
            std::cout << '\n';
        }
        score.add(result);
        state.agents = result.agents;
        for (auto& count : result.roadOccupancy) count *= config.players;
        state.traffics = MoveSimulator::nextTraffic(config, previous, result.roadOccupancy);
        previous = result.roadOccupancy;
        solver.commitLastPlan();
    }
    std::cout << "score=" << score.brands.size() << '/' << score.dailyTypes << '/' << score.servings << '\n';
}
