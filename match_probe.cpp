#include "io/JsonReader.hpp"
#include "map/Map.hpp"
#include "solver/MoveSimulator.hpp"
#include "solver/PathFinder.hpp"
#include "solver/Solver.hpp"
#include <algorithm>
#include <chrono>
#include <iostream>

int main() {
    GameConfig config = JsonReader::readGameConfig();
    auto selectionStarted = std::chrono::steady_clock::now();
    auto selected = AgentStrategy::decideAgentTypes(config);
    auto selectionMs = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now() - selectionStarted).count();
    std::cout << "selectionMs=" << selectionMs << " selected=";
    for (int type : selected) std::cout << type;
    std::cout << "\n";
    std::vector<int> types = {0, 0, 0, 0, 1, 1, 1};
    GameState state{};
    state.day = 0;
    for (size_t i = 0; i < types.size(); ++i)
        state.agents.push_back({types[i], config.initialAgentPositions[i], config.fuelLimit});
    Map map(config.map.height, config.map.width, config.map.cells);
    for (int agent = 0; agent < 4; ++agent) {
        auto paths = PathFinder::computeSSSP(map.posToCoordinate(state.agents[agent].pos),
                                             map, config.fuelLimit, 1.0);
        std::cout << "dist agent=" << agent;
        for (size_t spot = 0; spot < config.spots.size(); ++spot) {
            auto path = paths.extractPath(config.spots[spot].pos);
            std::cout << ' ' << spot << ':' << (path.found ? path.totalSteps : -1);
        }
        std::cout << "\n";
    }
    Solver solver;
    auto actions = solver.solve(config, state, map);
    auto day = MoveSimulator::simulateDay(config, state, actions, map);
    std::cout << "valid=" << day.valid << " servings=" << day.collections.size()
              << " refuels=" << day.refuels << "\n";
    for (size_t i = 0; i < actions.size(); ++i) {
        int moves = std::count_if(actions[i].begin(), actions[i].end(),
                                  [](int a) { return a >= 0; });
        int spot = solver.getPlannedStepSpot(static_cast<int>(i), 0);
        std::cout << "agent=" << i << " kind=" << types[i]
                  << " start=" << state.agents[i].pos << " firstSpot=" << spot;
        if (spot >= 0) std::cout << " spotPos=" << config.spots[spot].pos;
        std::cout << " moves=" << moves << " end=" << day.agents[i].pos
                  << " fuel=" << day.agents[i].fuel << " actions=";
        for (int action : actions[i]) std::cout << action << ',';
        std::cout << "\n";
    }

    GameState fullState{};
    for (size_t i = 0; i < selected.size(); ++i)
        fullState.agents.push_back({selected[i], config.initialAgentPositions[i], config.fuelLimit});
    Map fullMap(config.map.height, config.map.width, config.map.cells);
    Solver fullSolver;
    int totalServings = 0;
    for (int dayIndex = 0; dayIndex < static_cast<int>(config.daySteps.size()); ++dayIndex) {
        fullState.day = dayIndex;
        auto fullActions = fullSolver.solve(config, fullState, fullMap);
        auto fullDay = MoveSimulator::simulateDay(config, fullState, fullActions, fullMap);
        int patrolMoves = 0;
        for (size_t i = 0; i < fullActions.size(); ++i)
            if (selected[i] == 0)
                patrolMoves += std::count_if(fullActions[i].begin(), fullActions[i].end(),
                                             [](int action) { return action >= 0; });
        std::cout << "full day=" << dayIndex << " moves=" << patrolMoves
                  << " servings=" << fullDay.collections.size()
                  << " valid=" << fullDay.valid << "\n";
        totalServings += static_cast<int>(fullDay.collections.size());
        fullState.agents = std::move(fullDay.agents);
        fullSolver.commitLastPlan();
    }
    std::cout << "full totalServings=" << totalServings << "\n";
}
