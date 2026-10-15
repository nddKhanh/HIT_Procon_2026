# Live planning deadline on large maps (2026-10-14)

## Update 2026-10-16: regional maps

The 24 x 24 `regional-repair` profile was accidentally excluded from both the
API's 20-second cap / 12-second submission reserve and the solver's baseline
budget split. Both gates used `coverageOrderLimit <= 16`, which only selected
the large profile. They now use `!strategy.exactRoutes`, covering regional and
large profiles consistently. The API logs this budget before solving. The
30-second pre-match formation budget is separate and unchanged.

Offline reproduction: rebuild `tests/benchmark.cpp` and run
`--sample <sample_24.json> 4 --live-budget-ms 20000`. This checks five valid
days and rejects a solve exceeding the cooperative cap by more than 5 seconds.
The API continues to keep the original snapshot for the submission guard.

Validation on 2026-10-16: sample24, Supply index 4, neutral traffic, five valid
days in 18,596 / 19,475 / 19,693 / 19,313 / 19,768 ms. Score: 18 Types / 86
Daily / 106 Serving. The previous unlimited sample run scored 18 / 87 / 110;
the deadline cap trades search depth for submission time and does not promise
identical scores. Log: `.build/branch_review/regional_deadline24.log`.

## Original large-map fix

The large-map solver previously began its ordinary-route recursion before checking `endsAt`. Later search phases could run until 750 ms before the server deadline; the client still needed a fresh `/status` and `POST /answer`. A slow 32 x 32 plan could therefore consume the submission window and miss a day.

For the existing large map profile, API mode now caps each day's search at about 20 seconds and uses the earlier of that cap and 12 seconds before `endsAt`. If fewer than 12 seconds remain when planning begins, it immediately prepares a valid wait plan. The solver checks the live deadline before starting ordinary-route recursion. The original status snapshot and real `endsAt` are retained for the pre-submit day/revision check. Neither `.env` nor any other Git branch was changed by this fix.

The cutoff is cooperative: a single path computation in progress can exceed it briefly. The reserved server time also depends on network latency; an unavailable server cannot be made reliable by a solver deadline alone.

Reproduction without submitting actions:

```powershell
# Run from HexaUdon after rebuilding tests/benchmark.cpp with solver objects.
.\.build\deadline_benchmark.exe --sample C:/Users/caida/Downloads/sample_32.json 6 --live-budget-ms 20000 --expect 24 114 137
```

The fixed neutral-traffic, one-Supply replay completed all five days with valid actions. Per-day solve times were 19,582 / 19,318 / 20,073 / 19,686 / 18,871 ms; the resulting score remained 24 Types / 114 Daily / 137 Serving. The `--live-budget-ms` check returns an error if a day exceeds 25 seconds. The full unit suite includes an expired-deadline case that verifies the solver returns a valid fallback before entering recursive search.


## Shorter live search and nested formation deadline (2026-10-16)

The API now budgets 10 seconds for formation (previously 30) and 10 seconds
per day (previously 20 on regional/large maps). The day cap applies to compact
maps too. The 12-second answer reserve and original-snapshot validation remain.
Ordinary-route recursion shares at most one third of the remaining live search
window on every map, preserving time for reward-route search.

Root cause in formation: the outer loop checked its deadline, but nested
`Solver::solve` calls received a state with no `endsAt`. A single candidate could
therefore run an unlimited search past the outer allowance. Each bounded rollout
now passes the remaining outer time into its nested solve. After expiration,
the existing fallback permits completing the initial candidate without another
unbounded search. Checks are cooperative; setup/path computations may overrun
slightly, so these budgets are not hard real-time or network latency guarantees.

The new `test_formation_shares_deadline` uses a 24x24, five-day configuration and
an exhausted 1 ms budget to catch unrestricted nested solves. The full unit suite
passes. The executable was rebuilt and `--help` succeeds. No server actions were
submitted. Shorter search can change scores; no claim of unchanged Daily.

Offline fixed-fleet neutral-traffic checks at 10 s/day: sample24 = 18/83/97,
maximum solve 10.136 s; sample32 = 24/105/123, maximum solve 10.264 s.
The previous 20 s runs scored 18/86/106 and 24/107/135 respectively.
The shorter budget trades some score for faster submission; it does not preserve
all prior Daily/Serving. Per-day records: `checkpoints/2026-10-16-fast-budget.json`.


## 55-second search requested for 60-second server days (2026-10-16)

Supersedes the 10-second defaults above: formation and daily search now allow
55 seconds, with a 5-second submission reserve for API days. The actual daily
cutoff remains the earlier of the local budget and server `endsAt - 5 seconds`.
Receiving a day late therefore shortens search automatically. At most 5 seconds
remaining uses the existing fallback. Original snapshot checks remain in place.
The nested formation deadline fix and one-third ordinary-pass budget remain.
Search can finish early; it does not deliberately wait 55 seconds.

These are cooperative search deadlines, not a hard wall-clock guarantee for
computation plus network calls. Formation has no server countdown in this path;
after simulation the status is fetched again before attempting agent selection.


## Restore 10-second defaults (2026-10-16)

At user request, supersedes the 55-second settings above: formation and daily
search return to 10 seconds; API submission reserve returns to 12 seconds.
Nested deadline propagation, stdin limits, and diagnostic messages remain.


## 57-second budget with a capped ordinary pass (2026-10-16)

User requested further optimization after reporting 12/53/66, and a 57-second
limit. Formation and daily search now allow 57 seconds; live days retain a
3-second submission reserve using the authoritative `endsAt`. These settings
supersede the 10-second restoration above. A late snapshot shortens search.

The ordinary-route pass now gets min(remaining / 3, 3333 ms). Previously a
57-second solve could spend about 19 seconds in this pass before starting reward
search. The extra budget now primarily extends reward search and repairs. This
is a search scheduling change, not a guarantee of monotonic scores or retention
of the exact former 10-second plan. Formation selection also depends on budget.

All unit tests pass. The user's aggregate score alone cannot identify missing
brands by day; no same-match replay or measured live improvement is claimed.
The deadline remains cooperative and network calls are not covered by a hard
wall-clock limit; a 3-second reserve cannot guarantee submission under all delays.

Offline sample16, fixed Supply index 2, neutral traffic, 57-second budget: [12, 56, 62]. Same score as the previous sample16 run; no demonstrated score gain on this fixture. Maximum solve 12429.3 ms. Executable rebuilt and --help verified.
