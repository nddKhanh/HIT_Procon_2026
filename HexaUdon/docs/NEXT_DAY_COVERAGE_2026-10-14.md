# Next-day starting coverage (2026-10-14)

Candidate scoring previously estimated tomorrow's reachable brand union and per-vehicle reachability, but did not distinguish routes ending on duplicate brands from routes ending on different stocked brands. Daily replenishment makes these endpoint brands collectible at the next day's start without spending travel steps.

The regional map profile now breaks equal reachable-union estimates by the number of distinct stocked brands at Patrol endpoints, then applies the existing reachability/readiness criteria. New match Types and current-day Daily remain ahead of the future-day estimate. This is a heuristic for future Daily, not a change to the official Types > cumulative Daily > Serving order or a proof of an optimal match score.

The selector uses the existing geometry/workload tiers from server configuration. There are no filename, match-ID, coordinate, or brand-ID checks. The preference is disabled in compact and large profiles, with map profiles disabled, and for the existing two-player policy. Final-day scoring has no future-day preference. Search time allowances are unchanged.

## Experiments

- Applying endpoint diversity to all profiles: sample 16 unchanged; sample 24 improved from 18/86/107 to 18/87/106; sample 32 regressed from 24/114/137 to 24/108/134. The unrestricted variant was rejected.
- Applying fastest-path coverage planning before the final day on compact maps: sample 16 remained 12/56/62. This additional change was removed.
- Retained: endpoint diversity only in the existing regional tier. Sample 24 gains one Daily at the cost of one Serving, which improves the official lexicographic score. This is evidence on supplied samples, not a guarantee for every regional map or live opponent scenario.

## Reproducible check

Compile `tests/benchmark.cpp` with the solver sources as described in `MAP_STRATEGIES.md`. From `HexaUdon`, the final local test executable supports:

```powershell
.\.build\branch_review\regional.exe --sample C:/Users/caida/Downloads/sample_16.json 2 --expect 12 56 62
.\.build\branch_review\regional.exe --sample C:/Users/caida/Downloads/sample_24.json 4 --expect 18 87 106
.\.build\branch_review\regional.exe --sample C:/Users/caida/Downloads/sample_32.json 6 --expect 24 114 137
```

`--expect Types Daily Serving` exits 4 if the measured whole-match tuple is lower. These runs use neutral traffic and fixed one-Supply assignments, identical to the prior comparison. They do not submit server actions. The map-profile unit check also verifies that the preference cannot spill into compact or large tiers.

## Final measured results

| Map | Types / Daily / Serving |
|---|---|
| 16 x 16 | 12 / 56 / 62 |
| 24 x 24 | 18 / 87 / 106 |
| 32 x 32 | 24 / 114 / 137 |

All three sample `--expect` checks pass. `HexaUdon.exe` was rebuilt and the `--help` smoke check passes. Other branch refs remain unchanged; work stays on Quan.
The full final unit suite also passes, including profile isolation and the compact five-day Daily regression.
