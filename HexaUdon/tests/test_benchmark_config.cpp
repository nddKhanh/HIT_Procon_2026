#define main benchmark_main
#include "benchmark.cpp"
#undef main
#include <cassert>
int main() {
    nlohmann::json input = {{"map", {{"width",1},{"height",1},{"cells",{{0}}}}},
        {"daySteps",{1,2}}, {"daySeconds",{40,20}}, {"agents",{0}},
        {"fuelLimits",10}, {"players",4}, {"busyThreshold",5},
        {"jammedThreshold",10}, {"spots",nlohmann::json::array()}};
    auto config=readConfig(input);
    assert(config.daySeconds == std::vector<int>({40,20}));
    assert(MapStrategy::select(config).solveBudgetMs(config,0)==37000);
    input.erase("daySeconds");
    assert(readConfig(input).daySeconds.empty());
    std::cout << "[PASS] Benchmark preserves server day durations and optional fallback\n";
}
