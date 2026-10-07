#include <iostream>
#include <string>
#include <chrono>
#ifdef _WIN32
#include <windows.h>
#endif

#include "io/JsonReader.hpp"
#include "io/JsonWriter.hpp"
#include "io/DiaryWriter.hpp"
#include "map/Map.hpp"
#include "solver/Solver.hpp"
#include "solver/ActionValidator.hpp"
#include "api/GameApiClient.hpp"
#include "api/LiveMatchGuard.hpp"

namespace {
constexpr long long kLargeFormationSimulationMs = 30'000;

long long currentEpochMs() {
    return std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::system_clock::now().time_since_epoch()).count();
}

}

// =============================================================================
// MODE 1: API mode — Connect to Procon server via HTTPS REST API
// =============================================================================
int runApiMode(const std::string& serverUrl, const std::string& token,
               const std::string& matchId, bool freshRun) {
#ifdef _WIN32
    SetConsoleOutputCP(65001);
#endif

    std::cout << "========================================================================\n";
    std::cout << "  HEXAUDON BOT v2.0 — CHE DO THI DAU (API MODE)\n";
    std::cout << "========================================================================\n";
    std::cout << "  Server : " << serverUrl << "\n";
    std::cout << "  Match  : " << matchId << "\n";
    std::cout << "  Local  : " << (freshRun ? "FRESH (bo qua lich su local)" : "RESUME") << "\n";
    std::cout << "========================================================================\n\n";

    GameApiClient api(serverUrl, token);

    // --- Step 1: Get match config ---
    std::cout << "[1/4] Dang lay cau hinh tran dau (GET /config)...\n";
    GameConfig config = api.getMatchConfig(matchId);
    if (config.daySteps.empty()) {
        std::cerr << "[LOI] Khong lay duoc config: " << api.getLastError() << "\n";
        return 1;
    }
    std::cout << "  -> Ban do: " << config.map.width << "x" << config.map.height << "\n";
    std::cout << "  -> So xe: " << config.initialAgentPositions.size() << "\n";
    std::cout << "  -> So spot: " << config.spots.size() << "\n";
    std::cout << "  -> So ngay: " << config.daySteps.size() << "\n";
    std::cout << "  -> Fuel limit: " << config.fuelLimit << "\n\n";

    Map map(config.map.height, config.map.width, config.map.cells);
    Solver solver;
    int totalDays = static_cast<int>(config.daySteps.size());

    GameState selectionState = api.getMatchStatus(matchId);
    if (selectionState.day < 0) {
        std::cerr << "[LOI] Khong doc duoc status truoc khi chon xe: "
                  << api.getLastError() << "\n";
        return 1;
    }
    if (selectionState.totalDays > 0 && selectionState.totalDays != totalDays) {
        std::cerr << "[LOI] So ngay khong khop: config=" << totalDays
                  << ", status=" << selectionState.totalDays << "\n";
        return 1;
    }
    std::cout << "  -> Server status totalDays: "
              << (selectionState.totalDays > 0 ? selectionState.totalDays : totalDays)
              << "\n\n";
    if (selectionState.finished || selectionState.day >= totalDays) {
        std::cout << "[4/4] Tran dau da ket thuc du " << totalDays << " ngay.\n";
        return 0;
    }
    // --- Step 2: Submit agent types ---
    std::vector<int> agentTypes;
    if (LiveMatchGuard::hasLiveStatus(selectionState, totalDays)) {
        std::cout << "[2/4] Tran da Start: dung doi hinh server, vao vong dau ngay.\n";
        for (const auto& agent : selectionState.agents) agentTypes.push_back(agent.kind);
    } else {
        std::cout << "[2/4] CHUAN BI TRUOC START: mo phong het cac truong hop;"
                  << " gioi han 30 giay neu khong gian tim kiem lon"
                  << " (chua gui action)...\n";
        agentTypes = solver.decideAgentTypes(config, kLargeFormationSimulationMs);
    }
    std::cout << "  -> Loai xe: [";
    for (size_t i = 0; i < agentTypes.size(); ++i) {
        std::cout << agentTypes[i];
        if (i + 1 < agentTypes.size()) std::cout << ", ";
    }
    std::cout << "]\n";

    // Formation simulation may take long enough for the admin to Start.
    // Re-read status so a late POST /agents is never attempted after Start.
    selectionState = api.getMatchStatus(matchId);
    if (selectionState.day < 0) {
        std::cerr << "[LOI] Khong doc duoc status sau khi tinh doi hinh: "
                  << api.getLastError() << "\n";
        return 1;
    }
    if (selectionState.finished || selectionState.day >= totalDays) {
        std::cout << "  -> Tran dau da ket thuc trong luc tinh doi hinh.\n";
        return 0;
    }
    if (LiveMatchGuard::hasLiveStatus(selectionState, totalDays)) {
        std::cout << "  -> Tran da Start trong luc tinh; bo qua POST /agents.\n";
    } else if (!api.submitAgentTypes(matchId, agentTypes)) {
        std::cerr << "[LOI] Khong gui duoc agent types: " << api.getLastError() << "\n";
        // Not fatal — might already be submitted
        std::cout << "  -> Canh bao: Co the da gui truoc do, tiep tuc...\n";
    } else {
        std::cout << "  -> Da gui thanh cong!\n";
    }
    std::cout << "\n";

    // --- Step 3: Main loop — poll status and submit actions for each day ---
    std::cout << "[3/4] Bat dau vong lap thi dau...\n";
    std::cout << "  (Dang cho admin Start match...)\n\n";

    const std::string diaryRoot = freshRun ? "diary_fresh" : "diary";
    int lastDay = freshRun ? -1 :
        DiaryWriter::findLastWrittenDay(diaryRoot, matchId, totalDays);
    if (freshRun) {
        std::cout << "  [CANH BAO] --fresh cho phep nop revision moi; server van giu"
                  << " diem va thoi gian cu cua MATCH_ID nay.\n";
    }
    if (lastDay >= 0) {
        std::cout << "  -> Khoi phuc: da nop xong ngay " << lastDay + 1
                  << "/" << totalDays << "; se khong nop lai.\n";
    }
    int retryCount = 0;
    int newDayPollCount = 0;
    const int MAX_RETRIES = 300;
    const int POLL_MS = 100;
    const int ERROR_RETRY_MS = 500;
    while (true) {
        GameState state = api.getMatchStatus(matchId);

        if (state.day < 0) {
            // Parse error or server down — wait and retry
            std::cout << "  [Cho] Khong doc duoc status... thu lai nhanh\n";
            std::cout << "        (" << api.getLastError() << ")\n";
            Sleep(ERROR_RETRY_MS);
            retryCount++;
            if (retryCount > MAX_RETRIES) {
                std::cerr << "[LOI] Qua thoi gian cho. Thoat.\n";
                break;
            }
            continue;
        }

        // /status is authoritative: before Start, startsAt is zero; after the
        // final day, finished is true. The match list can already be empty.
        if (state.finished || state.day >= totalDays) {
            std::cout << "\n[4/4] Tran dau da ket thuc! (day=" << state.day
                      << ", totalDays=" << totalDays << ")\n";
            break;
        }

        // A submitted day may remain "running" with an expired endsAt until
        // Next Day. Do not run deadline checks or fetch lifecycle twice here.
        if (state.day <= lastDay) {
            Sleep(POLL_MS);
            continue;
        }

        if (!LiveMatchGuard::canPlan(
                "", state, totalDays, currentEpochMs())) {
            if (newDayPollCount++ % 50 == 0) {
                std::cout << "  [Cho] Ngay moi chua san sang: startsAt=" << state.startsAt
                          << ", endsAt=" << state.endsAt
                          << ", agents=" << state.agents.size() << "\n";
            }
            Sleep(POLL_MS);
            continue;
        }

        newDayPollCount = 0;
        retryCount = 0;

        if (state.day > lastDay + 1) {
            std::cerr << "  [CANH BAO] Server da bo qua ngay " << lastDay + 1
                      << " den " << state.day - 1
                      << "; khong the nop bu cac ngay da dong.\n";
        }

        // === NEW DAY! Match is running, agents available ===
        int daySteps = config.daySteps[state.day];
        std::cout << "------------------------------------------------------------------------\n";
        std::cout << "  NGAY " << state.day + 1 << "/" << totalDays
                  << " (server index: " << state.day << ")"
                  << " (Steps: " << daySteps << ")\n";
        std::cout << "------------------------------------------------------------------------\n";

        // Print agent states
        for (size_t i = 0; i < state.agents.size(); ++i) {
            Position pos = map.posToCoordinate(state.agents[i].pos);
            std::cout << "  Xe #" << i
                      << " | pos=" << state.agents[i].pos
                      << " (" << pos.x << "," << pos.y << ")"
                      << " | fuel=" << state.agents[i].fuel
                      << " | kind=" << (state.agents[i].kind == 0 ? "Patrol" : "Supply")
                      << "\n";
        }

        // Solve
        auto solveStarted = std::chrono::steady_clock::now();
        auto actions = solver.solve(config, state, map);
        auto solveMs = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now() - solveStarted).count();
        auto remainingMs = state.endsAt * 1000LL - currentEpochMs();
        std::cout << "  -> Solver: " << solveMs << " ms, con "
                  << remainingMs << " ms truoc deadline\n";
        bool usedFallback = false;

        // Sanity check: actions must not be empty
        if (actions.empty() || actions.size() != state.agents.size()) {
            std::cerr << "  [LOI] Solver tra ve actions rong hoac sai so luong!\n";
            actions = solver.createFallbackActions(config, state);
            usedFallback = true;
        }

        // Validate
        if (!ActionValidator::validate(config, state, actions, map)) {
            std::cerr << "  [CANH BAO] Action KHONG HOP LE! Dung fallback.\n";
            actions = solver.createFallbackActions(config, state);
            usedFallback = true;
        } else {
            std::cout << "  -> Ket qua: HOP LE\n";
        }

        // Print actions summary
        for (size_t i = 0; i < actions.size(); ++i) {
            int moveCount = 0;
            for (int a : actions[i]) {
                if (a >= 0 && a <= 5) moveCount++;
            }
            std::cout << "  Xe #" << i << ": " << moveCount << " moves, "
                      << actions[i].size() << " total actions\n";
        }

        // The answer endpoint does not carry a day number. Never let a plan
        // computed from an old snapshot be accepted for a newer day.
        GameState latest = api.getMatchStatus(matchId);
        if (!LiveMatchGuard::canSubmit(
                "", state, latest, totalDays, currentEpochMs())) {
            solver.discardLastPlan();
            std::cerr << "  [CANH BAO] Snapshot/deadline da doi trong luc tinh"
                      << " (ngay " << state.day << " -> " << latest.day
                      << ", endsAt " << state.endsAt << " -> " << latest.endsAt
                      << "). Bo phuong an cu va doc lai.\n\n";
            continue;
        }

        // Submit
        if (api.submitActions(matchId, actions)) {
            std::cout << "  -> DA GUI THANH CONG!\n\n";
            if (usedFallback) solver.discardLastPlan();
            else solver.commitLastPlan();
            if (!DiaryWriter::writeDay(
                    diaryRoot, matchId, state.day, daySteps,
                    config, state, map, solver, actions, usedFallback)) {
                std::cerr << "  [CANH BAO] Khong ghi duoc diary cho ngay "
                          << state.day << "\n";
            }
            lastDay = state.day;
        } else {
            solver.discardLastPlan();
            std::string err = api.getLastError();
            std::cerr << "  [LOI] Gui that bai: " << err << "\n";

            // A Next Day transition can briefly reject an answer. Poll again
            // quickly instead of sleeping for several seconds.
            if (err.find("not running") != std::string::npos) {
                std::cerr << "  -> Match dang chuyen trang thai, thu lai sau "
                          << POLL_MS << " ms...\n\n";
                Sleep(POLL_MS);
            } else {
                std::cerr << "  -> Thu lai sau " << ERROR_RETRY_MS << " ms...\n\n";
                Sleep(ERROR_RETRY_MS);
            }
            continue; // Retry this day
        }
    }

    std::cout << "========================================================================\n";
    std::cout << "  HOAN THANH THI DAU!\n";
    std::cout << "========================================================================\n";

    return 0;
}

