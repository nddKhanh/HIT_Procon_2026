#include "solver/ActionValidator.hpp"
#include "solver/MoveSimulator.hpp"

bool ActionValidator::validate(
    const GameConfig& config,
    const GameState& state,
    const std::vector<std::vector<int>>& actions,
    const Map& map
) {
    return MoveSimulator::simulateDay(config, state, actions, map).valid;
}
