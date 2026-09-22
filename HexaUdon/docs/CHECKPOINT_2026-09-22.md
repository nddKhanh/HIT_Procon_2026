# Checkpoint 2026-09-22 — simulator verified, routing improvements WIP

## Read this first next session

User requested a pause/checkpoint while implementing five improvements. Do not
interpret this checkpoint as a finished or production-approved routing policy.
No live match actions were submitted. `.env` and credentials must stay private.

Original request: (1) multiple supply rendezvous/day, (2) reject meetings without
temporal overlap, (3) assign daily responsibility for missed brands such as B5
and consider previous-day finishing positions, (4) choose rescues by time saved
and achievable score, (5) then compare 5 Patrol + 3 Supply versus 6 Patrol + 2 Supply.
Continue until those improvements are tested and evaluated; no new confirmation
is needed for local implementation, tests or offline experiments.

Read `AGENTS.md`, this file and `docs/CODEBASE_CONTEXT.md`; inspect `git status`
before editing. Existing simulator changes from the previous task are intentional.
Do not revert them when investigating routing regressions.

## Completed simulator foundation

- `MoveSimulator::simulateDay` matches both teams' server histories in
  `tests/replay_5cc3b9ea.json`: 14 team-days, 112 end states, 380 ordered collection
  events, stocks and road occupancy. Scores: HaUI.Something `(20,135,204)` and
  Chaosql `(20,134,176)`.
- Fuel is debited on arrival; refill all same-cell patrols after each step,
  including moving vehicles and final boundary. Initial spot collections occur.
- `nextTraffic` uses total occupancy across all teams from the last two days;
  thresholds are multiplied by player count. Six recorded transitions match.
- Validation, diary and solver share that simulation. Invalid diary simulations
  show an error and raw actions rather than invented fuel predictions.
- Formation rollout advances traffic and ranks the official lexicographic score.
  Unknown opponents explicitly mirror own occupancy; this is a scenario, not a
  prediction guaranteed to match a live opponent.
- Before the routing changes, the entire unit suite and app build passed.

## Routing code currently implemented

1. `DaySimulation.positionsAtTime` exposes canonical discrete positions alongside
   fuel; it is populated by the existing simulator, not a second timing model.
2. `SupplyPlanner::improveDay` starts from a valid complete plan. It considers
   leaving a supply's wait at its start or after a real refuel encounter, reaching
   a waiting patrol, and regenerating that patrol's suffix with `PatrolPlanner`.
   Each proposed joint plan is simulated before acceptance.
   - Shortlist priority: new-match-brand potential, missing daily-brand potential,
     reachable stock, saved waiting time, shorter supply travel.
   - Acceptance: actual new match brands, daily brands, servings, then final
     patrol fuel. This does not guarantee multi-day improvement.
   - Search ceiling: 24 meetings/round, at most `2 * agentCount` rounds, honoring
     the supplied deadline. Marked `ponytail:` in source.
   - It copies the map and applies `state.traffics`; this fixed a real stale-map
     issue exposed when using the replay test's unmodified input map.
3. `SupplyPlanner::planDay` now ranks extension potential and usable time before
   deficit. Removed fallback chasing patrol initial positions and arbitrary
   supply wandering; no feasible meeting means a full-day wait.
   `findTargetPatrol` remains present but is now used only by older tests.
4. `Solver::solve` evaluates additional candidates giving one named patrol the
   first visit to a still-missing brand. It tries reachable patrols and replans
   others after the responsible patrol. Generic brand handling; no B5 constant.
5. After candidate selection, Solver applies the joint supply repair once.
   Metadata for changed routes is reconstructed from actual actions. Multi-stop
   supplies use supported patrol `-1` rather than misleadingly naming one patrol
   for every step. Pending brands are recomputed from the repaired simulation.

**Not implemented yet:** explicit previous-day endpoint/two-day lookahead for
daily brand coverage; final formation decision based on the finished policy;
broader regression fixes and final benchmark acceptance.

## Most recent verification — important

The latest `cmd /c build.bat test` compiled, then:

- Passed server replay and simulator step-boundary tests.
- Passed new day-4 rescue check inside `test_server_replay`:
  original 27 servings -> **32 servings**, with no loss in daily brand count.
  Supply #5 action list became `[5,-9,1,1,2,-26]`. The test explicitly observes
  #5 refueling #2 and then #0 before step 30 (old #0 refill was near day end).
- Passed diary checks, formation check and `test_joint_simulator`.
- **FAILED** `test_joint_refuel_extends_patrol_route`, currently around line 773:
  `assert(day.valid && day.refuels == 1)`.
  The preceding `ActionValidator::validate(...)` passed. Inspect actual actions,
  refuel events/count and resulting collections/fuel before changing this older
  single-refill expectation. Do not blindly loosen assertions to get green.
