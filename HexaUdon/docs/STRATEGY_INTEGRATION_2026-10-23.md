# Shared strategy selection and ten-map replay

Changes on Quan build on commit `39a2709`. No other branch is modified.

`MapStrategy` now selects the existing policy components explicitly:

- Compact 16x16 forecasts remain available on sample16 and now also on C2.
  Forecasts screen future endpoints/fuel within the caller's live budget.
- The sample24 daily fleet/route repairs and next-day Supply preparation
  remain shared by all seven tournament profiles and the 24x24 sample.
- The sample32 endurance policy shares these same helpers, disables the
  native two-day lookahead, and retains its measured baseline budget.
  F1/F2 retain tournament-specific limits and their native large-map planner.
- A changed first-day plan invalidates its saved continuation before commit.
  Existing state/config/traffic checks still protect continuation reuse.
- A tournament's final day with missing coverage can use up to four seconds
  of remaining deadline for the ordinary insertion neighborhood, after the
  daily-focused repairs. Its score comparison still prioritizes Type/Daily;
  it is never run when coverage is already full.

These are bounded heuristic searches, not an optimality proof. A successful
current-day repair alone cannot establish improved whole-match coverage.
Concurrent timed runs showed different C3 and sample16 continuations. Serial
rechecks are recorded separately, without deleting the failed attempts. Do not
present a successful rerun as a guarantee that every run achieves the same score.

## Repeatable checks

`tests/run_strategy_suite.py` runs all seven new configurations plus the three
samples, records fixture SHA256, day scores and timings, and fails for missing
coverage targets. It never calls the server. Seven-map ceilings are derived
from each supplied config, not historical scores. Sample16's requested 58
Daily remains an explicit check rather than an assumed achievement.

The benchmark now parses optional `daySeconds`, matching the API client.
`test_benchmark_config.cpp` failed before this fix and passes afterward.

```powershell
python .\HexaUdon\tests\run_strategy_suite.py --binary .\HexaUdon\.build\integration_final.exe --fixtures C:\Users\caida\Downloads --output .\HexaUdon\.build\integration_after.json
```

This suite fixes fleet types to isolate routing changes. On the new maps,
some historical fleet sizes differ; V0 uses `00001` and F3 uses `10000`.
These are explicit replay choices, not verified optimal formations. Automatic
formation selection and opponent traffic require separate tests. Historical
server results are not direct before/after scores for the new `(1)` files.

## Measured results

Offline, fixed fleets. C3 and sample16 below use the serial recheck; all attempted results remain in `checkpoints/2026-10-23-strategy-integration.json`.

| Map | Type / Daily / Serving | Max day ms |
|---|---|---:|
| V0 | 16 / 96 / 116 | 7741 |
| C1 | 16 / 96 / 176 | 6391 |
| C2 | 13 / 91 / 116 | 13883 |
| C3 | 18 / 108 / 174 | 10062 |
| F1 | 20 / 160 / 210 | 14794 |
| F2 | 26 / 260 / 403 | 16558 |
| F3 | 14 / 56 / 123 | 3447 |
| sample16 | 12 / 58 / 64 | 50991 |
| sample24 | 18 / 90 / 118 | 16736 |
| sample32 | 24 / 119 / 161 | 37896 |

The first combined candidate suite failed its targets on C3 (107/108) and sample16 (57/60). Serial rechecks passed both targets. Therefore the integration is validated per fixture with recorded variability, not as a repeatability guarantee. The new C2 run increased Servings from 114 to 116 with full Type/Daily retained. Production executable was rebuilt; all unit tests and the final targeted checks passed. No server actions were submitted.
