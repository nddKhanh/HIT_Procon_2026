#include "api/GameApiClient.hpp"
#include <nlohmann/json.hpp>
#include <iostream>
#include <stdexcept>

using json = nlohmann::json;

GameApiClient::GameApiClient(const std::string& serverUrl, const std::string& apiToken)
    : http_(serverUrl)
{
    http_.setHeader("x-api-token", apiToken);
}

// =============================================================================
// 1. List matches
// =============================================================================
std::vector<MatchInfo> GameApiClient::listMatches() {
    std::vector<MatchInfo> matches;

    auto resp = http_.get("/api/game/matches");
    if (!resp.success) {
        lastError_ = "GET /api/game/matches failed: " + resp.error +
                     " (HTTP " + std::to_string(resp.statusCode) + ")";
        return matches;
    }

    try {
        auto j = json::parse(resp.body);
        // Handle both array and object-with-array responses
        json arr;
        if (j.is_array()) {
            arr = j;
        } else if (j.contains("matches")) {
            arr = j["matches"];
        } else if (j.contains("data")) {
            arr = j["data"];
        } else {
            arr = j; // Try treating the whole thing as the data
        }

        for (const auto& m : arr) {
            MatchInfo info;
            if (m.contains("id")) {
                if (m["id"].is_string()) info.id = m["id"].get<std::string>();
                else info.id = std::to_string(m["id"].get<int>());
            } else if (m.contains("_id")) {
                info.id = m["_id"].get<std::string>();
            }
            if (m.contains("status")) {
                info.status = m["status"].get<std::string>();
            }
            matches.push_back(info);
        }
    } catch (const std::exception& e) {
        lastError_ = std::string("Parse error: ") + e.what() + " body: " + resp.body.substr(0, 200);
    }

    return matches;
}

std::string GameApiClient::getMatchPhase(const std::string& matchId) {
    auto matches = listMatches();
    for (const auto& match : matches) {
        if (match.id == matchId) return match.status;
    }
    if (!matches.empty())
        lastError_ = "Match not found in GET /api/game/matches: " + matchId;
    return {};
}

// =============================================================================
// 2. Get match config
// =============================================================================
GameConfig GameApiClient::getMatchConfig(const std::string& matchId) {
    GameConfig config{};
    lastError_.clear();

    auto resp = http_.get("/api/game/matches/" + matchId + "/config");
    if (!resp.success) {
        lastError_ = "GET config failed: HTTP " + std::to_string(resp.statusCode) +
                     " " + resp.error;
        return config;
    }

    try {
        auto j = json::parse(resp.body);

        config.startsAt = j.value("startsAt", 0LL);
        if (j.contains("daySeconds"))
            config.daySeconds = j["daySeconds"].get<std::vector<int>>();
        if (j.contains("daySteps"))
            config.daySteps = j["daySteps"].get<std::vector<int>>();

        if (j.contains("map")) {
            config.map.height = j["map"]["height"];
            config.map.width = j["map"]["width"];
            config.map.cells = j["map"]["cells"].get<std::vector<std::vector<int>>>();
        }

        if (j.contains("spots")) {
            for (const auto& s : j["spots"]) {
                Spot spot;
                spot.brand = s["brand"];
                spot.pos = s["pos"];
                spot.stocks = s["stocks"];
                config.spots.push_back(spot);
            }
        }

        if (j.contains("agents"))
            config.initialAgentPositions = j["agents"].get<std::vector<int>>();

        config.fuelLimit = j.at(j.contains("fuelLimits") ? "fuelLimits" : "fuelLimit").get<int>();
        config.players = j.at("players").get<int>();
        config.busyThreshold = j.at("busyThreshold").get<int>();
        config.jammedThreshold = j.at("jammedThreshold").get<int>();
        if (config.map.width <= 0 || config.map.height <= 0 ||
            config.map.cells.size() != static_cast<size_t>(config.map.height) ||
            config.daySteps.empty() || config.initialAgentPositions.empty() ||
            config.spots.empty() || config.fuelLimit <= 0 || config.players <= 0 ||
            config.busyThreshold < 0 || config.jammedThreshold <= config.busyThreshold)
            throw std::runtime_error("Invalid map/game configuration");
        for (const auto& row : config.map.cells)
            if (row.size() != static_cast<size_t>(config.map.width))
                throw std::runtime_error("Invalid map row width");
        for (int steps : config.daySteps)
            if (steps <= 0) throw std::runtime_error("Invalid daySteps");
        if (!config.daySeconds.empty() && config.daySeconds.size() != config.daySteps.size())
            throw std::runtime_error("daySeconds/daySteps length mismatch");
        for (int seconds : config.daySeconds)
            if (seconds <= 0) throw std::runtime_error("Invalid daySeconds");
        const auto validPos = [&](int pos) {
            return pos >= 0 && static_cast<long long>(pos) <
                static_cast<long long>(config.map.width) * config.map.height;
        };
        for (int pos : config.initialAgentPositions)
            if (!validPos(pos)) throw std::runtime_error("Invalid agent position");
        for (const auto& spot : config.spots)
            if (!validPos(spot.pos) || spot.brand < 0 || spot.stocks < 0)
                throw std::runtime_error("Invalid spot");
    } catch (const std::exception& e) {
        lastError_ = std::string("Config parse error: ") + e.what();
        return GameConfig{};
    }

    return config;
}