- Later tests have not run in this revision. Old assertions also expect supplies
  to chase an unreachable patrol or select the largest deficit; reassess against
  the new intended behavior and replace them with meaningful checks.
- **Build script issue:** the command tool reported exit code 0 despite the
  assertion failure. Fix `build.bat test` failure propagation (or run the test
  executable directly) before trusting command status in future automation.

An optimized `HexaUdon/.build/routing_current.exe` compiled successfully with the
latest missing-brand candidate and stale-map fix. **It has not yet been run.**
The existing `HexaUdon/HexaUdon.exe` is the last simulator-only app build, not the
new routing implementation. Do not run it expecting current source behavior.

## Recorded benchmark checkpoints

`tests/benchmark.cpp` was replaced with a deterministic, offline JSON runner.
It runs 8 seven-day scenarios: start rotation 0/2, fixed recorded versus mirrored
dynamic traffic, and 3/2 supplies. All start positions and predicted fuel/positions
carry through the match. It reports daily missing brands, waits, score and time.
It never calls a game API. Current corpus assumes the recorded eight-agent map.

`docs/checkpoints/2026-09-22-routing-baseline.json` is the calibrated simulator
with the routing policy BEFORE this task. `...-routing-supply-stage.json` is the
first supply policy experiment BEFORE daily missing-brand candidates and before
the stale-map fix. Do not label it the result of current source.

| Start shift | Traffic | Supplies | Baseline score | Early supply-stage score |
|---:|---|---:|---|---|
| 0 | fixed recorded | 3 | 20/135/204 | 20/130/188 |
| 0 | fixed recorded | 2 | 20/135/191 | 20/139/245 |
| 0 | mirrored dynamic | 3 | 20/136/203 | 20/134/200 |
| 0 | mirrored dynamic | 2 | 20/130/183 | 20/136/229 |
| 2 | fixed recorded | 3 | 20/134/180 | 20/133/193 |
| 2 | fixed recorded | 2 | 20/134/231 | 20/136/227 |
| 2 | mirrored dynamic | 3 | 20/133/208 | 20/134/195 |
| 2 | mirrored dynamic | 2 | 20/134/212 | 20/136/222 |

The supply experiment has regressions, especially with 3 supplies. It is not a
final improvement. Some candidates that improve today harm later starting fuel,
coverage or traffic. Baseline timings were roughly 0.50–0.65 seconds/match with
`-O2`; early supply-stage roughly 0.45–0.56 seconds/match on this machine.

Local scratch backups (untracked; retained for the next session):
`HexaUdon/.build/{Solver,SupplyPlanner,benchmark,test_all}_before_routing.cpp`.
Local executables: `routing_baseline.exe` (baseline policy), `routing_current.exe`
(latest source). JSON snapshots in `.build` duplicate the tracked evidence above.
Do not commit credentials or generated executables. Normal `build.bat` deletes
`.build/*.exe`, so preserve any executable still needed before an app build.

## Next actions, in order

1. Inspect the failed one-refill test and fix test-runner failure exit status.
   Run remaining tests; review obsolete behavior assertions, preserving physical
   simulator regressions and recorded replay checks unchanged.
2. Run the already compiled latest benchmark and compare all eight scenarios
   with the tracked baseline; inspect daily missing brands, especially B5.
3. Finish generic daily brand responsibility and previous-day endpoint planning.
   Prefer bounded lookahead or measured candidate preservation over hardcoding
   B5/this map. Keep candidates validated by canonical simulation.
4. Revisit shortlist/acceptance and initial supply choices where multi-day score
   regresses. Add an explicit day-1 stale-target/no-temporal-overlap regression;
   day-4 multi-stop rescue is already passing.
5. Only after policy evaluation, compare 5P+3S and 6P+2S. Do not infer a winner
   solely from supply wait totals or this early experimental table.
6. Update docs (some routing descriptions outside this checkpoint still describe
   the old one-stop policy), run full tests and app build, then report measured
   benefits and scenario limitations. No live deployment was requested.

## Commands

```powershell
# Latest compiled experiment, no source changes needed to run it:
& HexaUdon/.build/routing_current.exe > HexaUdon/.build/routing_latest.json

# Standard suite (inspect assertion output until exit-code issue is fixed):
cmd /c build.bat test

# Recompile the benchmark with current code and run default eight scenarios:
cmd /c build.bat benchmark

# Final app build, only after retaining any .build executables needed:
cmd /c build.bat
git diff --check
```
