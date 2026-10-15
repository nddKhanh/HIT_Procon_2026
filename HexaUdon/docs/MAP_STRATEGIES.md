# Automatic map strategies

The server config already supplies `map.width`, `map.height`, `cells`, `spots`,
`agents`, `fuelLimits` and `daySteps`. `MapStrategy::select` uses those fields;
there is no filename, match-ID or brand-ID lookup. `main.cpp` logs the selected
profile after fetching the config, and `Solver::solve` uses it for live and local
planning. Formation rollouts use the same default profile selection.

## Supplied maps

| File | Dimensions | Spots / brands | Vehicles | Fuel | Steps per day | Daily ceiling |
|---|---|---|---|---|---|---|
| sample_16.json | 16 x 16 | 16 / 12 | 4 | 40 | 32,36,40,40,48 | 60 |
| sample_24.json | 24 x 24 | 24 / 18 | 5 | 80 | 48,56,68,68,72 | 90 |
| sample_32.json | 32 x 32 | 32 / 24 | 7 | 120 | 64,76,88,88,100 | 120 |

`match_058c_config.json` is rectangular (16 x 17), with 10 spots, 5 vehicles,
fuel 69 and daily step budgets 33,55,77,99. Dimensions must not be inferred from
a filename or assumed square. Daily ceiling counts distinct brands times days;
it is an arithmetic ceiling, not a feasibility guarantee.

## Policies

- **compact-exact**: longest side <=16, <=18 spots, <=6 initial vehicles.
  Preserve exact per-Patrol route-mask combination when the existing feasibility
  gates allow it (2–3 Patrols, <=20 brands, multiplayer). Other team sizes still
  use the normal coordinated planner. Adaptive repair gets 1,200 ms.
- **regional-repair**: longest side <=24, <=24 spots, <=6 initial vehicles,
  outside the compact tier. Use the existing soft-region candidates when each
  Patrol has more than four spots on average, first-brand matching and shared
  refueling. Skip exponential exact enumeration; adaptive repair gets 900 ms.
- **large-bounded**: longer side >24, >24 spots or >6 initial vehicles. Limit
  route-order candidates to 16, retain soft regions and Supply repair, and give
  adaptive repair 600 ms. Cache and full-team validation are shared with the
  other profiles.

When fuel is below the shortest day's step budget, retain 1,200 ms for refueling
repair regardless of tier. This is a workload heuristic, not a fuel-feasibility
proof: terrain-dependent travel time and fuel are still checked by the planner
and simulator. The profile does not force a fixed Supply count or rigid zones.

No change to official Types > cumulative Daily > Serving priorities. Existing
incumbents, deadline checks and future-day validation remain. Budgets above cap
only the extra repair phase, not total planning time. The three-second repair
and forecast envelope remains cooperative; individual operations can overrun.

## Measured results (2026-10-14)

Neutral traffic, identical fixed teams, five days. Scores are Types/Daily/Serving.

| Map | Legacy score | Automatic score | Legacy total time | Automatic total time |
|---|---|---|---|---|
| 16 x 16 | 12/56/61 | 12/56/61 | 19.90 s | 14.73 s |
| 24 x 24 | 18/84/105 | 18/84/105 | 58.81 s | 58.06 s |
| 32 x 32 | 24/114/135 | 24/114/135 | 115.88 s | 105.67 s |

These are single sequential measurements, not statistically established speedups.
In particular, the compact map's search parameters are unchanged; its timing
difference demonstrates runtime variability. There is **no observed Daily gain**
on these three maps. The large profile reduces search breadth and retained the
same score in this test; this does not guarantee equal scores on unseen maps.
Unit tests passed, including profile boundaries, rectangles, heavy teams, fuel
pressure and the existing five-day coverage regression. Full per-day results
and input hashes are stored in `checkpoints/2026-10-14-map-strategies.json`.
The additional 16-case coverage suite passed every existing score baseline:
aggregate Types/Daily/Serving = 242/1011/1626. Those totals span separate matches
and should not be interpreted as a single-map score or a guaranteed improvement.

## Reproducing comparisons

Build `tests/benchmark.cpp` with the normal solver sources as
`.build/map_benchmark.exe`. From `HexaUdon`:

```powershell
.\.build\map_benchmark.exe --sample C:\Users\caida\Downloads\sample_16.json 2 --legacy
.\.build\map_benchmark.exe --sample C:\Users\caida\Downloads\sample_16.json 2
.\.build\map_benchmark.exe --sample C:\Users\caida\Downloads\sample_24.json 4 --legacy
.\.build\map_benchmark.exe --sample C:\Users\caida\Downloads\sample_24.json 4
.\.build\map_benchmark.exe --sample C:\Users\caida\Downloads\sample_32.json 6 --legacy
.\.build\map_benchmark.exe --sample C:\Users\caida\Downloads\sample_32.json 6
```

The integer selects the Supply index (all other vehicles are Patrols). Each
comparison fixes vehicle types and neutral traffic for all five days, excluding
formation selection and unknown opponent actions. `--legacy` disables profile
tuning but retains the previous fleet repair. `Solver(true, false)` provides
the same switch in C++ tests. Re-run with actual traffic before attributing live
match improvements to the profile.
