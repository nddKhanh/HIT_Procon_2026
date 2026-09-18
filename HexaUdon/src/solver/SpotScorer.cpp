#include "solver/SpotScorer.hpp"
#include <climits>

SpotScorer::SpotRank SpotScorer::rankSpot(int brand, int distanceSteps,
    const std::set<int>& matchBrands, const std::set<int>& dailyBrands,
    int remainingStock, int brandSpotCount, int fuelCost) {
    if (remainingStock <= 0) return {-1, -1, -1, -1, INT_MIN, INT_MIN};
    int rarity = brandSpotCount == 1 ? 2 : brandSpotCount == 2 ? 1 : 0;
    return {
        matchBrands.count(brand) ? 0 : 1,
        dailyBrands.count(brand) ? 0 : 1,
        1,
        rarity,
        -distanceSteps,
        -fuelCost
    };
}

int SpotScorer::scoreSpot(int brand, int distanceSteps,
    const std::set<int>& collectedBrands, int remainingStock) {
    return scoreSpot(brand, distanceSteps, collectedBrands, remainingStock,
                     0, 0, INT_MAX);
}

int SpotScorer::scoreSpot(int brand, int distanceSteps,
    const std::set<int>& collectedBrands, int remainingStock,
    int brandSpotCount, int fuelCost, int fuelRemaining) {
    if (remainingStock <= 0) return -1;

    int score = collectedBrands.count(brand) ? 0 : 5000;
    if (brandSpotCount == 1) score += 500;
    else if (brandSpotCount == 2) score += 200;
    if (remainingStock == 1) score += 300;
    else if (remainingStock == 2) score += 100;
    score -= distanceSteps;
    if (fuelRemaining > 0 && fuelCost * 2 > fuelRemaining) {
        score -= 500 + (fuelCost * 100 / fuelRemaining);
    }
    return score;
}

int SpotScorer::findBestSpot(Position currentPos, const GameConfig& config,
    const Map& map, int fuelRemaining, int stepsRemaining,
    const std::set<int>& visitedToday, const std::vector<int>& remainingStock,
    const std::set<int>& matchBrands, const std::set<int>& dailyBrands,
    const std::set<int>& claimedSpots) {
    int bestSpot = -1;
    SpotRank bestRank = {-1, -1, -1, -1, INT_MIN, INT_MIN};

    for (size_t si = 0; si < config.spots.size(); ++si) {
        if (visitedToday.count(static_cast<int>(si)) ||
            si >= remainingStock.size() || remainingStock[si] <= 0) continue;

        Position spotPos = map.posToCoordinate(config.spots[si].pos);
        auto path = PathFinder::findPath(currentPos, spotPos, map, fuelRemaining, 1.0);
        if (!path.found || path.totalSteps > stepsRemaining) continue;

        int brandSpotCount = 0;
        for (const auto& spot : config.spots) {
            if (spot.brand == config.spots[si].brand) ++brandSpotCount;
        }
        auto rank = rankSpot(config.spots[si].brand, path.totalSteps,
            matchBrands, dailyBrands, remainingStock[si], brandSpotCount,
            path.totalFuel);

        if (rank > bestRank) {
            bestRank = rank;
            bestSpot = static_cast<int>(si);
        }
    }
    return bestSpot;
}
