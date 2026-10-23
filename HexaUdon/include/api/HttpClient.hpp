#pragma once

#include <string>
#include <vector>
#include <functional>
#include <charconv>
#include <cstdlib>
#include <stdexcept>
#include <string_view>

namespace api_deadline {
inline constexpr long long requestTimeoutMs = 3000;
inline constexpr long long retryDelayMs = 200;
inline constexpr long long requestIoBudgetMs = 2 * requestTimeoutMs; // send + receive; connection is established at startup
inline constexpr long long retriedPostBudgetMs = 2 * requestIoBudgetMs + retryDelayMs;
inline constexpr long long agentSelectionReserveMs = 10000;
// Total selection window, including submission. Empty/whitespace means 40s.
inline long long agentSelectionWindowMs(const char* value) {
    std::string_view text = value ? value : "";
    const auto first = text.find_first_not_of(" \t\r\n");
    if (first == std::string_view::npos) return 40000;
    text = text.substr(first, text.find_last_not_of(" \t\r\n") - first + 1);
    int seconds = 0;
    const auto parsed = std::from_chars(text.data(), text.data() + text.size(), seconds);
    if (parsed.ec != std::errc{} || parsed.ptr != text.data() + text.size() || seconds < 10)
        throw std::invalid_argument(
            "HEXUDON_AGENT_SELECTION_SECONDS must be an integer >= 10 (empty = 40)");
    return 1000LL * seconds;
}
// ponytail: 10s favors search over worst-case GET + retried POST latency;
// restore the full I/O budget if live logs show missed daily deadlines.
inline constexpr long long dailyAnswerReserveMs = 10000;
}

#ifdef _WIN32
#include <windows.h>
#include <wininet.h>
#pragma comment(lib, "wininet.lib")
#endif

/**
 * @brief Lightweight HTTPS client using Windows WinHTTP.
 * Supports GET/POST/PUT/DELETE with JSON body and custom headers.
 */
struct HttpResponse {
    int statusCode = 0;
    std::string body;
    bool success = false;
    std::string error;
};

class HttpClient {
public:
    HttpClient(const std::string& baseUrl);
    ~HttpClient();

    void setHeader(const std::string& key, const std::string& value);

    HttpResponse get(const std::string& path);
    HttpResponse post(const std::string& path, const std::string& jsonBody);
    HttpResponse put(const std::string& path, const std::string& jsonBody = "");
    HttpResponse del(const std::string& path);

private:
    HttpResponse request(const std::string& method, const std::string& path, const std::string& body = "");

    std::string baseUrl_;
    std::string host_;
    int port_ = 443;
    bool useHttps_ = true;

    std::vector<std::pair<std::string, std::string>> headers_;

#ifdef _WIN32
    HINTERNET hSession_ = NULL;
    HINTERNET hConnect_ = NULL;
#endif
};
