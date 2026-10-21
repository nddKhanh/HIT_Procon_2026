# Large-map route policy from khanh

Source: `origin/khanh` at `30c8e77b5c8ff219212e5d8a44c0650a6d8ca38e`.
The source branch was read through git only and was never checked out or changed.

## Why the whole route policy

Partial traceback integration reached 24/118/137 in an earlier neutral sample
replay, but Quan's reported server result remained 117 Daily. These are different
measurements. The requested server target is full Types, at least 118 Daily and
at least 157 Servings.

Changing Quan's large-map candidate ranking to put Servings before estimated
next-day coverage yielded only 24/117/152. Adding tail substitutions yielded
24/117/155. Both experiments were rejected. The unchanged reference route stack
reproduced 24/118/158 on the same sample and fleet.

The retained implementation copies the reference Solver, PatrolPlanner,
SupplyPlanner and PathFinder into `solver/khanh`, with isolated C++ symbols.
The reference formation selector is also reused with a caller-supplied cap of
at most 57 seconds and the reference reserve for a future official start.
It reuses Quan's Map, GameConfig and
MoveSimulator. Ordinary candidate ranking, two-stop routing, moving refuels,
tail substitutions and endpoint forecasts remain together as in the reference.
Preserving their interaction avoids another unverified hybrid.

`Solver::solve` selects this policy for multiplayer maps over 600 cells when
map strategies, fleet repair and full expansion are enabled. Small/medium maps
retain Quan's existing policy. The large-map selector now evaluates placements
with the same reference route policy: the old reduced Quan selector otherwise
chose a different fleet and lost the target score. Even the reference's short
congested rollouts misranked the two placements on this machine. For each Supply
count, the retained selector therefore chooses the best reachable-brand/stock/
travel assignment by branch-and-bound and validates that placement in the
rollout, instead of overriding it using the short rollout's score. This is a
generic placement heuristic, with no fixed vehicle indices or match-specific
routes. It does not prove a globally optimal fleet on unseen maps. The policy gets
the confirmed brands and returns pending brands plus all route metadata;
Quan still commits only after server acceptance and can discard/retry a plan.
The entry-point deadline guard and caller-provided daily deadline are retained.
Formation still uses its existing maximum 57-second allowance. No API actions
are submitted by the benchmarks.

## Reproducible target check

The local sample equals `origin/khanh:example/sample_32.json` as parsed JSON.
Fixed fleet: `0001001` (P P P R P P R). Per-day maximum: 57000 ms.
Neutral traffic means no generated traffic is applied between days; it is not a
dynamic-traffic or server replay. This corrects an earlier report's description
of the sample benchmark as applying own traffic by default.

```powershell
# After compiling tests/benchmark.cpp with the same core sources as build.bat:
& .\HexaUdon\.build\benchmark.exe --sample 'C:/Users/caida/Downloads/sample_32.json' --types 0001001 --live-budget-ms 57000 --at-least 24 118 157
```

`--at-least` checks all three components independently, so 24/119/150 fails the
Serving requirement. Existing `--expect` keeps lexicographic score checking.
`--own-traffic` applies next-day traffic from the team's simulated occupancy;
`--mirrored-traffic` additionally scales occupancy by player count.

| Neutral sample | Types | Daily | Servings |
|---|---:|---:|---:|
| Native origin/khanh reference | 24 | 118 | 158 |
| Integrated Quan route policy | 24 | 118 | 158 |

With `--own-traffic`, the integrated policy reaches **24/118/157**. Per-day
Daily/Servings: **23/27, 23/32, 24/32, 24/29, 24/37**, matching the supplied
server scoreboard. The slowest daily solve in this run was 28.9 seconds on the
test machine, below the requested 57-second maximum. This is a replay result,
not a newly submitted server match.

The final end-to-end replay also passes `--auto-formation --formation-budget-ms
57000 --live-budget-ms 57000 --own-traffic --at-least 24 118 157`.
It selects `0001001` in 20721.7 ms and reaches the same 24/118/157 without a
manually forced fleet. The longest daily solve in that run is 27714.1 ms.

The integrated per-day Daily is 23,23,24,24,24. This is not a guarantee of the
same server score: GET config for match `202e5184-3b81-4640-9134-ea2acc3154e4`
returned HTTP 403 with the available token. No server state/action was changed.

The bridge regression compares actions and diary metadata to the reference
through retries, discards, commits and two days. The ordinary unit and coverage
suites remain the checks for the existing smaller-map policies.

Final validation: all unit tests passed, including the bridge and short-budget
formation regression. All 16 coverage cases passed their tracked score floors.
Sample/formation/coverage outputs, including the rejected lineup trials, are
saved in `checkpoints/2026-10-21-large-map-reference.json`.
