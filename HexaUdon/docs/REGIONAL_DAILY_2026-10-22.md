# 24x24 daily-first repair

Scope: Quan, exactly 24x24. The 16x16 forecast and 32x32 native solver are unchanged.

The formation finalist race evaluates two days with deeper per-day search instead of five severely truncated days. It compares new match types, then Daily, without a Serving tie-break. The initial planner reserves one third of the live time (at most 12 seconds) for repair, including short formation rollouts. Without this reserve, a repeated auto-formation run fell back to 87 Daily because the rollout exhausted its time before repair. This does not enumerate all formations or prove optimality.

After the existing route planner, a bounded fleet repair prioritizes new match types and Daily. It samples eight prefix boundaries, more initial target assignments and three fuel weights. Route repair can reorder up to eight necessary brands after departure or a refill, accepting fewer duplicate servings when coverage improves. Every accepted proposal passes the whole-fleet simulator. The local improvement does not prove that all later days improve: changed positions and fuel can affect them.

Repair stops immediately when all stocked brands are covered. Additional repair budgets are 12 seconds for the fleet and 8 seconds for tours, also capped by the live day deadline minus 750 ms. These are maxima, not mandatory waits.

## Offline evaluation

Fixture: sample_24.json, five days, own-dynamic traffic, 57-second live budget, automatic formation. Baseline: 18 Types / 87 Daily / 112 Servings. Evidence: [checkpoint](checkpoints/2026-10-22-regional-daily.json). Formation took 43.1 seconds; the slowest day took 33.0 seconds. The final automatic-formation run reaches 18 / 89 / 107; full Daily would be 90. It still misses brand 9 on day 4. No server result or 90/90 guarantee is claimed.

Increasing repair to 24 seconds did not gain the last Daily. A fuel-continuity tie-break reduced total Daily and was rejected.

Regression test `test_daily_focus_trades_duplicate_servings_for_types` checks that repair accepts three brands / three servings over one brand / four servings, retains complete coverage, and can cover all brands again the next day.
