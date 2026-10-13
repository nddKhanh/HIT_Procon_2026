#define main all_tests_main
#include "../tests/test_all.cpp"
#undef main
int main() { test_adaptive_fleet_repair(); test_many_player_daily_coverage_regression(); }
