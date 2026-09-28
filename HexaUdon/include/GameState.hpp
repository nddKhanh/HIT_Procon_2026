#pragma once

#include <vector>
#include "model/Agent.hpp"
#include "model/Traffic.hpp"

struct OtherPlayer {
    int id;
    std::vector<Agent> agents;
};

struct GameState {
    long long startsAt = 0;
    long long endsAt = 0;
    int day = 0;
    int currentDay = 0;
    int totalDays = 0;
    bool finished = false;

    std::vector<Agent> agents;
    std::vector<OtherPlayer> others;
    std::vector<Traffic> traffics;
};
