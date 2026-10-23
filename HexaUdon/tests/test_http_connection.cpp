#include "api/GameApiClient.hpp"
#include <iostream>
#include <cstdlib>
int main(int argc, char** argv) {
    if (argc > 1) {
        HttpClient http(argv[1]);
        auto response = http.get("/");
        std::cout << "HTTP " << response.statusCode << " " << response.error << "\n";
        return response.success ? 0 : 1;
    }
    const char *url = std::getenv("API_BASE_URL"), *token = std::getenv("API_TOKEN"),
        *match = std::getenv("MATCH_ID");
    if (!token) token = std::getenv("TEAM_TOKEN");
    if (!url || !token || !match) return 2;
    GameApiClient api(url, token);
    auto config = api.getMatchConfig(match);
    if (config.daySteps.empty()) {
        std::cout << "Config failed: " << api.getLastError() << "\n";
        return 1;
    }
    std::cout << "[PASS] Verified TLS and config: " << config.map.width << "x" << config.map.height
        << ", " << config.daySteps.size() << " days\n";
    auto state = api.getMatchStatus(match);
    if (state.day < 0) { std::cout << "Status GET failed\n"; return 1; }
    std::cout << "[PASS] Read-only status GET\n";
}
