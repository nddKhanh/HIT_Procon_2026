#pragma once

#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>
#include "solver/Solver.hpp"
#ifdef _WIN32
#include <windows.h>
#endif

// One running bot per match/token/work directory. This is a local checkpoint,
// not a replacement for server history or protection against external submissions.
namespace runtime_state {
using nlohmann::json;

inline json agents(const std::vector<Agent>& values) {
    json result = json::array();
    for (const auto& agent : values)
        result.push_back({agent.kind, agent.pos, agent.fuel});
    return result;
}

inline void save(const std::filesystem::path& path, const json& scope,
                 const Solver& solver, int day, long long endsAt,
                 const std::vector<Agent>& before, const std::vector<Agent>& after) {
    std::filesystem::create_directories(path.parent_path());
    auto temporary = path;
    temporary += ".tmp";
    const json data = {{"version", 1}, {"scope", scope}, {"day", day},
        {"endsAt", endsAt}, {"brands", solver.confirmedBrands()},
        {"useRegions", solver.usesRegions()}, {"before", agents(before)},
        {"after", agents(after)}};
    std::ofstream output(temporary, std::ios::binary | std::ios::trunc);
    output << data.dump();
    output.close();
    if (!output) throw std::runtime_error("Cannot write checkpoint");
#ifdef _WIN32
    if (!MoveFileExW(temporary.c_str(), path.c_str(),
                     MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
        throw std::runtime_error("Cannot replace checkpoint: " + std::to_string(GetLastError()));
#else
    std::filesystem::rename(temporary, path);
#endif
}

// Returns the last accepted day; same-day recovery skips resubmission.
// Reject mismatched snapshots instead of inventing missing match history.
inline int restore(const std::filesystem::path& path, const json& scope,
                   const GameState& state, Solver& solver) {
    std::ifstream input(path);
    if (!input) throw std::runtime_error("Checkpoint is unavailable");
    json data;
    input >> data;
    if (data.at("version") != 1 || data.at("scope") != scope)
        throw std::runtime_error("Checkpoint belongs to another match configuration");
    const int day = data.at("day").get<int>();
    const auto brands = data.at("brands").get<std::set<int>>();
    const bool regions = data.at("useRegions").get<bool>();
    const auto current = agents(state.agents);
    if (day == -1) {
        if (!brands.empty() || state.day > 0 || state.agents.empty())
            throw std::runtime_error("Selection checkpoint has no completed-day history");
        if (current != data.at("before"))
            throw std::runtime_error("Selected fleet differs from server snapshot");
    } else if (day < 0 ||
               (state.day != day && state.day != day + 1) ||
               (state.day == day && (state.endsAt != data.at("endsAt").get<long long>() ||
                                    current != data.at("before"))) ||
               (state.day == day + 1 && current != data.at("after"))) {
        throw std::runtime_error("Checkpoint does not match server day/agents; history is incomplete");
    }
    solver.restoreConfirmedState(brands, regions);
    return day;
}
} // namespace runtime_state
