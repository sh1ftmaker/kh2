# Progress baseline (2026-08-18, upstream 8b5bc47)

`make progress` reports **41.47 %** — that is a *function count* (4,680 / 11,286).
Measured in **bytes** the same state is **12.31 %** (244,380 / 1,985,545), and the
objdiff report agrees (`complete_code_percent: 12.31`; note that
`matched_code_percent` is 100 % by construction because undecompiled units
`.incbin` the original bytes — do not publish that number as progress).

`python3 tools/progress_bytes.py` (after `make`):

```
Functions: 4680/11286 (41.47%)
Bytes:     244380/1985545 (12.31%)   <- headline

By size bin (done/total fns, done/total bytes):
       <80 B:  3630/ 5193 fns     123712/  208025 B  ( 59.5%)
    80-199 B:  1042/ 3498 fns     118432/  435616 B  ( 27.2%)
   200-999 B:     8/ 2393 fns       2236/  941932 B  (  0.2%)
      >=1 KB:     0/  202 fns          0/  399972 B  (  0.0%)
```

Only leaves/getters/wrappers are matched; 3,932 of the 4,680 live in `src/anon`
(auto-generated). The 200–999 B bin alone is 47 % of all code and the ≥1 KB bin
another 20 %; together they are essentially untouched.

Checkpoints proposed for the roadmap: 25 % bytes (anon re-homed into named TUs),
50 % (mid-size bin ≥ 80 % done), 70 % (large/VU0 tiers underway).