// =============================================================================
// MODE 2: Stdin mode — Read from stdin, write to stdout (for local testing)
// =============================================================================
int runStdinMode() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    GameConfig config = JsonReader::readGameConfig();
    Map map(config.map.height, config.map.width, config.map.cells);
    Solver solver;

    auto agentTypes = solver.decideAgentTypes(config);
    JsonWriter::writeAgentTypes(agentTypes);

    for (size_t day = 0; day < config.daySteps.size(); ++day) {
        GameState state = JsonReader::readGameState();
        auto actions = solver.solve(config, state, map);
        bool usedFallback = false;

        if (!ActionValidator::validate(config, state, actions, map)) {
            std::cerr << "[WARNING] Day " << day << " invalid! Using fallback.\n";
            actions = solver.createFallbackActions(config, state);
            usedFallback = true;
        }

        JsonWriter::writeActions(actions);
        if (usedFallback) solver.discardLastPlan();
        else solver.commitLastPlan();
    }

    return 0;
}

// =============================================================================
// MAIN — Parse arguments and run appropriate mode
// =============================================================================
void printUsage(const char* prog) {
    std::cout << "HexaUdon Bot v2.0 — Procon 2026\n\n";
    std::cout << "Cach dung:\n\n";
    std::cout << "  CHE DO THI DAU (ket noi server):\n";
    std::cout << "    " << prog << " --server URL --token TOKEN --match MATCH_ID [--fresh]\n\n";
    std::cout << "  Vi du:\n";
    std::cout << "    " << prog << " --server https://procon26.haui.ac.vn --token abc123 --match 6789\n\n";
    std::cout << "  CHE DO LOCAL (stdin/stdout):\n";
    std::cout << "    " << prog << " --stdin\n";
    std::cout << "    type demo_input.json | " << prog << " --stdin\n\n";
}

int main(int argc, char* argv[]) {
    std::string serverUrl;
    std::string token;
    std::string matchId;
    bool stdinMode = false;
    bool freshRun = false;

    // Parse command line arguments
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "--server" && i + 1 < argc) {
            serverUrl = argv[++i];
        } else if (arg == "--token" && i + 1 < argc) {
            token = argv[++i];
        } else if (arg == "--match" && i + 1 < argc) {
            matchId = argv[++i];
        } else if (arg == "--stdin") {
            stdinMode = true;
        } else if (arg == "--fresh") {
            freshRun = true;
        } else if (arg == "--help" || arg == "-h") {
            printUsage(argv[0]);
            return 0;
        }
    }

    // If no arguments → show help
    if (argc <= 1) {
        printUsage(argv[0]);
        return 0;
    }

    if (stdinMode) {
        return runStdinMode();
    }

    if (serverUrl.empty() || token.empty() || matchId.empty()) {
        std::cerr << "[LOI] Thieu tham so! Can: --server, --token, --match\n\n";
        printUsage(argv[0]);
        return 1;
    }

    return runApiMode(serverUrl, token, matchId, freshRun);
}
