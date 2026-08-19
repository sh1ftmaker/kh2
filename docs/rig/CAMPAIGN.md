# Matching campaign log

One row per driver run (see tools/rig/round_report.py).

| when | run | label | model | prompt | fns | matched | bytes | near-miss | compile-fail | attempts/match | tokens (p/c) | wall |
|---|---|---|---|---|---|---|---|---|---|---|---|---|
| 2026-08-19 10:46 | round1 | round 1: 5 workers no-think, tier 1, prompt pre-idioms | qwen3.8-27b | ? | 15 | 2 | 160 | 2 | 3 | [4, 5] | 803948/45796 | 502 s |
| 2026-08-19 10:55 | round2 | round 2 (partial, killed for twin-snippet fix) | qwen3.8-27b | 6f47e4a5c90b | 8 | 1 | 88 | 1 | 0 | [3] | 750648/21184 | 301 s |
| 2026-08-19 11:30 | round3 | round 3: twin-led queue, catalogue in prompt | qwen3.8-27b | 6ef092c17a22 | 20 | 4 | 336 | 2 | 1 | [1, 2, 2, 3] | 2079854/85636 | 1992 s |
