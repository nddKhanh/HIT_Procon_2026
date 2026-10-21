// Standalone white-box regression: compile instead of Solver.cpp, not with it.
#include "../src/solver/Solver.cpp"

int main() {
    GameConfig config{};
    config.map = {1, 5, {{0, 0, 0, 0, 0}}};
    config.daySteps = {5};
    config.fuelLimit = 10;
    config.initialAgentPositions = {0, 4};
    config.spots = {{0, 2, 1}, {1, 1, 1}, {2, 3, 1}};
    GameState state{};
    state.agents = {{0, 0, 10}, {0, 4, 10}};
    Map map(1, 5, config.map.cells);
    PathCache cache(map);
    for (bool official : {false, true}) {
        auto assignment = assignFirstSpots(config, state, map, {0, 1}, 5,
            {1, 1, 1}, std::vector<std::set<int>>(2), cache,
            std::vector<std::set<int>>(2), {}, {}, official, true, true);
        if (assignment != std::vector<int>({1, 2})) {
            std::cerr << "First assignment lost its cheapest distinct targets: "
                      << formatTypes(assignment) << " official=" << official << '\n';
            return 1;
        }
    }
    std::cout << "First assignment traceback regression passed\n";
}
