#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <functional>
#ifdef _WIN32
#include <windows.h>
#endif

#include "io/JsonReader.hpp"
#include "io/JsonWriter.hpp"
#include "io/DiaryWriter.hpp"
#include "io/RuntimeState.hpp"
#include "solver/MoveSimulator.hpp"
#include "map/Map.hpp"
#include "solver/Solver.hpp"
#include "solver/ActionValidator.hpp"
#include "api/GameApiClient.hpp"
#include "api/LiveMatchGuard.hpp"

// =============================================================================
// MODE 1: API mode — Connect to Procon server via HTTPS REST API
// =============================================================================
int runApiMode(const std::string& serverUrl, const std::string& token, const std::string& matchId) {
#ifdef _WIN32
    SetConsoleOutputCP(65001);
#endif

    std::cout << "========================================================================\n";
    std::cout << "  HEXAUDON BOT v2.0 — CHE DO THI DAU (API MODE)\n";
    std::cout << "========================================================================\n";
    std::cout << "  Server : " << serverUrl << "\n";
    std::cout << "  Match  : " << matchId << "\n";
    std::cout << "========================================================================\n\n";

    GameApiClient api(serverUrl, token);

    // --- Step 1: Get match config ---
    std::cout << "[1/4] Dang lay cau hinh tran dau (GET /config)...\n";
    GameConfig config = api.getMatchConfig(matchId);
    if (config.daySteps.empty()) {
        std::cerr << "[LOI] Khong lay duoc config: " << api.getLastError() << "\n";
        return 1;
    }
    const nlohmann::json checkpointScope = {{"server", serverUrl}, {"match", matchId},
        {"config", nlohmann::json::parse(api.getLastResponse())},
        {"team", std::to_string(std::hash<std::string>{}(token))}};
    // Hash is only a local namespace (not authentication); never persist the token.
    const auto checkpointPath = std::filesystem::path(".runtime") /
        (std::to_string(std::hash<std::string>{}(checkpointScope.dump())) + ".json");
    std::cout << "  -> Ban do: " << config.map.width << "x" << config.map.height << "\n";
    std::cout << "  -> So xe: " << config.initialAgentPositions.size() << "\n";
    std::cout << "  -> So spot: " << config.spots.size() << "\n";
    std::cout << "  -> So ngay: " << config.daySteps.size() << "\n";
    std::cout << "  -> Fuel limit: " << config.fuelLimit << "\n\n";

    Map map(config.map.height, config.map.width, config.map.cells);
    Solver solver;

    // A late start/restart must inspect the live fleet before selecting types.
    GameState initial;
    unsigned statusDelayMs = 1000;
    while (true) {
        initial = api.getMatchStatus(matchId);
        if (api.statusAvailable() &&
            (initial.finished || initial.day >= static_cast<int>(config.daySteps.size()))) return 0;
        if (api.statusAvailable()) break;
        std::cerr << "[Cho] " << api.getLastError() << "\n";
        if (api.authorizationFailed()) return 1;
        Sleep(statusDelayMs);
        statusDelayMs = std::min(10000u, statusDelayMs * 2);
    }
    int lastDay = -1;
    bool restored = false;
    if (std::filesystem::exists(checkpointPath)) {
        try {
            lastDay = runtime_state::restore(checkpointPath, checkpointScope, initial, solver);
            restored = true;
            std::cout << "[RESUME] Khoi phuc checkpoint, ngay da nop: " << lastDay << "\n";
        } catch (const std::exception& e) {
            std::cerr << "[CANH BAO] " << e.what() << "; khong tu suy doan lich su.\n";
        }
    }
    if (!restored && initial.day > 0)
        std::cerr << "[CANH BAO] Thieu lich su brand truoc ngay " << initial.day
                  << "; chien thuat co the kem chinh xac sau restart.\n";
    bool historyComplete = restored || initial.day <= 0;

    // --- Step 2: Submit agent types ---
    if (initial.agents.empty() && !restored) {
        std::cout << "[2/4] Dang gui lua chon loai xe (POST /agents)...\n";
        auto agentTypes = solver.decideAgentTypes(config);
        std::cout << "  -> Loai xe: [";
        for (size_t i = 0; i < agentTypes.size(); ++i) {
            std::cout << agentTypes[i];
            if (i + 1 < agentTypes.size()) std::cout << ", ";
        }
        std::cout << "]\n";

        // Formation search may span the phase transition. Never POST from the
        // stale pre-search snapshot when the server already owns a fleet.
        initial = api.getMatchStatus(matchId);
        if (api.authorizationFailed()) return 1;
        if (!api.statusAvailable()) {
            std::cerr << "[LOI] Khong kiem tra duoc pha truoc khi gui doi hinh: "
                      << api.getLastError() << "\n";
            return 1;
        }
        if (initial.finished || initial.day >= static_cast<int>(config.daySteps.size())) return 0;

        bool selectionConfirmed = false;
        if (!initial.agents.empty()) {
            std::cout << "  -> Server da co doi hinh trong luc tinh; bo qua POST /agents.\n";
            solver = Solver{};
        } else {
            const bool postSucceeded = api.submitAgentTypes(matchId, agentTypes);
            if (!postSucceeded)
                std::cerr << "[CANH BAO] POST /agents chua ro ket qua: "
                          << api.getLastError() << "\n";
            initial = api.getMatchStatus(matchId);
            if (api.authorizationFailed()) return 1;
            selectionConfirmed = api.statusAvailable() &&
                live_match::hasSelectedFleet(initial, agentTypes);
            if (!selectionConfirmed && (!api.statusAvailable() || initial.agents.empty())) {
                std::cerr << "[LOI] Server chua xac nhan doi hinh. Hay khoi dong lai.\n";
                return 1;
            }
            if (!selectionConfirmed) {
                std::cerr << "[CANH BAO] Doi hinh server khac payload; dung fleet server.\n";
                solver = Solver{};
            }
        }

        if (selectionConfirmed) {
            std::cout << "  -> Server da xac nhan doi hinh!\n";
            try {
                runtime_state::save(checkpointPath, checkpointScope, solver, -1, 0,
                                    initial.agents, initial.agents);
            } catch (const std::exception& e) {
                std::cerr << "[CANH BAO] " << e.what() << "\n";
            }
        }
    } else {
        std::cout << "[2/4] Dung lua chon xe da co; bo qua tim doi hinh.\n";
    }
    std::cout << "\n";

    // --- Step 3: Main loop — poll status and submit actions for each day ---
    std::cout << "[3/4] Bat dau vong lap thi dau...\n";
    std::cout << "  (Dang cho admin Start match...)\n\n";

    int totalDays = static_cast<int>(config.daySteps.size());
    int attemptedDay = -1;
    int retryCount = 0;
    statusDelayMs = 1000;

    while (true) {
        // Poll match status
        GameState state = api.getMatchStatus(matchId);

        if (api.statusAvailable() && (state.finished || state.day >= totalDays)) {
            std::cout << "[4/4] Tran dau da ket thuc!\n";
            break;
        }

        if (!api.statusAvailable()) {
            // Parse error or server down — wait and retry
            std::cout << "  [Cho] Khong doc duoc status...\n";
            std::cout << "        (" << api.getLastError() << ")\n";
            if (api.authorizationFailed()) return 1;
            Sleep(statusDelayMs);
            statusDelayMs = std::min(10000u, statusDelayMs * 2);
            continue;
        }
        statusDelayMs = 1000;

        if (!live_match::hasLiveStatus(state, totalDays)) {
            if (retryCount % 10 == 0) {
                std::cout << "  [Cho] Ngay thi dau chua san sang. Cho admin click 'Start'...\n";
            }
            Sleep(2000);
            retryCount = (retryCount + 1) % 10;
            continue;
        }

        // Reset retry counter once match is actually running
        retryCount = 0;

        // Skip if we already submitted for this day
        if (state.day <= lastDay || state.day == attemptedDay) {
            Sleep(500);
            continue;
        }

        if (state.day > lastDay + 1) {
            historyComplete = false;
            std::cerr << "  [CANH BAO] Server da bo qua ngay " << lastDay + 1
                      << " den " << state.day - 1
                      << "; khong the nop bu cac ngay da dong.\n";
        }

        const auto statusNowMs = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch()).count();
        if (state.endsAt * 1000LL <= statusNowMs) {
            std::cerr << "  [CANH BAO] Deadline ngay " << state.day
                      << " da qua; bo qua cau tra loi het han.\n";
            Sleep(500);
            continue;
        }

        // === NEW DAY! Match is running, agents available ===
        int daySteps = config.daySteps[state.day];
        std::cout << "------------------------------------------------------------------------\n";
        std::cout << "  NGAY " << state.day << "/" << totalDays - 1
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
        GameState planningState = state;
        const long long planningDeadlineMs = state.endsAt * 1000LL -
            api_deadline::dailyAnswerReserveMs;
        planningState.endsAt = (planningDeadlineMs + 750LL) / 1000;
        auto solveStarted = std::chrono::steady_clock::now();
        auto actions = solver.solve(config, planningState, map);
        auto solveMs = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now() - solveStarted).count();
        auto remainingMs = state.endsAt * 1000LL -
            std::chrono::duration_cast<std::chrono::milliseconds>(
                std::chrono::system_clock::now().time_since_epoch()).count();
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

        // Retry the same plan only after a fresh same-day check, never inside HTTP.
        bool accepted = false;
        attemptedDay = state.day;
        for (int attempt = 0; attempt < 2; ++attempt) {
            const GameState latest = api.getMatchStatus(matchId);
            if (api.authorizationFailed()) return 1;
            if (!api.statusAvailable() && attempt == 0) {
                Sleep(1000);
                continue;
            }
            const auto nowMs = std::chrono::duration_cast<std::chrono::milliseconds>(
                std::chrono::system_clock::now().time_since_epoch()).count();
            if (!live_match::canSubmitSnapshot(state, latest, totalDays, nowMs)) {
                std::cerr << "[CANH BAO] Ngay/deadline da doi hoac khong du thoi gian POST.\n";
                break;
            }
            if (api.submitActions(matchId, actions)) {
                accepted = true;
                break;
            }
            std::cerr << "[LOI] " << api.getLastError() << "\n";
            if (api.authorizationFailed()) return 1;
            if (!api.answerAcceptanceUnknown()) break;
            if (attempt == 0) Sleep(1000);
        }
        if (accepted) {
            std::cout << "  -> DA GUI THANH CONG!\n\n";
            if (usedFallback) solver.discardLastPlan();
            else solver.commitLastPlan();
            const auto predicted = MoveSimulator::simulateDay(config, state, actions, map);
            if (predicted.valid && historyComplete) {
                try {
                    runtime_state::save(checkpointPath, checkpointScope, solver,
                        state.day, state.endsAt, state.agents, predicted.agents);
                } catch (const std::exception& e) {
                    std::cerr << "[CANH BAO] " << e.what() << "; restart se thieu checkpoint.\n";
                }
            }
            if (!DiaryWriter::writeDay(
                    "diary", matchId, state.day, daySteps,
                    config, state, map, solver, actions, usedFallback)) {
                std::cerr << "  [CANH BAO] Khong ghi duoc diary cho ngay "
                          << state.day << "\n";
            }
            lastDay = state.day;
        } else {
            historyComplete = false;
            solver.discardLastPlan();
            std::cerr << "[CANH BAO] Chua xac nhan dap an ngay " << state.day
                      << "; khong ghi nhan brand, khong tinh lai va gui don dap.\n";
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
    std::cout << "    " << prog << " --server URL --token TOKEN --match MATCH_ID\n\n";
    std::cout << "  Vi du:\n";
    std::cout << "    " << prog << " --server https://procon26.haui.ac.vn --token abc123 --match 6789\n\n";
    std::cout << "  CHE DO LOCAL (stdin/stdout):\n";
    std::cout << "    " << prog << " --stdin\n";
    std::cout << "    type demo_input.json | " << prog << " --stdin\n\n";
    std::cout << "  HEXUDON_AGENT_SELECTION_SECONDS: tong thoi gian chon xe (mac dinh 40s).\n";
    std::cout << "  Thuat toan tu tru 10s de nop; 10s = dung doi hinh mac dinh.\n";
}

int main(int argc, char* argv[]) {
    std::string serverUrl;
    std::string token;
    std::string matchId;
    bool stdinMode = false;

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

    try {
        api_deadline::agentSelectionWindowMs(std::getenv("HEXUDON_AGENT_SELECTION_SECONDS"));
    } catch (const std::exception& e) {
        std::cerr << "[LOI] " << e.what() << '\n';
        return 1;
    }

    if (stdinMode) {
        return runStdinMode();
    }

    if (serverUrl.empty() || token.empty() || matchId.empty()) {
        std::cerr << "[LOI] Thieu tham so! Can: --server, --token, --match\n\n";
        printUsage(argv[0]);
        return 1;
    }

    return runApiMode(serverUrl, token, matchId);
}
