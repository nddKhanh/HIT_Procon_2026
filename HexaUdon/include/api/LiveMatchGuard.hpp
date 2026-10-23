#pragma once

#include <vector>
#include "GameState.hpp"
#include "api/HttpClient.hpp"

namespace live_match {

inline bool hasSelectedFleet(const GameState& state, const std::vector<int>& types) {
    if (state.agents.size() != types.size()) return false;
    for (size_t i = 0; i < types.size(); ++i)
        if (state.agents[i].kind != types[i]) return false;
    return true;
}

inline bool hasLiveStatus(const GameState& state, int configDays) {
    return !state.finished && state.day >= 0 && state.day < configDays &&
        (state.totalDays <= 0 || state.totalDays == configDays) &&
        !state.agents.empty() && state.endsAt > 0;
}

inline bool canSubmitSnapshot(const GameState& planned, const GameState& latest,
                              int configDays, long long nowMs) {
    // ponytail: the API does not bind POST /answer to a day. This closes the
    // observable race; only a day-bound endpoint can close the final GET/POST gap.
    constexpr long long submissionBudgetMs = 3 * api_deadline::requestTimeoutMs + 250;
    return hasLiveStatus(latest, configDays) &&
        latest.startsAt == planned.startsAt && latest.day == planned.day &&
        latest.endsAt == planned.endsAt &&
        latest.endsAt * 1000LL - nowMs > submissionBudgetMs;
}

} // namespace live_match
