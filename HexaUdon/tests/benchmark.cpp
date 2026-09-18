#include "solver/Solver.hpp"
#include "solver/MoveSimulator.hpp"
#include <algorithm>
#include <chrono>
#include <fstream>
#include <iostream>
#include <random>
#include <sstream>

// Deterministic synthetic baseline, no server calls. All terrain is connected.
int main() {
    std::cout << "seed,types,daily_types,servings,refuels,invalid,solve_ms\n";
    std::vector<double> timings;
    int invalidTotal = 0;
    int wins = 0, losses = 0, ties = 0;
    std::ifstream baseline("HexaUdon/tests/baseline_scores.csv");
    std::string baselineLine;
    std::getline(baseline, baselineLine);
    for (unsigned seed = 0; seed < 30; ++seed) {
        std::mt19937 rng(seed);
        GameConfig config{};
        config.map.height = config.map.width = 8 + seed % 3 * 4;
        int cells = config.map.height * config.map.width;
        config.map.cells.assign(config.map.height, std::vector<int>(config.map.width));
        for (auto& row : config.map.cells)
            for (auto& terrain : row) terrain = rng() % 5 < 3 ? 0 : 1 + rng() % 2;
        config.daySteps = {20, 30, 40, 50};
        config.daySeconds = {5, 5, 5, 5};
        config.fuelLimit = 8 + seed % 4 * 6;
        config.players = 1;
        config.busyThreshold = 4;
        config.jammedThreshold = 8;
        std::set<int> used;
        auto freeCell = [&]() {
            int pos;
            do { pos = rng() % cells; } while (!used.insert(pos).second);
            config.map.cells[pos / config.map.width][pos % config.map.width] = 0;
            return pos;
        };
        int agents = 3 + seed % 4;
        for (int i = 0; i < agents; ++i) config.initialAgentPositions.push_back(freeCell());
        for (int i = 0; i < 8; ++i)
            config.spots.push_back({i % 4, freeCell(), 1 + static_cast<int>(rng() % agents)});
        Map map(config.map.height, config.map.width, config.map.cells);
        Solver solver;
        auto types = solver.decideAgentTypes(config);
        GameState state{};
        for (int i = 0; i < agents; ++i)
            state.agents.push_back({types[i], config.initialAgentPositions[i], config.fuelLimit});
        MatchScore score;
        int refuels = 0, invalid = 0;
        double totalMs = 0;
        std::vector<long long> previous(cells, 0), beforePrevious(cells, 0);
        for (int day = 0; day < 4; ++day) {
            state.day = day;
            state.traffics.clear();
            for (int pos = 0; pos < cells; ++pos) {
                if (map.getCell(map.posToCoordinate(pos)) != 1) continue;
                auto occupancy = previous[pos] + beforePrevious[pos];
                state.traffics.push_back({pos, occupancy >= config.jammedThreshold ? 2 :
                    occupancy >= config.busyThreshold ? 1 : 0});
            }
            auto start = std::chrono::steady_clock::now();
            auto actions = solver.solve(config, state, map);
            double ms = std::chrono::duration<double, std::milli>(
                std::chrono::steady_clock::now() - start).count();
            timings.push_back(ms);
            totalMs += ms;
            auto result = MoveSimulator::simulateDay(config, state, actions, map);
            if (!result.valid) {
                ++invalid;
                solver.discardLastPlan();
                result = MoveSimulator::simulateDay(config, state,
                    solver.createFallbackActions(config, state), map);
                if (!result.valid) { std::cerr << result.error << '\n'; return 2; }
            } else solver.commitLastPlan();
            score.add(result);
            refuels += result.refuels;
            state.agents = result.agents;
            beforePrevious = previous;
            previous = result.roadOccupancy;
        }
        invalidTotal += invalid;
        if (std::getline(baseline, baselineLine)) {
            std::stringstream row(baselineLine);
            std::string field;
            std::vector<int> values;
            while (std::getline(row, field, ',')) values.push_back(std::stoi(field));
            auto oldRank = std::make_tuple(values[1], values[2], values[3]);
            int comparison = score.rank() > oldRank ? 1 : score.rank() < oldRank ? -1 : 0;
            wins += comparison > 0;
            losses += comparison < 0;
            ties += comparison == 0;
        }
        std::cout << seed << ',' << score.brands.size() << ',' << score.dailyTypes << ','
            << score.servings << ',' << refuels << ',' << invalid << ',' << totalMs << '\n';
    }
    std::sort(timings.begin(), timings.end());
    std::cerr << "120 days: median_ms=" << timings[timings.size()/2]
        << " p95_ms=" << timings[timings.size()*95/100]
        << " max_ms=" << timings.back() << " invalid=" << invalidTotal
        << " baseline=" << wins << "W/" << losses << "L/" << ties << "T\n";
    return invalidTotal ? 1 : 0;
}
