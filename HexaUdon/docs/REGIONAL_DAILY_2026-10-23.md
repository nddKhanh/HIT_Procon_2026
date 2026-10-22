# 24x24: prepare the next day during Supply idle time

The previous 89/90 run missed brand 9 on day 4. One patrol entered that day with 13 fuel, collected only two brands, and ended with 4 fuel. Extending the current-day tour search alone still produced 17/18 on the captured state. Moving the Supply during its idle tail on day 3 produced full coverage on both remaining days in a separate replay.

## Implementation

Only the existing 24x24 wrapper calls `SupplyPlanner::prepareNextDay`. For each Supply, first try replacing only trailing waits. If this produces no accepted change, retain its route through the last effective refill (complete any crossing move) and try replacing the remaining unproductive movement too. Prefer the smaller idle-tail change to avoid unnecessary disruption to subsequent days. Target a patrol's final position using fuel deficit minus travel time, then move as far toward it as the idle time allows. Whole-fleet simulation must preserve today's collected brands, every patrol's final position and at least its former final fuel. Patrol actions are unchanged. Skip the final day and respect the live submission deadline. This is a bounded next-day heuristic, not an optimality proof.

Daily-first tour repair now also restarts after collections, trying later boundaries first. Each boundary gets at most 100 ms, within a 2-second patrol/target and the existing shared repair budget. This prevents the departure tour from exhausting the search window before later boundaries are tried.

## Validation

A new unit regression reproduces a route missing its tenth brand because the old departure-only tour exceeds its eight-brand ceiling. Another checks that a Supply refuels a stationary patrol without changing today's collections or patrol actions, removes unproductive movement after an earlier refill to reach a second patrol, and skips final-day repositioning.

The initial trailing-wait-only revision reached 90 with fixed formation but fell to 89 in an automatic run; it was extended to use the whole unproductive suffix.

The fixed-formation five-day sample_24.json replay with own-dynamic traffic and a 57-second live budget reached **18 Types / 90 Daily / 118 Servings**, compared with 18/89 before the change. The automatic-formation result is recorded in the checkpoint alongside the fixed-formation run. These are offline results on this fixture, not a guarantee for arbitrary 24x24 maps or server opponents.

Final auto-formation run: **18/90/118**, formation 43.64 s, slowest day 22.44 s, exit 0. [Checkpoint](checkpoints/2026-10-23-regional-full-daily.json) includes rejected intermediate runs as well as the baseline. The unrestricted suffix variant moved the missing Daily to day 3 and was rejected in favor of preferring an idle-tail change.

Reproduce with the benchmark executable:

```powershell
.\benchmark.exe --sample C:\Users\caida\Downloads\sample_24.json --auto-formation --own-traffic --live-budget-ms 57000 --at-least 18 90 0
```

Repeat automatic-formation validation also passed with **18/90/118**, formation 35.65 s. All unit tests passed (exit 0), including the compact-map regression and large-map reference bridge checks. No live match was launched.
