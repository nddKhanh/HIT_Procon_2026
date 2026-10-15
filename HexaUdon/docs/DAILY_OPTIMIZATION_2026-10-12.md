# Daily coverage optimization — 2026-10-12

The contest statement in `Đề bài/Đề thi Procon_Tiếng Việt.pdf` orders results by
match types, cumulative daily types, servings, then response time. All comparisons
below use that lexicographic order. None are live-server results.

## Changes

- Retain active Pareto path labels and allow `extractPath(goal, maxSteps)` to
  select a faster, fuel-feasible path when the weighted-best path is too slow.
  The ordinary weighted-path behavior remains the default.
- When the existing plan has incomplete daily coverage and search time remains,
  search a second policy with time-bounded paths. Compare first-wave brand matching
  with unrestricted first targets, and add pair-swapped patrol orders for larger
  fleets. Three-target lookahead is also available for eight-agent teams in this
  coverage pass, up to the existing 24-spot limit.
- Simulate both complete plans. Adopt the new plan only for a strict improvement
  in `(new match types, daily types)` today. Copy the winning solver's pending
  state and metadata, then retain the existing commit-after-acceptance protocol.
- Preserve the existing guarded two-day forecast. Once its cumulative Daily rank
  covers at least a full day of map types, do not reopen it for a single-day gain.
  Removing this guard improved some individual days but regressed later coverage
  in the synthetic suite.
- Preserve the complete earlier policy as the fallback. Additional search shares
  the existing live deadline and stops generating candidates before `endsAt - 750ms`.
  Deadline checks remain between candidates, not inside every pathfinding call.

## Reproducible checks

From the repository root on the supported Windows build:

```bat
build.bat test
build.bat benchmark --check
build.bat benchmark --coverage
build.bat
```

The core can also be checked on Linux without WinINet:

```bash
g++ -std=c++17 -O2 -IHexaUdon/include -IHexaUdon/third_party \
  HexaUdon/tests/test_all.cpp HexaUdon/src/map/Map.cpp \
  HexaUdon/src/solver/*.cpp HexaUdon/src/io/DiaryWriter.cpp -o /tmp/procon-tests
/tmp/procon-tests

g++ -std=c++17 -O2 -IHexaUdon/include -IHexaUdon/third_party \
  HexaUdon/tests/benchmark.cpp HexaUdon/src/map/Map.cpp \
  HexaUdon/src/solver/*.cpp HexaUdon/src/io/DiaryWriter.cpp -o /tmp/procon-benchmark
/tmp/procon-benchmark --check
/tmp/procon-benchmark --coverage
```

The existing fuel-validation test had an uninitialized `fuelLimit`; initialize
its config and explicitly set the two-unit limit. Also correct the Windows-only
backslash include so the tests compile on Linux. The new path regression checks
simultaneous fuel/time constraints, reconstructed movement, impossible budgets,
and the zero-length route.

## Results and limits

Raw before/after scores, daily breakdowns and timings are retained in
[`checkpoints/2026-10-12-daily-coverage.json`](checkpoints/2026-10-12-daily-coverage.json).

The 16 stored synthetic cases cover 3/4/6 agents, 8×8/12×12/16×16 maps,
12–28 fuel units, five days of 14–32 steps, varying stocks, repeated brands,
plain/road/mountain terrain and mirrored dynamic congestion. Configurations and
fixed vehicle types are stored in `tests/coverage_cases.json`, together with
before/expected score tuples. The benchmark carries position, fuel, stock,
collection history and two-day traffic occupancy through every day.

Across these cases, total Daily rises from **988 to 1005**, servings from
**1600 to 1618**, and total match-type counts remain **242**. No case falls below
its original official score tuple. Individual Daily gains include 37→51,
56→57 and 67→69. These totals span separate matches; 242 is not a full-type
percentage. Vehicle selection is held fixed to isolate routing changes.

On the eight replay-based scenarios, both shift-0 three-Supply cases improve
**20/139 → 20/140** in Types/Daily, reaching full daily coverage. The four
existing two-Supply cases retain **20/140**. The two shift-2 three-Supply cases
remain **20/139**. All scenarios meet the earlier official-score baseline. The
tracked baseline now also requires the two new 140-Daily results.

The ten-player fixture remains **12/55/66**, with a Daily ceiling of 60;
this optimization does not solve that remaining gap. There is no proof of global
optimality or a guarantee of full Daily on unseen maps. Some valid configurations
cannot reach every brand within a day's step/fuel budget even when all brands can
be collected across the whole match. Opponent-dependent future traffic is also
unknown. Production API code is Windows/WinINet-based; Linux verification here
covers the solver, simulator and benchmarks, not a Windows executable or live submission.
