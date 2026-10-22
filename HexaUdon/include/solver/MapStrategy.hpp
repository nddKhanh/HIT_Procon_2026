#pragma once
#include "model/GameConfig.hpp"
#include <algorithm>
#include <set>

// Choose by the received configuration, never by filename or match ID.
struct MapStrategy {
    const char* name;
    bool exactRoutes;
    int coverageOrderLimit;
    int repairMs;
    int brands;
    int dailyCeiling;
    int minSteps;
    bool fuelTight;
    bool preferStartCoverage = false;

    bool tournament = false;
    int responseSeconds = 60;
    int dailyRepairMs = 12000;
    int tourRepairMs = 8000;

    // Server durations override the published fallback; never enlarge its window.
    long long solveBudgetMs(const GameConfig& config, int day) const {
        int seconds = responseSeconds;
        if (day >= 0 && day < static_cast<int>(config.daySeconds.size()) && config.daySeconds[day] > 0)
            seconds = config.daySeconds[day];
        return std::max(0LL, std::min(57000LL, seconds * 1000LL - 3000));
    }

    static MapStrategy select(const GameConfig& config) {
        std::set<int> brands;
        for (const auto& spot : config.spots) brands.insert(spot.brand);
        const int side = std::max(config.map.width, config.map.height);
        const int minSteps = config.daySteps.empty() ? 0 :
            *std::min_element(config.daySteps.begin(), config.daySteps.end());
        MapStrategy out{"compact-exact", true, 64, 1200,
            static_cast<int>(brands.size()),
            static_cast<int>(brands.size() * config.daySteps.size()),
            minSteps, config.fuelLimit < minSteps};
        // ponytail: size/workload tiers, not a trained classifier. Exact route
        // enumeration still requires <=3 Patrols and <=20 brands in Solver.
        if (side > 24 || config.spots.size() > 24 ||
            config.initialAgentPositions.size() > 6) {
            out.name = "large-bounded";
            out.exactRoutes = false;
            out.coverageOrderLimit = 16;
            out.repairMs = 600;
        } else if (side > 16 || config.spots.size() > 18) {
            out.name = "regional-repair";
            // Starting on distinct replenished brands helps the regional tier.
            // Keep the large-fleet reachability policy: this preference reduced
            // whole-match Daily there in the recorded comparison.
            out.preferStartCoverage = true;
            out.exactRoutes = false;
            out.repairMs = 900;
        }
        // Extra refueling search is useful when even the shortest day exceeds
        // the fuel budget. Do not buy it by removing the normal route fallback.
        if (out.fuelTight) out.repairMs = 1200;
        struct Published {
            const char* name; int width, height, seconds, repair, tour;
            std::vector<int> steps; bool finals;
        };
        // Published dimensions are width x height, including rectangular maps.
        const Published profiles[] = {
            {"V0-balanced",20,20,45,8000,5000,{40,50,60,60,50,40},false},
            {"C1-wide",24,18,45,9000,5000,{70,80,90,90,80,70},false},
            {"C2-compact",16,16,40,7000,5000,{40,48,56,64,56,48,40},false},
            {"C3-long-days",20,26,50,10000,6000,{60,90,120,120,90,60},false},
            {"F1-endurance",25,25,50,10000,6000,{80,90,100,110,110,100,90,80},true},
            {"F2-large-endurance",32,32,60,12000,8000,{110,120,140,90,70,70,90,140,120,110},true},
            {"F3-reserve",18,18,45,8000,5000,{60,72,72,60},true}
        };
        for (const auto& profile : profiles) {
            const bool teams = profile.finals ? config.players == 3 || config.players == 4 : config.players == 7;
            if (!teams || config.map.width != profile.width || config.map.height != profile.height ||
                config.daySteps != profile.steps) continue;
            out.name = profile.name;
            out.tournament = true;
            out.responseSeconds = profile.seconds;
            out.dailyRepairMs = profile.repair;
            out.tourRepairMs = profile.tour;
            // Keep workload/fuel-dependent route bounds selected above.
            break;
        }
        return out;
    }
};
