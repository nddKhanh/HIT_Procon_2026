# Implementation status

Implemented and integrated into the current solver:

- Phase 0: the Windows build already includes all sources and links WinINet.
- Phase 1: the live spot selector uses the weighted formula below. Existing daily brand tracking breaks equal-score ties.
- Phase 2: exclusive claims remain as a legacy candidate. The optimized candidates use remaining stock, so multiple patrols may collect from a spot with sufficient stock.
- Phase 3: the existing supply scoring formula is retained and covered by policy tests.
- Phase 4: existing floating-point fuel weighting is retained; actual steps and fuel remain separate from weighted cost.
- Phase 5: look-ahead reuses single-source path searches and ranks visits by the official score order. Solver evaluates multiple patrol orders and the former weighted policy, then selects the best simulated team result.
- Pathfinding foundation: fuel-constrained searches retain nondominated time/fuel labels, with a daily cache shared by all candidate plans. A regression test covers the slower low-fuel route that the former single-label search discarded.

Submission commit/discard handling and diary outputs remain integrated. Tests cover exact scoring, claim filtering/reset, look-ahead route selection, supply targeting, and fuel-weighted paths.

These are heuristics, not proof of higher match scores. Fuel-constrained pathfinding still keeps one label per cell; simultaneous refueling is outside this plan.

# Phase 1: Upgrade SpotScorer (HIGH Priority)

## Current Issue
```cpp
// SpotScorer::scoreSpot() — only 2 criteria
score += 1000;           // new brand
score -= distanceSteps;  // distance
```

## Solution: Multi-factor scoring formula
Do not change the signature of `scoreSpot()` and `findBestSpot()`. Only change the internal logic.
In the current `findBestSpot()`, we already have all the necessary data:
*   `config.spots[si].brand` — brand
*   `remainingStock[si]` — remaining stock
*   `path.totalFuel` — fuel consumed to reach destination
*   `fuelRemaining` — current fuel
*   `config.spots` — all spots (to count rarity)

→ We only need to modify the body of `scoreSpot()` and `findBestSpot()`, no need to add new parameters.

**New formula for `scoreSpot()`:**
```text
  score = 5000 × new_brand
        + rarity_bonus (500/200/0)    ← Only 1 Spot selling this brand? Prioritize!
        + stock_urgency (300/100/0)   ← Stock running low? Prioritize!
        - distance
        - fuel_penalty                ← Consumes >50% fuel? Warning!
```

## Code Changes
**[MODIFY] `SpotScorer.cpp`**
*   Modify `scoreSpot()` body: add the 3 new scoring factors.
*   Modify `findBestSpot()` body: pass additional information into `scoreSpot()` by pre-calculating rarity, fuel percentage, etc., before calling.

> **TIP**
> Since `scoreSpot()` is a private helper, we can add parameters to it without affecting anything outside. Only `findBestSpot()` calls it.

---

# Phase 2: Patrol Vehicle Coordination — claimedSpots (HIGH Priority)

## Current Issue
In `Solver::solve()`, each Patrol vehicle calls `PatrolPlanner::planDay()` sequentially (in a for loop). However, there is no mechanism to prevent 2 vehicles from targeting the exact same Spot.

## Solution: Add claimedSpots to Solver
Add a variable `std::set<int> claimedSpots_` to `Solver`. Pass it as a reference into `findBestSpot()` — Spots that have already been "claimed" by a previous vehicle will be ignored.

## Code Changes
**[MODIFY] `Solver.hpp`**
*   Add `std::set<int> claimedSpots_;` to the private section.

**[MODIFY] `Solver.cpp`**
*   `resetDailyState()`: add `claimedSpots_.clear()`.
*   Before calling `PatrolPlanner::planDay()`: pass `claimedSpots_`.

**[MODIFY] `PatrolPlanner.hpp`**
*   Add the parameter `std::set<int>& claimedSpots` to `planDay()` (as the last parameter, after `plannedStepPositions`).

**[MODIFY] `PatrolPlanner.cpp`**
*   Receive `claimedSpots`, and pass it into `SpotScorer::findBestSpot()`.
*   When a Spot is chosen → `claimedSpots.insert(spotIdx)`.

