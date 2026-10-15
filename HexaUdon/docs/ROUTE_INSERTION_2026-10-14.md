# Route insertion and final-day speed candidates

This extends all three map profiles without changing the official score order:
Types, Daily, Serving. No map coordinates or brand IDs are special-cased.

`PatrolPlanner::improveRoutes` inserts a stocked, unvisited spot between action
boundaries in an existing Patrol route. It uses spare trailing waits to fund the
detour, and evaluates the entire fleet again so shifted Supply encounters and
stock conflicts cannot silently invalidate the plan. Unit waits expose legal
departure times immediately after a refill. Candidates must strictly improve the
official daily score tuple. Before the last day, every vehicle must preserve its
ending position and at least its original ending fuel. On the last day, a Patrol
may replace its remaining wait with a one-way collection route.

The pass has eight accepted rounds at most, bridge lengths 0/1/2/4/8 actions,
and a cooperative time budget inherited from the map profile (1200/900/600 ms
for the supplied compact/medium/large examples). It shares the live deadline.
This is additional search, not a cap on the entire solver. It is disabled during
formation and fleet-repair continuations, and currently enabled for >2-player
matches; the existing two-player policy remains unchanged.

On the final day of these multiplayer matches, the bounded-path candidate also
tries a zero fuel-cost weight: choose faster paths while still enforcing actual
fuel limits. This is an alternative to the ordinary fuel-aware plan, not its
replacement. The full-day simulator's Types/Daily/Serving tuple decides whether
to accept it, including serving-only improvements when Daily is already full.

## Results

Same fixed teams and neutral traffic as the map-profile comparison:

| Sample | Types before/after | Daily before/after | Serving before/after |
|---|---:|---:|---:|
| 16 x 16, Supply index 2 | 12 / 12 | 56 / 56 | 61 / 62 |
| 24 x 24, Supply index 4 | 18 / 18 | 84 / 86 | 105 / 107 |
| 32 x 32, Supply index 6 | 24 / 24 | 114 / 114 | 135 / 137 |

The new unit test covers refueling, returning to the original endpoint with
preserved fuel, rejecting a fuel-consuming detour before the last day, final-day
one-way collection, stock limits and an expired deadline. The complete unit
suite passes; the five-day compact-map regression reports 12/56/62.
The final build also passes all 16 existing coverage benchmark score baselines
(`optimized_benchmark.exe --coverage`, exit 0).

An attempted expansion of exact-route enumeration to additional time-feasible
Pareto paths did not improve the compact score and was removed. Trial timing in
the checkpoint is diagnostic only, not a speed claim for the retained code.

These are feasible measured results, **not full Daily or proven maximum Serving**.
The remaining gaps are 4, 4 and 6 Daily respectively. Fixed endpoints/fuel do not
guarantee unchanged future traffic: detours can alter road occupancy, especially
with other teams. Unknown live traffic and different formations can produce
different scores. No live actions were submitted during these checks.
