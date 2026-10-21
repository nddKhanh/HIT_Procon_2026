// Adapted read-only from origin/khanh 30c8e77; isolated symbols for Quan.
#pragma once

#include "model/GameConfig.hpp"
#include "GameState.hpp"
#include "map/Map.hpp"
#include <vector>
#include <climits>
#include <map>
#include <tuple>

struct KhanhPathResult {
    std::vector<int> directions;  // Sequence of hex directions (0-5)
    int totalSteps = 0;           // Total travel time steps consumed
    int totalFuel = 0;            // Total fuel consumed (for patrol cars)
    bool found = false;           // Whether a path was found
};

/**
 * @brief Single-Source Shortest Path result.
 * Contains distance/fuel/parent arrays for ALL cells from a single source.
 */
struct KhanhSSSPResult {
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
    KhanhPathResult extractPath(int goalPos) const;
};

class KhanhPathCache {
public:
    explicit KhanhPathCache(const Map& map) : map_(map) {}
    const KhanhSSSPResult& get(Position source, int maxFuel = INT_MAX,
                          double fuelWeight = 0.0);
    size_t size() const { return cache_.size(); }

private:
    const Map& map_;
    std::map<std::tuple<int, int, int>, KhanhSSSPResult> cache_;
};

class KhanhPathFinder {
public:
    // Rank complete patrol routes by steps + fuel - capped collectible-spot reward.
    // Physical budgets remain hard constraints; rewards are indexed by map cell.
    static KhanhPathResult findPathViaSpots(Position start, Position goal, const Map& map,
        int maxFuel, int maxSteps, const std::vector<double>& rewards,
        KhanhPathCache* cache = nullptr);
    /**
     * @brief Dijkstra pathfinding on hex grid with travel time weights.
     */
    static KhanhPathResult findPath(
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
     * @return KhanhSSSPResult with dist/fuel/prev arrays for all cells
     */
    static KhanhSSSPResult computeSSSP(
        Position source,
        const Map& map,
        int maxFuel = INT_MAX,
        double fuelWeight = 0.0
    );
};
