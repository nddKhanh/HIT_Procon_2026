#pragma once

#include "model/GameConfig.hpp"
#include "GameState.hpp"
#include "map/Map.hpp"
#include <vector>
#include <climits>
#include <map>
#include <tuple>

struct PathResult {
    std::vector<int> directions;  // Sequence of hex directions (0-5)
    int totalSteps = 0;           // Total travel time steps consumed
    int totalFuel = 0;            // Total fuel consumed (for patrol cars)
    bool found = false;           // Whether a path was found
};

/**
 * @brief Single-Source Shortest Path result.
 * Contains distance/fuel/parent arrays for ALL cells from a single source.
 */
struct SSSPResult {
    std::vector<int> dist;      // dist[pos] = shortest steps from source
    std::vector<int> fuel;      // fuel[pos] = fuel consumed to reach pos
    std::vector<int> prevDir;   // prevDir[pos] = direction taken to reach pos
    std::vector<int> prevCell;  // prevCell[pos] = previous cell index
    int sourcePos = -1;         // Source position index

    // Pareto-label arena. bestLabel[pos] selects the weighted-best
    // nondominated (steps, fuel) label used by extractPath().
    std::vector<int> labelCell;
    std::vector<int> labelSteps;
    std::vector<int> labelFuel;
    std::vector<int> labelPrev;
    std::vector<int> labelDir;
    std::vector<int> bestLabel;

    // Extract path from source to goalPos
    PathResult extractPath(int goalPos) const;
};

class PathCache {
public:
    explicit PathCache(const Map& map) : map_(map) {}
    const SSSPResult& get(Position source, int maxFuel = INT_MAX,
                          double fuelWeight = 0.0);
    size_t size() const { return cache_.size(); }

private:
    const Map& map_;
    std::map<std::tuple<int, int, int>, SSSPResult> cache_;
};

class PathFinder {
public:
    // Rank complete patrol routes by steps + fuel - capped collectible-spot reward.
    // Physical budgets remain hard constraints; rewards are indexed by map cell.
    static PathResult findPathViaSpots(Position start, Position goal, const Map& map,
        int maxFuel, int maxSteps, const std::vector<double>& rewards,
        PathCache* cache = nullptr);
    /**
     * @brief Dijkstra pathfinding on hex grid with travel time weights.
     */
    static PathResult findPath(
        Position start,
        Position goal,
        const Map& map,
        int maxFuel = INT_MAX,
        double fuelWeight = 0.0
    );

    /**
     * @brief Single-Source Shortest Path — run Dijkstra ONCE from source,
     *        compute distances to ALL reachable cells.
     *
     * Much faster than calling findPath() N times for the same source.
     *
     * @param source   Starting position
     * @param map      Map with terrain + traffic info
     * @param maxFuel  Fuel limit (INT_MAX for supply cars)
     * @return SSSPResult with dist/fuel/prev arrays for all cells
     */
    static SSSPResult computeSSSP(
        Position source,
        const Map& map,
        int maxFuel = INT_MAX,
        double fuelWeight = 0.0
    );
};
