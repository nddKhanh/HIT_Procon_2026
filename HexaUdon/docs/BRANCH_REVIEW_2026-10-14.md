# Branch review and final-day suffix rebuilding (2026-10-14)

Reviewed locally available refs using `git show`; no fetch, checkout, merge, or source-branch writes. Local and remote-tracking Khanh refs differ. Existing uncommitted Quan changes were preserved.

| Ref | Commit |
|---|---|
| Quan | `67856c3b15df27228aa706b05a207c9705bb226b` |
| dev | `c67e3d72cfbdddc8d824848093ee41a146f13681` |
| main | `10c8cc8d1eb302bc91db0335d10ab4b196e50b1f` |
| khanh | `9093a9537493327ac9663fa80b8ae00fcf80a512` |
| khanh_backup | `d7ef079e88c9b86542d65fa8e4c253f9088ba5f2` |
| origin/khanh | `a41b875196304f77f75cc15a5c83ab71069a1a2e` |
| origin/khanh_backup | `73aac2c3bc0e7bac32bf4a2a9689834be9a77830` |
| origin/Quan_backup | `c9fc7591f8ebddfbeb4cc8a11e97a85817520330` |

## Strategy comparison

| Source | Relevant logic | Decision |
|---|---|
| main | Starter movement and basic path search | Current simulator and constrained path search supersede it. |
| dev | Greedy spot chaining, Supply rendezvous, daily state reset | Already present with stronger simulation and transactional plan commit in Quan. |
| khanh | Global first-target assignment, Patrol order permutations, refuel suffixes | Already present; retain Quan's brand-aware matching and time/fuel path constraints. |
| khanh_backup | Travel-cost k-medoids, load balancing, open-TSP per cluster, persistent route cursors | Read but not imported: fixed regions/cursors can outlive current stock, traffic and refueling opportunities. No measured claim that clustering is worse on all maps. |
| origin/khanh_backup | Joint first-target pairs, missing-brand detours, tail repair | Quan already has pair forcing, bounded route insertion and fleet repair. |
| origin/khanh | Rebuild tail with a forced target, then greedy continuation; two traffic forecasts; 55-second formation budget | Adapt suffix rebuilding only. Keep current formation timing and future-Daily policy. Also inspected the alternate HexaUdon2 implementation. |
| origin/Quan_backup | Formation assignment candidates, soft regions, moving rendezvous, next-day ties | Already represented in current Quan. |

## Integrated change

`PatrolPlanner::improveRoutes` now uses any time left in its existing repair budget to rebuild final-day Patrol suffixes. It tests departure and the last 12 action boundaries, forces an available target, then reuses `planDay` for the continuation. The full fleet simulator accepts only a strict improvement in (new match types, daily types, servings).

Unlike the source implementation, each trial receives fresh copies of mutable stock/visited/brand sets. Other vehicles' planned collections reserve stock, empty visited spots are also remembered, and whole-fleet simulation validates actual collection and refueling. Only the final day is eligible: earlier daily choices and future fuel/endpoints retain their existing behavior.

The addition shares the insertion deadline; it does not introduce another time allowance. Time is checked between candidates, so an individual path/planner/simulation call may overrun the soft deadline. No claim of a hard real-time bound or global optimum.

## Path-cache reuse

The candidate evaluator previously recomputed the same single-source search for tomorrow's reachable brands on every route candidate. It now reuses the existing per-solve `PathCache`, keyed by source position, fuel and weight. The map traffic is updated before that cache is constructed, and the cache does not survive to the next day. This extends the cache usage already found in Khanh's matching and planning code; it changes no path cost or score formula. Existing Pareto/cache and whole-match tests cover the reused helper.

## Validation

`test_final_day_suffix_rebuild` exercises a no-wait route toward a duplicate brand. Rebuilding gets 3 brands/3 servings instead of 1 brand/2 servings. Zero budget and a pre-final day preserve the original plan. The full existing unit suite passes.

Sample benchmark: neutral traffic, fixed one-Supply fleets (indices 2, 4, 6). This does not model opponents or prove live-match scores. The final executable retains the previous scores on all three samples:

| Sample | Before Types / Daily / Serving | After Types / Daily / Serving |
|---|---|---|
| 16 x 16 | 12 / 56 / 62 | 12 / 56 / 62 |
| 24 x 24 | 18 / 86 / 107 | 18 / 86 / 107 |
| 32 x 32 | 24 / 114 / 137 | 24 / 114 / 137 |

These sample scores did not improve with this integration. The suffix operator's demonstrated gain is the focused regression case, not a claim of improved live Daily. Timing runs overlapped other local work, so no speedup ratio is claimed.

`HexaUdon.exe` was rebuilt with the final sources and `--help` exits successfully. No live match actions were submitted.

Final validation: all unit tests pass; all 16 `--coverage` cases meet their tracked score baselines (exit 0); `git diff --check` passes. Reviewed branch refs were rechecked unchanged and the active branch remains `Quan`.
