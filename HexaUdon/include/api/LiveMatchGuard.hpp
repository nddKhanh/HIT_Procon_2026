#pragma once

#include <string>
#include "GameState.hpp"

namespace LiveMatchGuard {

inline bool hasStarted(const GameState& state, long long nowMs) {
    return state.startsAt > 0 && nowMs >= state.startsAt * 1000LL;
}

inline bool isRunningPhase(const std::string& phase) {
    return phase == "running" || phase == "started";
}

inline bool canPlan(const std::string& phase, const GameState& state,
                    int configDays, long long nowMs,
                    long long safetyMarginMs = 1000) {
    return isRunningPhase(phase) && !state.finished && hasStarted(state, nowMs) &&
           state.day >= 0 && state.day < configDays &&
           (state.totalDays <= 0 || state.totalDays == configDays) &&
           !state.agents.empty() && state.endsAt > 0 &&
           nowMs < state.endsAt * 1000LL - safetyMarginMs;
}

inline bool canSubmit(const std::string& phase,
                      const GameState& plannedFrom,
                      const GameState& latest,
                      int configDays, long long nowMs,
                      long long safetyMarginMs = 500) {
    return canPlan(phase, latest, configDays, nowMs, safetyMarginMs) &&
           latest.startsAt == plannedFrom.startsAt &&
           latest.day == plannedFrom.day &&
           latest.endsAt == plannedFrom.endsAt;
}

} // namespace LiveMatchGuard
