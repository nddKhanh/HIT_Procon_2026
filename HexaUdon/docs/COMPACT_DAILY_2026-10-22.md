# Compact daily coverage experiment

Scope: the existing multiplayer 16x16 policy on Quan. The 24x24 and 32x32
dispatch conditions are unchanged. No edits to another branch.

The requested target is full Type and full Daily (12/60 on sample_16), without
requiring a Serving minimum. This target has **not** been achieved: repeated
fixed-fleet own-traffic simulations improved from 12/56 to 12/57, with daily
counts 12, 11, 11, 12, 11. These are offline results, not server scores.

The existing endpoint search now runs for 16x16. It screens distinct fleet
endpoints with a short next-day forecast and verifies finalists across the
remaining match. Verification compares Type then Daily; Serving cannot justify
switching continuations. Search shares the caller deadline and retains a valid
incumbent when a forecast does not complete.

Verified future actions are retained only after commitLastPlan. Reuse checks
configuration, day, vehicle kinds, positions, fuel and every traffic cell, and
simulates the candidate again. discardLastPlan does not commit speculative
routes. If final selection changes the first action plan, its saved continuation
is discarded. A higher current Type/Daily plan can still replace a saved plan.

Limitations: future opponent traffic is unknown; forecasts hold observed traffic
constant, so this is a heuristic, not a proof of optimality or a no-regression
guarantee on other configurations. The endpoint beam and per-day forecast budgets
remain bounded. Do not describe this version as achieving full Daily.

Rejected experiments: preferring remaining fuel over servings reduced the sample
to 53 Daily; stopping patrols when their next brand was already collected reduced
it to 52. Those changes were reverted.

Validation entry points:

```powershell
cmd /c build.bat test
# Compile tests/benchmark.cpp with the same core sources as build.bat, then:
benchmark.exe --sample C:/Users/caida/Downloads/sample_16.json --auto-formation --formation-budget-ms 57000 --own-traffic --live-budget-ms 57000 --at-least 12 57 0
# Explicit full-daily target; expected to fail until the remaining gap is solved:
benchmark.exe --sample C:/Users/caida/Downloads/sample_16.json --types 0010 --own-traffic --live-budget-ms 57000 --at-least 12 60 0
```