// =============================================================================
// 3. Submit agent types
// =============================================================================
bool GameApiClient::submitAgentTypes(const std::string& matchId, const std::vector<int>& types) {
    json body = types;
    std::string payload = body.dump();

    std::cerr << "[DEBUG] POST /agents payload: " << payload << std::endl;

    auto resp = http_.post("/api/game/matches/" + matchId + "/agents", payload);
    std::cerr << "[DEBUG] POST /agents response (HTTP " << resp.statusCode << "): "
              << resp.body.substr(0, 500) << std::endl;

    if (!resp.success) {
        lastError_ = "POST agents failed: HTTP " + std::to_string(resp.statusCode) +
                     " body: " + resp.body.substr(0, 200);
        return false;
    }
    lastResponse_ = resp.body;
    const auto result = json::parse(resp.body, nullptr, false);
    if (!result.is_object() || !result.contains("valid") ||
        !result["valid"].is_boolean() || !result["valid"].get<bool>()) {
        lastError_ = "POST agents: missing or rejected valid=true acknowledgement";
        return false;
    }
    lastError_.clear();
    return true;
}

// =============================================================================
// 4. Get daily match status
// =============================================================================
GameState GameApiClient::getMatchStatus(const std::string& matchId) {
    GameState state;
    state.day = -1; // Sentinel: indicates error if not overwritten

    auto resp = http_.get("/api/game/matches/" + matchId + "/status");
    if (!resp.success) {
        lastError_ = "GET status failed: HTTP " + std::to_string(resp.statusCode) +
                     " " + resp.error;
        return state;
    }

    try {
        auto j = json::parse(resp.body);

        state.startsAt = j.value("startsAt", 0LL);
        state.endsAt = j.value("endsAt", 0LL);
        state.day = j.value("day", -1);
        state.currentDay = j.value("currentDay", state.day);
        state.totalDays = j.value("totalDays", 0);
        state.finished = j.value("finished", false);

        // Debug: log raw fields
        // std::cerr << "[DEBUG] GET /status: day=" << state.day
        //           << " currentDay=" << j.value("currentDay", -1)
        //           << " totalDays=" << j.value("totalDays", -1)
        //           << " finished=" << j.value("finished", false)
        //           << " endsAt=" << state.endsAt
        //           << std::endl;

        if (j.contains("agents")) {
            for (const auto& a : j["agents"]) {
                Agent agent;
                agent.kind = a["kind"];
                agent.pos = a["pos"];
                agent.fuel = a["fuel"];
                state.agents.push_back(agent);
            }
        }

        if (j.contains("others")) {
            for (const auto& p : j["others"]) {
                OtherPlayer player;
                player.id = p.value("id", 0);
                if (p.contains("agents")) {
                    for (const auto& a : p["agents"]) {
                        Agent agent;
                        agent.kind = a["kind"];
                        agent.pos = a["pos"];
                        agent.fuel = a["fuel"];
                        player.agents.push_back(agent);
                    }
                }
                state.others.push_back(player);
            }
        }

        if (j.contains("traffics")) {
            for (const auto& t : j["traffics"]) {
                Traffic traffic;
                traffic.pos = t["pos"];
                traffic.status = t["status"];
                state.traffics.push_back(traffic);
            }
        }
    } catch (const std::exception& e) {
        lastError_ = std::string("Status parse error: ") + e.what();
        state.day = -1;
    }

    return state;
}

// =============================================================================
// 5. Submit actions
// =============================================================================
bool GameApiClient::submitActions(const std::string& matchId, const std::vector<std::vector<int>>& actions) {
    submissionRetryable_ = false;
    lastError_.clear();
    json body = actions;
    std::string payload = body.dump();

    std::cerr << "[DEBUG] POST /answer payload (" << payload.size() << " bytes): "
              << payload.substr(0, 500) << std::endl;

    auto resp = http_.post("/api/game/matches/" + matchId + "/answer", payload);
    std::cerr << "[DEBUG] POST /answer response (HTTP " << resp.statusCode << "): "
              << resp.body.substr(0, 500) << std::endl;

    if (!resp.success) {
        // Unknown transport outcome may already have been accepted. Do not
        // blindly retry; only explicit transient HTTP failures are retryable.
        submissionRetryable_ = resp.statusCode == 429 || resp.statusCode == 502 ||
            resp.statusCode == 503 || resp.statusCode == 504;
        lastError_ = "POST answer failed: HTTP " + std::to_string(resp.statusCode) +
                     " body: " + resp.body.substr(0, 500);
        return false;
    }

    lastResponse_ = resp.body;
    const auto result = json::parse(resp.body, nullptr, false);
    if (!result.is_object() || !result.contains("valid") || !result["valid"].is_boolean()) {
        lastError_ = "POST answer: invalid acknowledgement; acceptance unknown, no automatic retry";
        return false;
    }
    if (!result["valid"].get<bool>()) {
        lastError_ = "Server REJECTED answer: " + result.dump().substr(0, 500);
        return false;
    }
    return true;
}
