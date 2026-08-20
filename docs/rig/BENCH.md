# Held-out re-match bench

Set: `docs/rig/bench_set.tsv`. A change is accepted only if the rate does not drop.

| when | prompt sha | label | rate | by bin | attempts | wall |
|---|---|---|---|---|---|---|
| 2026-08-19 11:57 | 6ef092c17a22 | baseline 2026-08-19 after rounds 0-3 (exact = any attempt byte-exact) | **8/28 = 29 %** | <80 3/8 · 80-199 3/14 · 200-499 2/6 | median attempts 5 | 0 s |
| 2026-08-19 15:20 | 4d598c73c06e | evolve candidate 20260819-151039 rejected — VOID: broken PATH, assembler failed on every attempt (not a prompt result) | **0/28 = 0 %** | <80 0/8 · 80-199 0/14 · 200-499 0/6 | median attempts - | 607 s |
| 2026-08-19 15:39 | 4bac5df636b5 | evolve candidate 20260819-152535 rejected | **7/28 = 25 %** | <80 4/8 · 80-199 3/14 · 200-499 0/6 | median attempts 1 | 846 s |
| 2026-08-19 18:34 | 716948a2818d | evolve candidate 20260819-181733 ACCEPTED | **13/28 = 46 %** | <80 7/8 · 80-199 4/14 · 200-499 2/6 | median attempts 3 | 1015 s |
| 2026-08-19 20:27 | b8fc7071a237 | evolve candidate 20260819-200351 pareto +0/-8 rejected — cause: self-restating appendix (26 of 34 lines already in the prompt, one row 3×); 5 workers degenerated (a few stray tokens, no tool call). Dedup guard added to evolve.py. | **5/28 = 18 %** | <80 2/8 · 80-199 1/14 · 200-499 2/6 | median attempts 1 | 1417 s |
| 2026-08-19 22:08 | 3aba78a062d0 | evolve candidate 20260819-214553 pareto +1/-1 rejected | **12/28 = 43 %** | <80 7/8 · 80-199 4/14 · 200-499 1/6 | median attempts 2 | 1348 s |
| 2026-08-20 01:13 | 5e5711538f1d | v2 playbook draft (unified, 8.9 KB vs 24.6 KB) — pareto gate | **4/28 = 14 %** | <80 1/8 · 80-199 1/14 · 200-499 2/6 | median attempts 3 | 1221 s |
| 2026-08-20 01:38 | c5c1242e9091 | v2 playbook draft + catalogue appended (isolates compression from catalogue loss) | **10/28 = 36 %** | <80 4/8 · 80-199 4/14 · 200-499 2/6 | median attempts 3 | 1498 s |
| 2026-08-20 03:34 | a43a983d201c | evolve candidate 20260820-030655 pareto +0/-6 (1 degenerate: model stopped calling tools) rejected | **7/28 = 25 %** | <80 3/8 · 80-199 2/14 · 200-499 2/6 | median attempts 1 | 1632 s |
| 2026-08-20 05:09 | c9384231fe8d | evolve candidate 20260820-044630 pareto +1/-0 ACCEPTED | **10/28 = 36 %** | <80 3/8 · 80-199 4/14 · 200-499 3/6 | median attempts 2 | 1366 s |
