# Bounded fleet repair

`SupplyPlanner::repairCoverage` adds adaptive large-neighborhood search to the
existing C++ solver. It runs after the original candidate selection and bounded
path coverage pass, only when daily coverage is incomplete. Formation rollouts
and nested repair forecasts do not run this extra search.

## Search

- Four destruction operators retain a prefix ending at 0, 1/4, 1/2 or 3/4 of
  the day. A movement crossing the cut is cancelled, never split in transit.
- The shortened day is simulated to obtain actual positions, fuel, stock and
  collections. Previously visited spots remain visited, including empty spots.
- Regret ordering assigns scarce brands first. Compare the best and second-best
  feasible **Patrols**, considering every stocked spot of that brand. A brand
  reachable by only one Patrol receives priority; missing match types precede
  other daily brands.
- Rebuild all Patrol suffixes, then the Supply suffixes. The existing joint
  rendezvous repair extends Patrol routes after refueling. Every full-day
  candidate is validated by `MoveSimulator`.
- Alternate tie orders and leading regret targets. Successful destruction
  operators receive more trials; repeated candidate action lists are skipped.
- Keep only strict Types/Daily/Serving improvements. Never replace the
  incumbent solely because an equally scoring plan has different endpoints.

## Future days and time

A current-day gain can lose more Daily later. Before adopting a change outside
the final day, compare full continuations of the original and repaired plans
through the remaining match. Disable recursive fleet repair in these forecasts.
Keep the original plan if either forecast is incomplete, invalid or not better.

The additional search has at most 32 trials and a default 1,200 ms budget.
Search plus continuation validation uses a 3,000 ms budget and shares the live
submission deadline. Checks are cooperative between planner operations, so a
single operation can overrun slightly. These budgets do **not** cap the original
solver or formation search. No artificial minimum wait is introduced.

Two-player forecasts use the existing mirrored-occupancy assumption; matches
with more players hold observed traffic fixed. Opponent traffic remains unknown,
and finite search can miss good routes. This is not a proof of optimality or a
guarantee of full Daily on a live match.

## Checks

`test_adaptive_fleet_repair` covers scarce-brand assignment, stock limits,
refueling a stranded Patrol, preserving equal-score plans and expired budgets.
The recorded five-day routing regression still requires at least 56/60 Daily.

Measured on 2026-10-12, the 16-case suite with identical vehicle assignments:

| Mode | Total Types | Total Daily | Total Serving | Suite time |
|---|---:|---:|---:|---:|
| Repair disabled | 242 | 1005 | 1618 | 137.37 s |
| Repair enabled | 242 | 1011 | 1623 | 171.04 s |

All 16 cases retain or improve their official score tuple. These totals are
across separate matches, not a single-match score. The added suite time is
33.67 s over 80 planned days, about 0.42 s/day on this run. Timing and search
results can vary with machine load. The recorded ten-player fixture remains
12 Types / 56 Daily / 61 Serving; full 60 Daily has not been achieved.
The complete unit suite, including the new repair test, passes.

`sample_24.json` was also measured with four Patrols and the last agent as
Supply, starting at the supplied positions, with neutral traffic throughout.
Both modes score **18 Types / 84 of 90 Daily / 105 Serving**. Daily counts are
18, 17, 18, 15, 16. Total planning time was 56.02 s disabled and 60.34 s enabled
over five days. This is an offline scenario, not a replay of opponent actions;
this change has not improved that map or established its achievable optimum.

The benchmark can compare the identical suite with repair enabled or disabled:

```powershell
# From HIT_Procon_2026, after compiling tests/benchmark.cpp:
.\HexaUdon\.build\alns_benchmark.exe --coverage
.\HexaUdon\.build\alns_benchmark.exe --coverage --no-fleet-repair
# Optional single reproducible case:
.\HexaUdon\.build\alns_benchmark.exe --coverage 101
```

`Solver(false)` disables only this additional repair phase for A/B measurement.
The default constructor enables it. No external optimizer dependency is added.
