#define main benchmark_main
#include "../tests/benchmark.cpp"
#undef main
int main(int argc, char** argv) {
    nlohmann::json j; std::ifstream input(argv[1]); input >> j;
    auto config = readConfig(j);
    GameState state{};
    for (size_t i = 0; i < config.initialAgentPositions.size(); ++i)
        state.agents.push_back({i + 1 == config.initialAgentPositions.size() ? 1 : 0, config.initialAgentPositions[i], config.fuelLimit});
    Map map(config.map.height, config.map.width, config.map.cells);
    Solver solver(argc < 3 || std::string(argv[2]) != "off");
    MatchScore score;
    for (size_t day = 0; day < config.daySteps.size(); ++day) {
        state.day = static_cast<int>(day);
        auto start = std::chrono::steady_clock::now();
        auto actions = solver.solve(config, state, map);
        auto result = MoveSimulator::simulateDay(config, state, actions, map);
        if (!result.valid) { std::cerr << result.error; return 2; }
        score.add(result);
        std::cout << "day=" << day << " daily=" << result.brands.size() << " serving=" << result.collections.size()
            << " ms=" << std::chrono::duration<double,std::milli>(std::chrono::steady_clock::now()-start).count() << std::endl;
        state.agents = result.agents;
        solver.commitLastPlan();
    }
    std::cout << "score=" << score.brands.size() << '/' << score.dailyTypes << '/' << score.servings << std::endl;
}
