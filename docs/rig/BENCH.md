# Held-out re-match bench

Set: `docs/rig/bench_set.tsv`. A change is accepted only if the rate does not drop.

| when | prompt sha | label | rate | by bin | attempts | wall |
|---|---|---|---|---|---|---|
| 2026-08-19 11:57 | 6ef092c17a22 | baseline 2026-08-19 after rounds 0-3 (exact = any attempt byte-exact) | **8/28 = 29 %** | <80 3/8 · 80-199 3/14 · 200-499 2/6 | median attempts 5 | 0 s |
| 2026-08-19 15:20 | 4d598c73c06e | evolve candidate 20260819-151039 rejected — VOID: broken PATH, assembler failed on every attempt (not a prompt result) | **0/28 = 0 %** | <80 0/8 · 80-199 0/14 · 200-499 0/6 | median attempts - | 607 s |
