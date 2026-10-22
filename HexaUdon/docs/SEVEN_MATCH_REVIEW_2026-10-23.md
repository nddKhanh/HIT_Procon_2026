# Review of seven local tournament histories

The user supplied server score tables on 2026-10-23. Type, Daily and Servings match the diary reconstruction for all seven matches, including each day's Daily and Servings. All seven matches achieved full Type and full Daily. Fuel observations remain diary-derived.

| Map | Match | Daily | Servings reconstructed | Stock sum across days |
|---|---|---:|---:|---:|
| V0 | 4b837be2-289b-45a2-b576-7d529209b362 | 60/60 | 103 | 210 |
| C1 | 1d089f67-c8f2-4d7c-a96b-b4b1f8a93263 | 72/72 | 167 | 336 |
| C2 | a47427bd-250c-4cc0-838e-fd162b4f4abb | 70/70 | 147 | 266 |
| C3 | 33b84f9d-fb29-439f-8167-20e623d490f3 | 84/84 | 244 | 402 |
| F1 | 5a504b48-3bb4-4576-8c86-76178389b501 | 136/136 | 310 | 408 |
| F2 | f8dd7f81-e244-4a69-9754-efb5ffa44599 | 270/270 | 535 | 1380 |
| F3 | bca6923c-4231-4eec-aef2-cacadcd7826f | 40/40 | 85 | 124 |

Stock sum is an inventory ceiling, not a feasible serving target.

## Recommended priorities

1. Server confirmation is complete for these seven matches. These results establish a baseline for these configurations, not a guarantee for unseen terrain, stock or competing teams.
2. Preserve these seven configurations and accepted trajectories as regression baselines. Any serving experiment must preserve full Type and Daily across the entire match, not only the current day.
3. C1: inspect fuel-starved patrols (0 fuel at starts of days 3,4,5,6). Current coverage is still full; use spare Supply time to restore their ability to collect duplicate servings, with whole-match validation.
4. F3: a patrol starts day 3 at 0 fuel; apply the same guarded rescue experiment.
5. F1: patrols begin days 3 and 4 with only 4 fuel. Compare earlier refuelling and redistribution of duplicate-brand routes.
6. V0/C2/C3/F2: retain coverage plans; prioritize shortening computation and opportunistic serving insertions that preserve future position/fuel.

No routing changes were made during this review: the available evidence does not justify risking full Daily to repair a deficit that is not present in the logs.

## Server timing and next experiments

| Map | Total server time (ms) | Longest day (ms) |
|---|---:|---:|
| V0 | 5769 | 1368 |
| C1 | 49178 | 10636 |
| C2 | 23347 | 4696 |
| C3 | 51334 | 9806 |
| F1 | 19998 | 2666 |
| F2 | 163206 | 19877 |
| F3 | 3629 | 1375 |

The totals cover the entire match; F2's 163206 ms is not a single-day deadline overrun. These recorded day times are all below the published per-day limits. They do not measure all API/network overhead or formation work.

Prioritize C1 fuel rescue and F2 serving allocation experiments. F2 has the largest gap to the inventory ceiling, but stock alone cannot prove reachable gains. Compare whole-match outcomes with the confirmed baseline: retain full Type and Daily first, then increase Servings, then reduce time for equal scores. More search time alone is not evidence of improvement. Validate across all seven configurations before promoting any routing change.