**[MODIFY] `SpotScorer.hpp`**
*   Add the parameter `const std::set<int>& claimedSpots` to `findBestSpot()`.

**[MODIFY] `SpotScorer.cpp`**
*   Add a filter: `if (claimedSpots.count(spotIdx)) continue;`

---

# Phase 3: Upgrade SupplyPlanner (MEDIUM Priority)

## Current Issue
```cpp
// Only finds the vehicle with the lowest fuel
if (agents[i].fuel < lowestFuel) { bestIdx = i; }
```

## Solution: Multi-factor scoring in findTargetPatrol()
Do not change the signature of `planDay()`. Only modify `findTargetPatrol()` internally.
Add parameters to `findTargetPatrol()`:
`config, map, collectedBrands, remainingStock, supplyPos`
Then, call the updated `findTargetPatrol()` within `planDay()`.

```text
supply_score = fuelUrgency (500/400/300/100/0)
             + 600 × has_new_brand_nearby
             + 50 × spots_in_range
             - 10 × distance_to_patrol
```

## Code Changes
**[MODIFY] `SupplyPlanner.hpp`**
*   Add parameters to `findTargetPatrol()` (this is a private function, so it doesn't affect external code).

**[MODIFY] `SupplyPlanner.cpp`**
*   Modify `findTargetPatrol()`: implement multi-factor scoring.
*   Modify `planDay()`: pass the additional information into `findTargetPatrol()`.

> **NOTE**
> We need to pass `collectedBrands` and `remainingStock` from `Solver` to `SupplyPlanner`. There are 2 ways:
> *   **Way 1:** Add parameters to the `planDay()` signature (affects the call site in `Solver.cpp`).
> *   **Way 2:** Pass them through `config + allAgents` and calculate them internally.
>
> **Recommendation:** Way 1 — it is clearer and easier to debug. It only requires modifying 1 additional line in `Solver.cpp`.

---

# Phase 4: Dijkstra Fuel Calculation (LOW Priority)

## Issue
Dijkstra optimizes based on `travelTime` (steps) but does not account for fuel. A path taking 5 steps and 6 fuel (road + mountain) might be chosen over a path taking 6 steps and 3 fuel (plain).

## Solution
Add a `fuelWeight` parameter (default = 0.0) to `findPath()` and `computeSSSP()`.

```text
edge_weight = travelTime + fuelWeight × fuelCost
```

## Code Changes
**[MODIFY] `PathFinder.hpp`**
*   Add `double fuelWeight = 0.0` to the signature (default ensures backward compatibility).

**[MODIFY] `PathFinder.cpp`**
*   `runDijkstra()`: `newDist = dist[u] + travelTime + (int)(fuelWeight * fuelCost)`

---

# Phase 5: 2-Step Look-ahead (LOW Priority — Advanced)

## Solution
Before the Greedy loop, try evaluating all pairs (Spot1 → Spot2):
*   `FOR` each `spot1`: Calculate `score(spot1) + score(best spot2 from spot1)`
*   Choose the pair with the highest total score.

## Code Changes
**[MODIFY] `PatrolPlanner.cpp`**
*   Add a helper function `static int evaluatePairScore(...)` (private).
*   At the beginning of the Greedy loop: if there are enough steps/fuel remaining → try the look-ahead logic.

---

# Implementation Order

| Order | Phase | Difficulty | Build Break Risk | Impact |
| :--- | :--- | :--- | :--- | :--- |
| 0 | Fix build.bat | ⭐ Very Easy | None | 🔧 Fix current error |
| 1 | Multi-factor SpotScorer | ⭐ Easy | None (only modifies function body) | 🔥🔥🔥 |
| 2 | claimedSpots | ⭐⭐ Medium | Low (adds 1 trailing param) | 🔥🔥🔥 |
| 3 | Smart SupplyPlanner | ⭐⭐ Medium | Low | 🔥🔥 |
| 4 | Dijkstra fuelWeight | ⭐ Easy | None (default param) | 🔥 |
| 5 | Look-ahead | ⭐⭐⭐ Hard | None (adds new logic) | 🔥🔥 |
