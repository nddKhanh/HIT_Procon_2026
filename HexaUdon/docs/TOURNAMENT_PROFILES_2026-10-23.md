# Published tournament configurations

Source: the user's supplied image, section 6. Dimensions are width x height. Actual terrain, spots/brands/stocks, fleet, starting positions, fuel and congestion thresholds are hidden and must come from server configuration.

| Map | Teams | Size | Days | Steps | Seconds/day | Solver cap |
|---|---|---|---|---|---|---|
| V0 | 7 | 20x20 | 6 | 40,50,60,60,50,40 | 45 | 42s |
| C1 | 7 | 24x18 | 6 | 70,80,90,90,80,70 | 45 | 42s |
| C2 | 7 | 16x16 | 7 | 40,48,56,64,56,48,40 | 40 | 37s |
| C3 | 7 | 20x26 | 6 | 60,90,120,120,90,60 | 50 | 47s |
| F1 | 3 or 4 | 25x25 | 8 | 80,90,100,110,110,100,90,80 | 50 | 47s |
| F2 | 3 or 4 | 32x32 | 10 | 110,120,140,90,70,70,90,140,120,110 | 60 | 57s |
| F3 | 3 or 4 | 18x18 | 4 | 60,72,72,60 | 45 | 42s |

Recognition requires dimensions, complete step sequence and team count. Unrecognized configurations retain their existing workload policy. Server daySeconds overrides the published fallback, and a nearer live endsAt always wins. The solver reserves 3 seconds for submission (with the existing additional internal guard). Pre-start selection uses the first-day budget conservatively; the image does not specify a separate selection window.

## Routing policy

All recognized profiles use Type then Daily for coverage repairs, accepting reduced duplicate servings. C2 keeps small-map exact-route eligibility; C1/V0/F3 retain medium-map workload bounds; C3 and finals use bounded larger-map search when required. Real spot/agent counts and fuel tightness still control workload selection.

Extra repair ceilings: V0/F3 8+5s, C1 9+5s, C2 7+5s, C3/F1 10+6s, F2 12+8s (fleet repair + tours), always clipped by the shared deadline. Stop when complete coverage is reached. Whole-fleet simulation verifies proposals. Supply preparation uses idle time first and then unproductive movement after the last refill, preserving today's collections and patrol end fuel/positions.

C2 now shares the compact multi-day endpoint forecast with sample16, within its original live budget and the reserved repair window. Other tournament profiles bypass that forecast. If fleet or Supply repair changes today's actions, the solver discards the saved continuation before commit because its future start state may no longer match. Fleet finalist comparisons on small/medium fleets use two deeper days instead of many severely truncated days. The large native policy remains a baseline, with daily-first repair around it for recognized tournament configurations.

## Verification and limits

`test_published_tournament_profiles` checks all seven parameter sets, both finals team counts, rectangle orientation, computed Daily ceilings, differing server durations and rejection of partial matches. Existing supply and deadline checks exercise the reused mechanisms.

Full Type means all distinct brands in the received config. The nominal Daily ceiling is that number times the number of days, not a hard-coded 60/90/120. That ceiling is not a proof of feasibility on hidden terrain/stock/fuel constraints or against opponents. The user subsequently confirmed full Type/Daily on seven server matches (see `SEVEN_MATCH_REVIEW_2026-10-23.md`). The newer Downloads files named `V0 (1).json` through `F3 (1).json` have different brands, spots and sometimes fleets; their replay results must not be confused with those server scores. Sample24 remains a separate five-day map.

Validation completed: targeted test executable exit 0; synthetic full-length runs for all profiles and both final-round team counts; legacy strategy selection, expired deadlines, Supply repositioning and large-map reference bridge checks passed. Production executable built successfully. No server match was submitted.
