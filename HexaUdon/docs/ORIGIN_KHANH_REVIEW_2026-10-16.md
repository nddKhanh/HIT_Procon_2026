# origin/khanh review (2026-10-16)

The reference is **origin/khanh**, commit
`a41b875196304f77f75cc15a5c83ab71069a1a2e`, verified against the live remote
with `git ls-remote origin refs/heads/khanh`. Local `khanh` points to a different,
older commit and is not the reference for the comparison below. Sources were
read with `git show` and extracted into an ignored build directory; no checkout,
merge, push, or source-branch modification was performed. Changes stay on Quan.

## Integration

Origin uses two-stop lookahead. Quan now uses that cheaper horizon in its ordinary
planning pass (`rewardRoutes=false`, more than two players) while keeping its existing three-stop search
in the reward-route pass. Solver still compares complete fleet plans. This avoids
paying for three-stop expansion twice and preserves the current scoring and
deadline guards. Maps already excluded from third-stop expansion are unaffected.

The initial trial applied the shorter horizon to all player counts and regressed
several two-player coverage fixtures. That variant was rejected. Two-player games
retain their original deeper horizon, including during tomorrow's forecast;
the shorter ordinary pass applies only to the multiplayer policy. All three
sample comparisons below use ten players and are unaffected by this restriction.

The focused lookahead regression now runs both planning modes and checks the
first target and collected spots. Existing refueling, cache, fleet repair, and
final-day suffix rebuilding in Quan already cover much of the origin strategy.

Other origin choices were deliberately not copied wholesale:

- Its 55-second formation allowance conflicts with the requested shorter runtime.
- Two traffic forecasts for tied plans add work; Quan retains its bounded existing
  forecast and future-resource checks.
- Rebuilding earlier-day suffixes solely for today's Serving can change tomorrow's
  position and fuel. Quan retains its future-resource safeguards.
- Mutable stock and visited sets must be isolated between suffix trials; Quan's
  existing adapted suffix repair already does this.

## Comparison method

Both policies use their own unmodified/current planner, respectively, but returned
actions are evaluated by the same current Quan MoveSimulator. The resulting agent
states are fed into the next day. Fleets have one Supply at indices 2, 4, and 6
for samples 16, 24, and 32. Each solve gets approximately 20 seconds through
`endsAt`; epoch-second rounding and cooperative checks allow small overruns.
Traffic is neutral. This isolates route planning, not native formation choice or
live opponents. The remote snapshot itself is not patched.

| Sample | origin/khanh Types / Daily / Serving | Quan Types / Daily / Serving |
|---|---|---|
| 16 x 16 | 12 / 50 / 62 | 12 / 56 / 62 |
| 24 x 24 | 18 / 84 / 102 | 18 / 86 / 106 |
| 32 x 32 | 24 / 104 / 135 | 24 / 107 / 135 |

Per-day scores and timings are saved in
`checkpoints/2026-10-16-origin-khanh.json`. All returned actions were valid;
the slowest Quan solve in this run was 20.184 seconds. These are soft deadlines,
not a hard timing guarantee. Shorter completion times on origin do not imply an
exhaustive search: its search policy performs less work.

Against Quan immediately before this integration, the measured sample16 score
remains 12 / 56 / 62 and capped sample24 remains 18 / 86 / 106. Sample32 already
disables third-stop lookahead, so this change adds no algorithmic improvement
there. Scores under deadlines can vary with timing; historical runs are not a
controlled before/after comparison. No speedup ratio is claimed from these runs.

Scores on these fixtures do not prove a global optimum or guarantee live-match
Daily. Live traffic, formation selection, and network timing remain unmeasured.

## Final validation

- All unit tests pass, including lookahead checks for both planning modes.
- All 16 coverage fixtures meet their tracked lexicographic score floors.
- `HexaUdon.exe` rebuilt; `--help` succeeds. No live actions were submitted.
- Recorded branch refs remain unchanged; the working branch is Quan.
- Existing user edits and `.env` were preserved.
