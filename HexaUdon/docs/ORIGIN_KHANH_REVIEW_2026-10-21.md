# Selective integration from origin/khanh

Historical partial-integration report. The subsequent large-map implementation
and end-to-end 24/118/157 replay are documented in
[LARGE_MAP_REFERENCE_POLICY.md](LARGE_MAP_REFERENCE_POLICY.md).

Reference: `30c8e77b5c8ff219212e5d8a44c0650a6d8ca38e`, fetched from origin.
Read with `git show` and `git diff`; no checkout, merge, commit or push to khanh.
Work stays on Quan. Existing formation changes and local .env edits are preserved.

## Finding and change

Khanh initializes all matching traceback carry entries before relaxing transitions.
Quan's distance-based first-wave matching initialized them inside the transition
loop. A later mask could overwrite a newly improved parent. A two-Patrol case
selected spots `[1,0]` although the cheapest distinct assignment was `[1,2]`.
The focused test failed before the change and passes with stable traceback.

Replacing this policy everywhere was rejected: neutral full-match replays with
10 seconds per day changed sample16 from 12/56/62 to 12/54/59 and sample24 from
18/86/106 to 18/86/100. Correct local matching changes future fuel and traffic;
it does not by itself optimize a full match.

The retained policy uses stable traceback for multiplayer large-map primary
search (over 600 cells, map strategies enabled). Formation's shortened solvers
and reduced forecasts retain the previous policy. On smaller maps the previous
policy remains incumbent; on the final day an additional stable-traceback plan
can win only through a strict whole-fleet Type/Daily/Serving improvement.
This is a measured heuristic, not a proof of optimality for unseen maps.

## Offline comparison

Same configuration, fixed fleet, neutral traffic without generated next-day traffic,
and per-day time allowance in each pair. Baseline is the working source at task
start, including the user's existing edits. Runs were sequential. Timing is
cooperative and hardware dependent; these are not server match results.

| Map | Fleet | Budget/day | Before Type/Daily/Serving | Final Type/Daily/Serving |
|---|---|---|---|---|
| 16x16 | 0010 | 10s | 12/56/62 | 12/56/62 |
| 24x24 | 00001 | 10s | 18/86/106 | 18/86/106 |
| 32x32 | 0001001 | 57s | 24/117/140 | 24/118/137 |

The 32x32 gain is one Daily at the cost of three Servings, an improvement under
lexicographic scoring. No claim of full Daily or a guaranteed live score.
The standalone global replacement also improved 32x32 at 10s/day from
24/115/144 to 24/117/136, but was rejected for small-map regressions.

## Focused regression command

From the repository root, in PowerShell (do not also compile Solver.cpp; the
white-box test includes it to test the internal matching helper):

```powershell
g++ -std=c++17 -O2 -IHexaUdon/include -IHexaUdon/third_party HexaUdon/tests/test_first_assignment.cpp HexaUdon/src/map/Map.cpp HexaUdon/src/solver/PathFinder.cpp HexaUdon/src/solver/PatrolPlanner.cpp HexaUdon/src/solver/SupplyPlanner.cpp HexaUdon/src/solver/MoveSimulator.cpp HexaUdon/src/solver/SpotScorer.cpp HexaUdon/src/solver/khanh/Solver.cpp HexaUdon/src/solver/khanh/PatrolPlanner.cpp HexaUdon/src/solver/khanh/SupplyPlanner.cpp HexaUdon/src/solver/khanh/PathFinder.cpp -o HexaUdon/.build/test_first_assignment.exe
& .\HexaUdon\.build\test_first_assignment.exe
```

Full suite: `cmd /c build.bat test`. Coverage replay: compile the existing
`tests/benchmark.cpp` and run `--coverage`.

Final source validation: focused regression passed, full unit suite passed,
and all 16 coverage fixtures met their tracked score floors. Per-day sample
results, rejected trial results and coverage scores are saved in
`checkpoints/2026-10-21-khanh-integration.json`.
