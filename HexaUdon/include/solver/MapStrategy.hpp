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
        return out;
    }
};
