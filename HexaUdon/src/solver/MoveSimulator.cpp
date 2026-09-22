#include "solver/MoveSimulator.hpp"
#include <climits>
#include <stdexcept>

DaySimulation MoveSimulator::simulateDay(const GameConfig& config,
    const GameState& state, const std::vector<std::vector<int>>& actions,
    const Map& inputMap) {
    DaySimulation out;
    auto fail = [&](const std::string& error) {
        out.error = error;
        return out;
    };
    if (state.day < 0 || state.day >= static_cast<int>(config.daySteps.size()))
        return fail("Invalid day");
    const int steps = config.getDaySteps(state.day);
    const int n = static_cast<int>(state.agents.size());
    if (steps < 0 || actions.size() != state.agents.size() || config.fuelLimit < 0)
        return fail("Invalid duration, agent count or fuel limit");
    Map map = inputMap;
    map.updateTraffic(state.traffics);
    const int cells = map.getHeight() * map.getWidth();
    if (cells <= 0) return fail("Empty map");
    out.agents = state.agents;
    out.fuelAtTime.assign(n, std::vector<int>(steps + 1));
    out.positionsAtTime.assign(n, std::vector<int>(steps + 1));
    for (int i = 0; i < n; ++i) {
        out.fuelAtTime[i][0] = out.agents[i].fuel;
        out.positionsAtTime[i][0] = out.agents[i].pos;
    }
    out.roadOccupancy.assign(cells, 0);
    std::vector<int> spotAt(cells, -1);
    for (size_t s = 0; s < config.spots.size(); ++s) {
        const auto& spot = config.spots[s];
        if (spot.pos < 0 || spot.pos >= cells || spot.stocks < 0 ||
            spotAt[spot.pos] >= 0 || map.getCell(map.posToCoordinate(spot.pos)) != 0)
            return fail("Invalid spot");
        spotAt[spot.pos] = static_cast<int>(s);
        out.remainingStock.push_back(spot.stocks);
    }
    for (const auto& agent : out.agents) {
        if (agent.pos < 0 || agent.pos >= cells ||
            !map.canMove(map.posToCoordinate(agent.pos)) ||
            (agent.kind != 0 && agent.kind != 1) ||
            (agent.kind == 0 && (agent.fuel < 0 || agent.fuel > config.fuelLimit)))
            return fail("Invalid initial agent");
    }
    std::vector<std::set<int>> visited(n);
    auto collect = [&](int i, int time) {
        int s = spotAt[out.agents[i].pos];
        if (out.agents[i].kind != 0 || s < 0 || !visited[i].insert(s).second ||
            out.remainingStock[s] == 0) return;
        --out.remainingStock[s];
        int brand = config.spots[s].brand;
        out.brands.insert(brand);
        out.collections.push_back({time, i, s, brand});
    };
    for (int i = 0; i < n; ++i) collect(i, 0);

    std::vector<size_t> cursor(n, 0);
    std::vector<int> remaining(n, 0), destination(n, -1);
    std::vector<int> arrivalFuel(n, 0);
    // ponytail: O(daySteps * agents^2) reference simulation; use events if
    // benchmarks show large day durations make the reference too expensive.
    for (int time = 0; time < steps; ++time) {
        for (int i = 0; i < n; ++i) {
            if (remaining[i] != 0) continue;
            if (cursor[i] == actions[i].size()) return fail("Plan ends early");
            int act = actions[i][cursor[i]++];
            destination[i] = -1;
            if (act < 0) {
                if (act == INT_MIN || -act > steps - time)
                    return fail("Wait exceeds day");
                remaining[i] = -act;
            } else {
                if (act > 5) return fail("Invalid direction");
                auto pos = map.posToCoordinate(out.agents[i].pos);
                auto next = map.nextPosition(pos, act);
                if (!map.canMove(next)) return fail("Invalid destination");
                int duration = map.getTravelTime(pos);
                if (duration > steps - time) return fail("Insufficient time");
                arrivalFuel[i] = out.agents[i].kind == 0
                    ? map.getFuelCost(pos) : 0;
                // Do not finance an otherwise invalid departure with a future refill.
                if (arrivalFuel[i] > out.agents[i].fuel)
                    return fail("Insufficient fuel");
                remaining[i] = duration;
                destination[i] = map.coordinateToPos(next);
            }
        }
        // All arrivals complete before any same-cell refueling. This ordering,
        // including moving vehicles and the last step, matches server replay.
        for (int i = 0; i < n; ++i) {
            if (--remaining[i] == 0 && destination[i] >= 0) {
                out.agents[i].fuel -= arrivalFuel[i];
                out.agents[i].pos = destination[i];
                collect(i, time + 1);
            }
        }
        for (int i = 0; i < n; ++i) {
            const auto& agent = out.agents[i];
            if (map.getCell(map.posToCoordinate(agent.pos)) == 1)
                ++out.roadOccupancy[agent.pos];
            if (agent.kind != 0) continue;
            for (int j = 0; j < n; ++j) {
                if (out.agents[j].kind == 1 && out.agents[j].pos == agent.pos) {
                    if (out.agents[i].fuel < config.fuelLimit) {
                        out.agents[i].fuel = config.fuelLimit;
                        ++out.refuels;
                    }
                    break;
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            out.fuelAtTime[i][time + 1] = out.agents[i].fuel;
            out.positionsAtTime[i][time + 1] = out.agents[i].pos;
        }
    }
    for (int i = 0; i < n; ++i)
        if (cursor[i] != actions[i].size()) return fail("Actions exceed day");
    out.valid = true;
    return out;
}

std::vector<Traffic> MoveSimulator::nextTraffic(const GameConfig& config,
    const std::vector<long long>& previousDay,
    const std::vector<long long>& currentDay) {
    const auto& grid = config.map;
    if (grid.height <= 0 || grid.width <= 0 ||
        grid.cells.size() != static_cast<size_t>(grid.height) ||
        config.players <= 0 || config.busyThreshold < 0 ||
        config.jammedThreshold < config.busyThreshold)
        throw std::invalid_argument("Invalid traffic configuration");
    const size_t cells = static_cast<size_t>(grid.height) * grid.width;
    if (currentDay.size() != cells || (!previousDay.empty() && previousDay.size() != cells))
        throw std::invalid_argument("Invalid traffic occupancy size");
    std::vector<Traffic> traffic;
    for (int y = 0; y < grid.height; ++y) {
        if (grid.cells[y].size() != static_cast<size_t>(grid.width))
            throw std::invalid_argument("Invalid traffic map row");
        for (int x = 0; x < grid.width; ++x) {
            const size_t p = static_cast<size_t>(y) * grid.width + x;
            const long long previous = previousDay.empty() ? 0 : previousDay[p];
            if (previous < 0 || currentDay[p] < 0 || previous > LLONG_MAX - currentDay[p])
                throw std::invalid_argument("Invalid traffic occupancy count");
            if (grid.cells[y][x] != 1) continue;
            const long long total = previous + currentDay[p];
            int status = total >= 1LL * config.players * config.jammedThreshold ? 2
                : total >= 1LL * config.players * config.busyThreshold ? 1 : 0;
            if (status) traffic.push_back({static_cast<int>(p), status});
        }
    }
    return traffic;
}

// =============================================================================
// Mô phỏng di chuyển: biến path directions -> actions + trạng thái cuối
// =============================================================================

SimResult MoveSimulator::simulate(
    const std::vector<int>& pathDirs,
    const Map& map,
    Position startPos,
    int maxSteps,
    int availableFuel,
    bool isPatrol
) {
    SimResult result;
    result.finalPos = startPos;
    result.stepsUsed = 0;
    result.fuelUsed = 0;

    Position currentPos = startPos;
    int fuelRemaining = availableFuel;

    for (int dir : pathDirs) {
        int travelTime = map.getTravelTime(currentPos);
        int fuelCost = isPatrol ? map.getFuelCost(currentPos) : 0;

        // Kiểm tra giới hạn bước
        if (result.stepsUsed + travelTime > maxSteps) break;

        // Kiểm tra giới hạn xăng (chỉ xe Patrol)
        if (isPatrol && fuelRemaining < fuelCost) break;

        // Thực hiện di chuyển
        result.actions.push_back(dir);
        result.stepsUsed += travelTime;
        result.fuelUsed += fuelCost;
        fuelRemaining -= fuelCost;
        currentPos = map.nextPosition(currentPos, dir);
    }

    result.finalPos = currentPos;
    return result;
}

// =============================================================================
// Thêm hành động "Chờ" cho đủ daySteps
// =============================================================================

void MoveSimulator::padWithWait(
    std::vector<int>& actions,
    int stepsUsed,
    int daySteps
) {
    int remaining = daySteps - stepsUsed;
    if (remaining > 0) {
        actions.push_back(-remaining);
    }
}
