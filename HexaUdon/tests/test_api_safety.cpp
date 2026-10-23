#include "api/GameApiClient.hpp"
#include <nlohmann/json.hpp>
#include <cassert>
#include <fstream>
#include <iostream>
using nlohmann::json;
static HttpResponse nextResponse;
HttpClient::HttpClient(const std::string&) {}
HttpClient::~HttpClient() {}
void HttpClient::setHeader(const std::string&, const std::string&) {}
HttpResponse HttpClient::get(const std::string&) { return nextResponse; }
HttpResponse HttpClient::post(const std::string&, const std::string&) { return nextResponse; }
int main() {
    GameApiClient api("http://mock", "test-only");
    const auto reply = [](std::string body, int status=200) {
        nextResponse = {status, body, status >= 200 && status < 300, ""};
    };
    for (auto body : {"", "oops", "{}", "[]", "{\"valid\":1}", "{\"valid\":false}"}) {
        reply(body);
        assert(!api.submitActions("test", {{6}}));
        assert(!api.submissionRetryable());
        assert(!api.submitAgentTypes("test", {0}));
    }
    reply("{\"valid\":true,\"revision\":2}");
    assert(api.submitActions("test", {{6}}));
    assert(api.submitAgentTypes("test", {0}));
    for (int status : {429, 502, 503, 504}) {
        reply("unavailable", status);
        assert(!api.submitActions("test", {{6}}));
        assert(api.submissionRetryable());
    }
    for (int status : {0, 400, 403, 422}) {
        reply("rejected", status);
        assert(!api.submitActions("test", {{6}}));
        assert(!api.submissionRetryable());
    }
    std::ifstream input("tests/match_fa3b2b52_config.json");
    json fixture; input >> fixture;
    reply(fixture.dump()); assert(!api.getMatchConfig("test").daySteps.empty());
    for (auto field : {"map", "agents", "spots", "daySteps", "players", "busyThreshold", "jammedThreshold"}) {
        auto invalid = fixture; invalid.erase(field);
        reply(invalid.dump()); assert(api.getMatchConfig("test").daySteps.empty());
    }
    auto alias = fixture;
    const auto fuel = fixture.contains("fuelLimits") ? fixture["fuelLimits"] : fixture["fuelLimit"];
    alias.erase("fuelLimits"); alias["fuelLimit"] = fuel;
    reply(alias.dump()); assert(!api.getMatchConfig("test").daySteps.empty());
    alias.erase("fuelLimit");
    reply(alias.dump()); assert(api.getMatchConfig("test").daySteps.empty());
    auto invalid = fixture; invalid["map"]["cells"][0] = json::array();
    reply(invalid.dump()); assert(api.getMatchConfig("test").daySteps.empty());
    invalid = fixture; invalid["agents"][0] = -1;
    reply(invalid.dump()); assert(api.getMatchConfig("test").daySteps.empty());
    std::cout << "[PASS] Strict acknowledgements, retry classification, required config, aliases and bounds\n";
}
