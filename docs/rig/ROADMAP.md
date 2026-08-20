# KH2FM decomp roadmap

Updated 2026-08-20 after the model arena and the architecture review
(`/data/agent-tom/kh2/research/architecture-review-2026-08-20.md`).

**Where we are:** 4,733 / 11,286 functions (41.94 %), **250,296 / 1,985,545
bytes = 12.61 %**. Bytes is the metric; the function count is inflated by tiny
stubs and is reported only because it is conventional.

## The strategic picture

The arena answered the question the project had been guessing at. Twenty-seven
contenders across three providers ran the same twelve functions under the same
playbook and budget. Nobody failed at comprehension: the residual diff on every
unsolved target was dominated by ee-gcc 3.2's register colouring and delay-slot
fill, at 1.6–2.7 : 1 over the next error class, with control-flow errors near
zero for the top tiers.

That reframes the whole engine. Prompting cannot fix register colouring,
because the source never names a register — models re-roll and oscillate
(`0x0017c030` cycled 54.89 → 92.14 → 54.89 across all eight attempts on nearly
every contender). What fixes it is search over source spellings, which is a
compile farm's job, not a language model's.

The second finding is economic. The 200–1000 B band holds **54 % of all
remaining bytes** (918 KB). The Qwen fleet has never matched a function in it,
across twenty rounds with a quarter of every queue reserved for it. Codex-high
and Opus each solved 8/12 arena targets including both 200+ B functions, in a
couple of CLI hours. One arena evening promoted 820 B — about half the fleet's
best full day, on harder targets.

## Engine assignment

| band | share of remaining bytes | engine | why |
|---|---|---|---|
| < 80 B stubs | 5 % | Qwen fleet | trivially matched, free GPU |
| 80–200 B twin-adjacent | 17 % | Qwen fleet | where all 14 recent fleet matches live |
| 200–1000 B | **54 %** | `clibatch.py` (Codex gpt-5.6-sol · high, then Opus) | the only demonstrated engine here |
| ≥ 1 KB | 24 % | not yet attempted | needs the tiers above to mature first |
| any near-miss ≥ 85 % | — | `permuter.py` | regalloc/order residue is a search problem |

Codex `gpt-5.6-sol` at **high** effort is the efficiency frontier: `max` and
`ultra` cost 2.3× the wall time for the same 8/12.

## Now

1. **Permuter on the standing near-miss stock.** `permuter.py --parked
   --min-fuzzy 85` over the ~44 parked near-misses. This also re-tests the three
   residues currently labelled source-invariant (`0x0017c030`, `0x001d87b8`, the
   s1/s2 dtor family) — six hand-written shapes is not a search, and that label
   should not stand until a real one has failed.
2. **First `clibatch` night.** 20–30 targets from the 200–1000 B cut, Codex at
   high. The first week is a *measurement*: `docs/rig/quota_ledger.tsv` records
   every call so the sustainable batch size is observed, not assumed.
3. **Fleet keeps running** on tier 1 with `--evolve-every 0` and no tier-2
   quota, sweeping each round for exact-but-unpromoted work.

## Next

4. **Opus's three narrow jobs**, where it demonstrably compounds: a weekly pass
   over what Codex failed (the arena's failure sets were not identical);
   hand-close sessions on the reflector's ≥ 90 % worklist (each of the five
   hand-closes on 08-19 produced a catalogue idiom); and replacing Qwen as the
   *distiller* for prompt changes.
5. **Verify the gcc 3.2 allocator model.** The priority formula comes from
   vanilla 3.2.3 source, not the SCE 040921 binary. Construct two sources where
   it predicts an s0/s1 flip; if the flip does not happen, the SCE build
   diverges and every theory-driven move in `permuter.py` needs re-deriving.
6. **Re-calibrate P(match)** once `twins.tsv` has accumulated real values. The
   current fit saw twin similarity as a constant zero, which is why the model
   is mostly a size term.

## Later

7. **≥ 1 KB band** (24 % of remaining bytes) once tier-2 throughput is known.
8. **RTL dumps** (`-da`) if a stubborn residue class survives the permuter —
   turns "which pass diverged" from a guess into a reading exercise.

## Explicitly not doing

- **Dependency-aware (callee-before-caller) ordering.** The mini-link PROVIDEs
  every callee symbol and arity truth comes from the E3 DWARF, so a matched
  callee buys its caller almost nothing here. No mature decomp project orders
  this way either.
- **Per-TU compiler-flag search.** 4,733 functions already verify byte-exact
  under one flag set; there is no evidence of per-TU flag drift.
- **Unattended prompt evolution.** Off by default. The 28-function single-trial
  gate cannot distinguish a real improvement from sampling noise, and it once
  shipped a self-restating prompt that stopped five workers calling tools.
- **Adopting the v2 playbook draft.** Measured at 10/28 with the catalogue and
  4/28 without, against 13/28 for the current prompt.

## Standing rules

Byte-exact only. Independent fork; no upstream PRs and no contact with the
GovanifY/kh2 maintainers. Every claimed match is re-verified with
`compile_diff` from the stored attempt before promotion, whoever produced it.
Residues get parked with evidence, not ground on.
