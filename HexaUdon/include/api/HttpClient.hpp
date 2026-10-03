#pragma once

#include <string>
#include <vector>
#include <functional>

namespace api_deadline {
inline constexpr long long requestTimeoutMs = 3000;
inline constexpr long long retryDelayMs = 200;
inline constexpr long long requestIoBudgetMs = 2 * requestTimeoutMs; // send + receive; connection is established at startup
inline constexpr long long retriedPostBudgetMs = 2 * requestIoBudgetMs + retryDelayMs;
inline constexpr long long agentSelectionReserveMs = retriedPostBudgetMs;
inline constexpr long long dailyAnswerReserveMs = requestIoBudgetMs + retriedPostBudgetMs;
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
