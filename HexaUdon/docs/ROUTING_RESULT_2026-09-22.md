# Routing and supply evaluation — 2026-09-22

This closes the routing work described in `CHECKPOINT_2026-09-22.md`. No live
match actions were submitted.

## Implemented policy

- A supply can leave a completed encounter and serve another waiting patrol in
  the same day. Every accepted repair is checked by the canonical joint
  simulator. In the recorded day 4 regression, supply #5 refuels patrol #2 and
  then patrol #0; servings increase from 27 to 32 without losing a daily brand.
- Rendezvous candidates require a real time overlap at one discrete position.
  An unreachable wait and a meeting only at the day boundary are rejected; the
  supply waits instead of driving to an obsolete patrol position.
- For each daily brand missed by the best initial plan, Solver tries each
  reachable patrol as that brand's responsible first visitor and accepts only a
  better simulated team result. Candidate ranking now preserves the number of
  brands reachable from the resulting end positions on the following day before
  using servings as a tie-break.
- Supply targets rank achievable new/daily brands, reachable stock and patrol
  wait steps saved ahead of fuel deficit. The old largest-deficit assertion was
  replaced by checks for useful route extension and timed feasibility.

The endpoint lookahead is deliberately bounded to one reachability check. A
stronger total-distance preference was tested and rejected: it improved two
5 Patrol + 3 Supply fixed-traffic scores, but reduced one 6 Patrol + 2 Supply
score from 138 daily brands to 132 by sacrificing fuel and collections.

## Formation comparison

The final offline runner evaluates both formations for seven days with two start
rotations and two traffic assumptions. Scores use the official lexicographic
order `(match brands, daily brands, servings)`.

| Start shift | Traffic | 5 Patrol + 3 Supply | 6 Patrol + 2 Supply |
|---:|---|---:|---:|
| 0 | recorded fixed | 20/133/187 | **20/140/249** |
| 0 | mirrored dynamic | 20/136/191 | **20/140/217** |
| 2 | recorded fixed | 20/134/180 | **20/138/213** |
| 2 | mirrored dynamic | 20/138/199 | **20/140/230** |

Both formations collect all 20 match brands in every scenario. The 6+2
formation wins all four paired comparisons on daily brands and servings. Its
average is 139.5 daily brands and 227.25 servings, versus 135.25 and 189.25 for
5+3. Therefore the current evidence selects **6 Patrol + 2 Supply**. Supply wait
time was recorded for diagnosis but was not used to make this decision.

The exact benchmark output is in
`docs/checkpoints/2026-09-22-routing-final.json`. This is still one recorded map
under controlled traffic assumptions, so the formation rollout remains a
scenario estimate rather than a guarantee against an unknown opponent.

## Verification

- The full unit suite passes, including the 14 team-day server replay, day 4
  multi-stop rescue, temporal-overlap rejection, route-value selection and
  multi-supply reservation checks.
- `build.bat test` now requires the suite's completion marker and returns a
  non-zero status when an assertion aborts; this failure path was exercised with
  a temporary assertion and then removed.
- The benchmark and production executable build from the final source.
