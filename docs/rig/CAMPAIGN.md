# Matching campaign log

One row per driver run (see tools/rig/round_report.py).

| when | run | label | model | prompt | fns | matched | bytes | near-miss | compile-fail | attempts/match | tokens (p/c) | wall |
|---|---|---|---|---|---|---|---|---|---|---|---|---|
| 2026-08-19 10:46 | round1 | round 1: 5 workers no-think, tier 1, prompt pre-idioms | qwen3.8-27b | ? | 15 | 2 | 160 | 2 | 3 | [4, 5] | 803948/45796 | 502 s |
| 2026-08-19 10:55 | round2 | round 2 (partial, killed for twin-snippet fix) | qwen3.8-27b | 6f47e4a5c90b | 8 | 1 | 88 | 1 | 0 | [3] | 750648/21184 | 301 s |
| 2026-08-19 11:30 | round3 | round 3: twin-led queue, catalogue in prompt | qwen3.8-27b | 6ef092c17a22 | 20 | 4 | 336 | 2 | 1 | [1, 2, 2, 3] | 2079854/85636 | 1992 s |
| 2026-08-19 16:09 | c0819b-r1 | c0819b-r1 | qwen3.8-27b | 6ef092c17a22 | 32 | 2 | 168 | 3 | 1 | [1, 1] | 2895299/105846 | 801 s |
| 2026-08-19 16:31 | c0819b-r2 | c0819b-r2 | qwen3.8-27b | 6ef092c17a22 | 32 | 0 | 0 | 5 | 2 | [] | 3058727/105248 | 905 s |
| 2026-08-19 17:22 | c0819b-r3 | c0819b-r3 | qwen3.8-27b | 51ac2d05992c | 48 | 2 | 196 | 3 | 4 | [3, 3] | 4917617/188804 | 2067 s |
| 2026-08-19 18:10 | c0819b-r4 | c0819b-r4 | qwen3.8-27b | 51ac2d05992c | 48 | 1 | 116 | 2 | 3 | [7] | 4941804/217818 | 2851 s |
