# Tournament review and formation screening (2026-10-16)

Read all three pages of `TheLe_Giai_HEXUDON_7doi.pdf` from the user's De bai
folder. The PDF describes the event format and parameters; game mechanics defer
to the official HEXUDON statement and Q&A.

## Rules that affect planning

- Match ranking: distinct match Types, cumulative daily distinct Types, total
  Servings, then lower response time. Do not trade away Daily to raise Servings.
- Teams have independent stocks; opponents affect traffic rather than consuming
  our stock. The observed traffic from the server remains authoritative.
- V1 gives 8/6/4/3/2/1/0 placement points. Finals give 6/3/1/0; the lower group
  gives 3/1/0. Group ties use total Types, Servings, response time and seed/draw.
  Match placement remains the primary way to earn tournament points.
- Map contents, agent count, fuel and congestion thresholds are not published.
  The bot must derive its profile from actual config, not a sample filename.
- Multiple submissions are permitted, but the last valid response counts and
  repeated flooding is prohibited. This change retains one accepted plan/day.

| Round | Geometry | Players | Days | Seconds/day |
|---|---|---|---|---|
| V0 | 20x20 | 7 | 6 | 45 |
| C1 | 24x18 | 7 | 6 | 45 |
| C2 | 16x16 | 7 | 7 | 40 |
| C3 | 20x26 | 7 | 6 | 50 |
| F1 | 25x25 | 4 or 3 | 8 | 50 |
| F2 | 32x32 | 4 or 3 | 10 | 60 |
| F3 reserve | 18x18 | 4 or 3 | 4 | 45 |

The API's 57-second cap is not an unconditional allowance: each day is limited
by server endsAt minus a 3-second reserve. Therefore a full 40-second day gives
about 37 seconds before timestamp rounding; receiving it late reduces that.
Cooperative search and synchronous networking still prevent a hard real-time
submission guarantee. Formation must start early enough before the admin starts.

## Formation issue and experiment

Previous comparisons usually used a fixed single-Supply fleet. The live bot
selects the fleet first, so those results cannot establish its full-match score.
The benchmark now accepts `--auto-formation` and `--formation-budget-ms`, records
selected types and formation runtime, and checks the formation time allowance.

A nested formation solve previously received all the remaining outer time. One
day could consume most of the budget and starve later days and alternative
fleets. Remaining days could then become fallback waits and still enter the
formation score. The trial caps each formation day at 2 seconds, keeps the full
live planning budget, and rejects rollouts that cannot finish before the outer
cutoff. The cap is a screening heuristic, not exhaustive formation optimization.

## Validation

Full unit suite passes, including the extended expired-formation check that
rejects a fabricated `score=0/0/0`. The executable was rebuilt; --help succeeds.
No live server actions were sent and other branch refs were not changed.

Initial before/after run with automatic fleet selection and neutral traffic:

| Sample | Before Types/Daily/Serving | Candidate Types/Daily/Serving |
|---|---|---|
| 16x16 | 12/54/65 | 12/56/62 |
| 24x24 | 18/87/112 | 18/87/112 |
| 32x32 | 24/118/148 | 24/116/139 |

The 16x16 result improves under the official ranking despite fewer Servings.
24x24 is unchanged. 32x32 chose the same fleet but differed in daily search
outcomes: deadlines and bounded repair make these timing-sensitive. Do not
interpret these data as a demonstrated improvement on every map. Per-day
records are in `checkpoints/2026-10-16-tournament-formation.json`.

A final 32x32 rerun is recorded separately below; it includes a further guard
rejecting a candidate if the outer formation deadline expires during a solve.

 The three
provided samples have 10 configured players and 5 days, so they do not represent
all seven tournament parameter sets or real opponents. No tournament win or
full-Daily guarantee follows from sample results.

Final 32x32 repeat: 24/117/140, fleet [0,0,0,1,0,0,1]. This is below the
recorded baseline 24/118/148. The change fixes formation evaluation and helps
the compact fixture, but is NOT a validated score improvement for the large
fixture. Further work must compare complete-match forecasts and stabilize
selection rather than infer improvement from the screening score.
