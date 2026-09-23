#include "solver/PatrolPlanner.hpp"
#include "solver/SpotScorer.hpp"
#include <algorithm>
#include <iostream>
namespace before {
static int brandSpotCount(const GameConfig& config, int brand) {
    int count = 0;
    for (const auto& spot : config.spots) count += spot.brand == brand;
    return count;
}

static int findLookaheadSpot(Position currentPos, const GameConfig& config,
    const Map& map, int fuelRemaining, int stepsRemaining,
    const std::set<int>& visitedToday, const std::vector<int>& remainingStock,
    const std::set<int>& matchBrands, const std::set<int>& dailyBrands,
    const std::set<int>& claimedSpots, bool officialRanking,
    bool exclusiveClaims, PathCache* pathCache,
    const std::set<int>& preferredSpots) {
    auto localCurrent = pathCache ? SSSPResult{} :
        PathFinder::computeSSSP(currentPos, map, fuelRemaining, 1.0);
    const auto& fromCurrent = pathCache ? pathCache->get(currentPos, fuelRemaining, 1.0) :
                                          localCurrent;

    struct FirstCandidate {
        int spot;
        PathResult path;
        SpotScorer::SpotRank rank;
    };

    auto evaluateCandidates = [&](bool enforceSameDay) {
        std::vector<FirstCandidate> firstCandidates;
        for (size_t first = 0; first < config.spots.size(); ++first) {
            if ((exclusiveClaims && claimedSpots.count(static_cast<int>(first))) ||
                visitedToday.count(static_cast<int>(first)) ||
                first >= remainingStock.size() || remainingStock[first] <= 0) continue;

            auto firstPath = fromCurrent.extractPath(config.spots[first].pos);
            if (!firstPath.found) continue;
            if (enforceSameDay && firstPath.totalSteps > stepsRemaining) continue;

            auto pairRank = SpotScorer::rankSpot(config.spots[first].brand,
                firstPath.totalSteps, matchBrands, dailyBrands, remainingStock[first],
                brandSpotCount(config, config.spots[first].brand),
                firstPath.totalFuel);
            if (!officialRanking) pairRank = {
                SpotScorer::scoreSpot(config.spots[first].brand, firstPath.totalSteps,
                    matchBrands, remainingStock[first],
                    brandSpotCount(config, config.spots[first].brand),
                    firstPath.totalFuel, fuelRemaining),
                dailyBrands.count(config.spots[first].brand) ? 0 : 1,
                0, 0, -firstPath.totalSteps, -firstPath.totalFuel};
            pairRank[2] = preferredSpots.empty() ||
                          preferredSpots.count(static_cast<int>(first)) ? 1 : 0;
            firstCandidates.push_back({static_cast<int>(first), std::move(firstPath), pairRank});
        }
        std::sort(firstCandidates.begin(), firstCandidates.end(),
            [](const FirstCandidate& a, const FirstCandidate& b) { return a.rank > b.rank; });
        if (firstCandidates.size() > 16) firstCandidates.resize(16);

        int best = -1;
        SpotScorer::SpotRank bestRank = {-1, -1, -1, -1, INT_MIN, INT_MIN};

        for (const auto& candidate : firstCandidates) {
            int first = candidate.spot;
            const auto& firstPath = candidate.path;
            auto pairRank = candidate.rank;
            Position firstPos = map.posToCoordinate(config.spots[first].pos);

            auto nextVisited = visitedToday;
            auto nextStock = remainingStock;
            auto nextMatchBrands = matchBrands;
            auto nextDailyBrands = dailyBrands;
            nextVisited.insert(static_cast<int>(first));
            --nextStock[first];
            nextMatchBrands.insert(config.spots[first].brand);
            nextDailyBrands.insert(config.spots[first].brand);

            int secondFuel = fuelRemaining - firstPath.totalFuel;
            if (secondFuel > 0 && (!enforceSameDay || firstPath.totalSteps < stepsRemaining)) {
                auto localFirst = pathCache ? SSSPResult{} :
                    PathFinder::computeSSSP(firstPos, map, secondFuel, 1.0);
                const auto& fromFirst = pathCache ? pathCache->get(firstPos, secondFuel, 1.0) :
                                                   localFirst;
                for (size_t second = 0; second < config.spots.size(); ++second) {
                    if ((exclusiveClaims && claimedSpots.count(static_cast<int>(second))) ||
                        nextVisited.count(static_cast<int>(second)) || nextStock[second] <= 0)
                        continue;
                    auto secondPath = fromFirst.extractPath(config.spots[second].pos);
                    if (!secondPath.found || (enforceSameDay && firstPath.totalSteps + secondPath.totalSteps > stepsRemaining))
                        continue;
                    auto secondRank = SpotScorer::rankSpot(config.spots[second].brand,
                        secondPath.totalSteps, nextMatchBrands, nextDailyBrands, nextStock[second],
                        brandSpotCount(config, config.spots[second].brand), secondPath.totalFuel);
                    if (!officialRanking) secondRank = {
                        SpotScorer::scoreSpot(config.spots[second].brand, secondPath.totalSteps,
                            nextMatchBrands, nextStock[second],
                            brandSpotCount(config, config.spots[second].brand),
                            secondPath.totalFuel, fuelRemaining - firstPath.totalFuel),
                        nextDailyBrands.count(config.spots[second].brand) ? 0 : 1,
                        0, 0, -secondPath.totalSteps, -secondPath.totalFuel};
                    secondRank[2] = preferredSpots.empty() ||
                                    preferredSpots.count(static_cast<int>(second)) ? 1 : 0;
                    auto withSecond = pairRank;
                    for (size_t i = 0; i < withSecond.size(); ++i) withSecond[i] += secondRank[i];
                    if (withSecond > pairRank) pairRank = withSecond;
                }
            }

            if (pairRank > bestRank) {
                bestRank = pairRank;
                best = static_cast<int>(first);
            }
        }
        return best;
    };

    int spot = evaluateCandidates(true);
    if (spot < 0) {
        spot = evaluateCandidates(false);
    }
    return spot;
}


}
namespace after {
static int brandSpotCount(const GameConfig& config, int brand) {
    int count = 0;
    for (const auto& spot : config.spots) count += spot.brand == brand;
    return count;
}

static int findLookaheadSpot(Position currentPos, const GameConfig& config,
    const Map& map, int fuelRemaining, int stepsRemaining,
    const std::set<int>& visitedToday, const std::vector<int>& remainingStock,
    const std::set<int>& matchBrands, const std::set<int>& dailyBrands,
    const std::set<int>& claimedSpots, bool officialRanking,
    bool exclusiveClaims, PathCache* pathCache,
    const std::set<int>& preferredSpots) {
    auto localCurrent = pathCache ? SSSPResult{} :
        PathFinder::computeSSSP(currentPos, map, fuelRemaining, 1.0);
    const auto& fromCurrent = pathCache ? pathCache->get(currentPos, fuelRemaining, 1.0) :
                                          localCurrent;

    struct FirstCandidate {
        int spot;
        PathResult path;
        SpotScorer::SpotRank rank;
    };

    auto evaluateCandidates = [&](bool enforceSameDay) {
        std::vector<FirstCandidate> firstCandidates;
        for (size_t first = 0; first < config.spots.size(); ++first) {
            if ((exclusiveClaims && claimedSpots.count(static_cast<int>(first))) ||
                visitedToday.count(static_cast<int>(first)) ||
                first >= remainingStock.size() || remainingStock[first] <= 0) continue;

            auto firstPath = fromCurrent.extractPath(config.spots[first].pos);
            if (!firstPath.found) continue;
            if (enforceSameDay && firstPath.totalSteps > stepsRemaining) continue;

            auto pairRank = SpotScorer::rankSpot(config.spots[first].brand,
                firstPath.totalSteps, matchBrands, dailyBrands, remainingStock[first],
                brandSpotCount(config, config.spots[first].brand),
                firstPath.totalFuel);
            if (!officialRanking) pairRank = {
                SpotScorer::scoreSpot(config.spots[first].brand, firstPath.totalSteps,
                    matchBrands, remainingStock[first],
                    brandSpotCount(config, config.spots[first].brand),
                    firstPath.totalFuel, fuelRemaining),
                dailyBrands.count(config.spots[first].brand) ? 0 : 1,
                0, 0, -firstPath.totalSteps, -firstPath.totalFuel};
            pairRank[2] = preferredSpots.empty() ||
                          preferredSpots.count(static_cast<int>(first)) ? 1 : 0;
            firstCandidates.push_back({static_cast<int>(first), std::move(firstPath), pairRank});
        }
        std::sort(firstCandidates.begin(), firstCandidates.end(),
            [](const FirstCandidate& a, const FirstCandidate& b) { return a.rank > b.rank; });
        if (firstCandidates.size() > 16) firstCandidates.resize(16);

        int best = -1;
        SpotScorer::SpotRank bestRank = {-1, -1, -1, -1, INT_MIN, INT_MIN};

        for (const auto& candidate : firstCandidates) {
            int first = candidate.spot;
            const auto& firstPath = candidate.path;
            auto pairRank = candidate.rank;
            Position firstPos = map.posToCoordinate(config.spots[first].pos);

            auto nextVisited = visitedToday;
            auto nextStock = remainingStock;
            auto nextMatchBrands = matchBrands;
            auto nextDailyBrands = dailyBrands;
            nextVisited.insert(static_cast<int>(first));
            --nextStock[first];
            nextMatchBrands.insert(config.spots[first].brand);
            nextDailyBrands.insert(config.spots[first].brand);

            int secondFuel = fuelRemaining - firstPath.totalFuel;
            if (secondFuel > 0 && (!enforceSameDay || firstPath.totalSteps < stepsRemaining)) {
                auto localFirst = pathCache ? SSSPResult{} :
                    PathFinder::computeSSSP(firstPos, map, secondFuel, 1.0);
                const auto& fromFirst = pathCache ? pathCache->get(firstPos, secondFuel, 1.0) :
                                                   localFirst;
                for (size_t second = 0; second < config.spots.size(); ++second) {
                    if ((exclusiveClaims && claimedSpots.count(static_cast<int>(second))) ||
                        nextVisited.count(static_cast<int>(second)) || nextStock[second] <= 0)
                        continue;
                    auto secondPath = fromFirst.extractPath(config.spots[second].pos);
                    if (!secondPath.found || (enforceSameDay && firstPath.totalSteps + secondPath.totalSteps > stepsRemaining))
                        continue;
                    auto secondRank = SpotScorer::rankSpot(config.spots[second].brand,
                        secondPath.totalSteps, nextMatchBrands, nextDailyBrands, nextStock[second],
                        brandSpotCount(config, config.spots[second].brand), secondPath.totalFuel);
                    if (!officialRanking) secondRank = {
                        SpotScorer::scoreSpot(config.spots[second].brand, secondPath.totalSteps,
                            nextMatchBrands, nextStock[second],
                            brandSpotCount(config, config.spots[second].brand),
                            secondPath.totalFuel, fuelRemaining - firstPath.totalFuel),
                        nextDailyBrands.count(config.spots[second].brand) ? 0 : 1,
                        0, 0, -secondPath.totalSteps, -secondPath.totalFuel};
                    secondRank[2] = preferredSpots.empty() ||
                                    preferredSpots.count(static_cast<int>(second)) ? 1 : 0;
                    auto withSecond = candidate.rank;
                    for (size_t i = 0; i < withSecond.size(); ++i) withSecond[i] += secondRank[i];
                    if (withSecond > pairRank) pairRank = withSecond;
                }
            }

            if (pairRank > bestRank) {
                bestRank = pairRank;
                best = static_cast<int>(first);
            }
        }
        return best;
    };

    int spot = evaluateCandidates(true);
    if (spot < 0) {
        spot = evaluateCandidates(false);
    }
    return spot;
}


}
int main(){ for(int mask=1;mask<512;mask++){GameConfig c{};c.map={1,9,{std::vector<int>(9)}};for(int p=0;p<9;p++)if(mask&(1<<p))c.spots.push_back({p,p,1});if(c.spots.size()<3)continue; Map m(1,9,c.map.cells);for(int start=0;start<9;start++){if(mask&(1<<start))continue;for(int steps=4;steps<=18;steps+=2){std::vector<int> stock(c.spots.size(),1);int a=before::findLookaheadSpot({start,0},c,m,30,steps,{},stock,{},{},{},true,false,nullptr,{});int b=after::findLookaheadSpot({start,0},c,m,30,steps,{},stock,{},{},{},true,false,nullptr,{});if(a!=b){std::cout<<"start="<<start<<" steps="<<steps<<" spots=";for(auto&s:c.spots)std::cout<<s.pos<<",";std::cout<<" old="<<c.spots[a].pos<<" new="<<c.spots[b].pos<<"\n";return 0;}}}}}