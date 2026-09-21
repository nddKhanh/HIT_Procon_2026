#include "solver/MoveSimulator.hpp"
#include <climits>

DaySimulation MoveSimulator::simulateDay(const GameConfig& config,
    const GameState& state, const std::vector<std::vector<int>>& actions,
    const Map& inputMap, SimulationRules rules) {
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
    for (int i = 0; i < n; ++i) out.fuelAtTime[i][0] = out.agents[i].fuel;
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
    if (rules.collectAtDayStart)
        for (int i = 0; i < n; ++i) collect(i, 0);

    std::vector<size_t> cursor(n, 0);
    std::vector<int> remaining(n, 0), destination(n, -1);
    std::vector<int> departureFuel(n, 0);
    std::vector<bool> beganAction(n, false);
    // ponytail: O(daySteps * agents^2) reference simulation; use events if
    // benchmarks show large day durations make the reference too expensive.
    for (int time = 0; time < steps; ++time) {
        std::fill(departureFuel.begin(), departureFuel.end(), 0);
        std::fill(beganAction.begin(), beganAction.end(), false);
        for (int i = 0; i < n; ++i) {
            if (remaining[i] != 0) continue;
            if (cursor[i] == actions[i].size()) return fail("Plan ends early");
            int act = actions[i][cursor[i]++];
            beganAction[i] = true;
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
                departureFuel[i] = out.agents[i].kind == 0
                    ? map.getFuelCost(pos) : 0;
                remaining[i] = duration;
                destination[i] = map.coordinateToPos(next);
            }
        }
        // Occupancy is at the departure cell for the full movement interval.
        // The official engine refuels a patrol before it departs when a supply
        // is waiting on the same cell. The optional rule also permits a moving
        // supply to refuel, which has not been observed in recorded matches.
        for (int i = 0; i < n; ++i) {
            const auto& agent = out.agents[i];
            if (map.getCell(map.posToCoordinate(agent.pos)) == 1)
                ++out.roadOccupancy[agent.pos];
            if (agent.kind != 0 ||
                (!rules.refuelDuringMovement && destination[i] >= 0 && !beganAction[i]))
                continue;
            for (int j = 0; j < n; ++j) {
                if (out.agents[j].kind == 1 && out.agents[j].pos == agent.pos &&
                    (rules.refuelDuringMovement || destination[j] < 0)) {
                    if (out.agents[i].fuel < config.fuelLimit) {
                        out.agents[i].fuel = config.fuelLimit;
                        ++out.refuels;
                    }
                    break;
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            if (departureFuel[i] > out.agents[i].fuel)
                return fail("Insufficient fuel");
            out.agents[i].fuel -= departureFuel[i];
        }
        for (int i = 0; i < n; ++i) {
            if (--remaining[i] == 0 && destination[i] >= 0) {
                out.agents[i].pos = destination[i];
                collect(i, time + 1);
            }
            out.fuelAtTime[i][time + 1] = out.agents[i].fuel;
        }
    }
    for (int i = 0; i < n; ++i)
        if (cursor[i] != actions[i].size()) return fail("Actions exceed day");
    out.valid = true;
    return out;
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
