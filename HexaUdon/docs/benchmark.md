# Simulation verification and offline evaluation

Run from the repository root:

```powershell
cmd /c build.bat test
cmd /c build.bat
```

`MoveSimulator::simulateDay` is shared by production validation, candidate
ranking, formation rollouts and diary fuel output. Invalid results may contain
partial state/events: never score or carry them into another day.
`MatchScore` compares `(match brands, daily brands, servings)` lexicographically.

## Verified server replay

`tests/replay_5cc3b9ea.json` records the completed match
[5cc3b9ea-8134-4862-9874-5ddf1df4b046](https://procon26.haui.ac.vn/matches/5cc3b9ea-8134-4862-9874-5ddf1df4b046).
The source is the authenticated match response's accepted actions, history
states, stock, collected Udon and road conditions, not the browser animation.
No tokens, cookies or account identifiers are included. Field encodings:

- `traffic[day]`: non-smooth `[position, status]` pairs for that day.
- `teams[].kinds`: fixed vehicle types; initial positions/fuel come from config.
- `teams[].days[].agents`: expected end-of-day `[position, fuel]` pairs.
- `collections`: ordered `[agent index, brand]` pairs (this map has one spot per brand).
- `stock`: expected remaining quantities in config spot order.
- `occupancy`: expected road-position to occupied-step count for this team.
- `actions`: accepted action arrays; `score`: expected final score tuple.

`test_server_replay()` carries predicted positions/fuel forward, rather than
resetting them to each server snapshot. It checks both teams over seven days:
112 vehicle states, all 380 ordered collection events, remaining stock, road
occupancy, six next-day traffic transitions and final scores:

| Team | Match brands | Daily brands | Servings |
|---|---:|---:|---:|
| HaUI.Something | 20 | 135 | 204 |
| Chaosql | 20 | 134 | 176 |

The old simulator fails this replay (already on HaUI.Something day 2,
vehicle 4: predicts fuel 12 while the server records 22).

## Step semantics

1. Collect on initial spots in agent-index order.
2. Start ready actions; validate direction, passability, time and departure fuel.
3. Advance all actions by one step. Complete arrivals and charge their movement
   fuel. Movement time and fuel cost are determined by the departure terrain.
4. Collect on arrival, including the last boundary of the day; ties use agent
   index. Stock resets daily and a patrol collects at most once per spot/day.
5. Refuel patrols sharing the post-step discrete position with any supply.
   Neither vehicle needs to wait. This also happens at the final boundary.
6. Record fuel and road occupancy at the post-step positions. Vehicles in transit
   retain their source position until arrival. Initial boundary 0 is excluded
   from road occupancy; boundaries 1 through daySteps are included.

`fuelAtTime[agent][0]` is the supplied initial fuel; subsequent entries include
arrival debits and refueling. Short path `simulate()` is only a movement-prefix
budget helper: use `simulateDay()` to score a whole team's interacting actions.

`nextTraffic(config, previousDay, currentDay)` requires occupancy totals across
**all teams**, for the two most recently completed days. An empty previousDay
represents the first completed day. For each road cell, compare the sum against
`players * jammedThreshold`, then `players * busyThreshold` (inclusive). It does
not average over the number of days. All six recorded transitions match.

## Evaluating new algorithms

For an exact replay, supply the actual traffic snapshot for each day, or simulate
all teams and generate it with `nextTraffic`. Keep team stocks and refueling
separate. Carry predicted positions/fuel and accumulated score between days.
Use identical inputs and opponent policies when comparing algorithms. A changed
route can change future traffic, so replaying recorded future traffic while
changing your actions is a fixed-traffic experiment, not an exact counterfactual.

Formation selection now uses the official score tuple and advances traffic.
Because future opponent actions are unknown, it explicitly uses a scenario in
which opponents mirror its own occupancy; this assumption is logged and marked
with a `ponytail:` comment. It is not a guarantee of a real-match score.

The routing experiment now uses `tests/benchmark.cpp` as an offline comparison
runner: 3/2 supplies, fixed recorded/mirrored dynamic traffic, and start rotations
0/2 on the eight-agent replay map. It carries predicted states through seven days
and emits JSON scores, missing brands, waits and timings. These are controlled
scenarios, not a live-opponent win-rate measurement. Read
[the WIP checkpoint](CHECKPOINT_2026-09-22.md) before interpreting results.

```powershell
cmd /c build.bat benchmark
```

Previously documented synthetic baseline scores were produced with different
code and uncalibrated rules; they are not evidence for the current simulator.

## Coverage limits

The verified sample is one match with two teams, plain/road/mountain/pond terrain,
three traffic states, simultaneous arrivals and moving/final-step refueling.
Small regressions also pin arrival fuel timing, one-step road movement,
same-cell encounters versus edge swaps, stock limits and invalid actions.

We retain conservative departure-fuel validation: a future refill cannot fund
an otherwise invalid command. The accepted replay does not establish the server's
behavior for rejected plans or a synthetic zero-fuel patrol co-located with supply
at initial time 0. No special initial refueling is assumed. Add independent real
replays when available; matching this sample is not proof of every engine case.
