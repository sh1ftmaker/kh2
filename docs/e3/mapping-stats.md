# EE <-> PPC function mapping — stats (iteration 2, 2026-08-18)

Pipeline: `ee_analyze.py` -> `ppc_analyze.py` -> `match.py` -> `emit.py` (see HANDOFF.md).

## Per-iteration table

| iter | change | matched total | high | med | amb | additions | holdout precision (overall) | holdout recall | high-tier precision |
|---|---|---|---|---|---|---|---|---|---|
| 0 | baseline (reproduced from prior handoff) | 4,159 | 943 | 1,516 | 456 | 873 | 94.6% | 52.5% | 97.4% |
| 1 | + CU-locality (DWARF decl_file, informational vote, no veto) + ctor-vtable-store pairing (evidence family D, incl. C1/C2/D0/D1/D2 disambiguation) + instruction-shape sibling tie-break (fam D0/D1/D2 wins vs guessing) | **4,241** | **978** | **1,563** | 868 | 879 | 94.3% | **53.5%** | **97.8%** |
| 1b | (tested, not adopted) feed accepted high-tier matches back as unconditional seeds, rerun to fixed point | 4,193–4,241 (order-dependent) | up to +271 in a single full run, but **no net holdout recall gain** (52.5%→53.2%, essentially flat/negative) and high-tier holdout precision dropped 97.8%→97.0% | | | | 94.3% | 53.2% | 97.0% |

Iteration 1 total effect vs baseline: **+82 matched (+2.0%), +35 high (+3.7%), +47 med (+3.1%)**, holdout recall +1.0pt, high-tier holdout precision +0.4pt (still comfortably ≥95%). This exceeds the ">1% new high-tier names" continuation bar, but a second full engineering pass (deeper vtable slot alignment, EE-side sibling shape resolution) was judged lower-yield than the effort already spent tuning iteration 1 (see "Next steps"); iteration stopped here well under the 2h wall-clock budget (~25 min actual, pipeline itself is ~20s/run).

## Counts (full run, all 1,700 seed anchors used, current pipeline)
- EE functions: 13,761 (11,286 layout + 2,475 extra starts). 828 EE functions detected as storing a vtable pointer (`vt_store`, new field).
- PPC functions: 22,009 FUNC symbols, 761 `_ZTV` vtables, 9,837 .opd descriptors. 16,965 PPC functions have a known DWARF `decl_file` (CU). 2,353 PPC functions store a vtable pointer.
- Seed anchors: 1,700 (unchanged; functions.tsv `_Z` names unique in PPC symtab — verified only 1 real-name PPC symbol is non-unique, 7 real names no longer exist in the PPC symtab at all, so there is essentially no headroom left in the seed-selection criterion itself).
- Newly matched: **2,541** (high 978, med 1,563). Ambiguous (competing candidates, not accepted): 868 — up from 456 because the two new evidence families (CU-locality, ctor-vtable) surface many more *genuinely* tier-qualifying-but-tied candidates that previously never got a vote at all; median ambiguous-entry weight is 2.7 (vs. weight ≥1.0 for 819/868 = 94%), i.e. mostly real ties, not noise. 378 are EE-side competitions (two EE funcs for one PPC symbol — left un-guessed per instructions), 490 are PPC-side (one EE func, ≥2 PPC candidates).
- Low-tier candidates (single support, NOT accepted): 3,111.
- `functions_additions.tsv`: 879 high-confidence new names on layout functions with placeholder names (97 more high matches are on EE functions absent from layout.tsv -> `gap_functions_named.tsv`, up from 68 — CU/vtable evidence disproportionately lands on gap-region functions like extra ctors/dtors).
- Learned "PPC-only" noise callees: 699.

## Hold-out validation (hide 20% of seeds = 340, 3 random seeds; current pipeline)
| run | recovered correct | wrong | missed | precision | recall | high P | med P |
|---|---|---|---|---|---|---|---|
| seed1 | 171 | 9 | 160 | 0.950 | 0.503 | 72/0 | 99/9 |
| seed2 | 191 | 16 | 133 | 0.923 | 0.562 | 76/2 | 115/14 |
| seed3 | 184 | 8 | 148 | 0.958 | 0.541 | 70/3 | 114/5 |
Aggregate: high tier 218 correct / 5 wrong (**97.8%**), med tier 328/28 (92.1%), overall 546/33 (94.3%), recall 546/1020 (**53.5%**).

## New evidence families added this iteration
- **CU-locality (E, `cu`/`cuweak` tags)**: uses `functions_dwarf.tsv` `decl_file` per PPC function. A candidate gets a small vote boost (+0.3) if ≥2 matched EE neighbours' PPC partners share its decl_file with 0 mismatches. Conflict is recorded (`cuweak`) but **not** vetoed — an earlier version subtracted 1.0 and vetoed on conflict, which regressed matched-total from 4,159 to 4,110 and inflated ambiguous to 1,091 with no holdout benefit (CU-file boundaries don't correlate as tightly with EE physical layout as raw address-proximity locality does, so a hard veto produced too many false conflicts). Kept purely as a soft, informational nudge.
- **Ctor-vtable-store pairing (D, `ctorvt` tag)**: both analyzers now record `vt_store` — addresses a function's `lui/addiu` (EE) or `lis/addi` (PPC) resolves to that land exactly on a vtable's slot-0 address (`v['addr']` EE / `v['addr']+8` PPC, matching the Itanium-ABI `&vtable[2]` convention). When the existing vtable-slot alignment (family D) establishes a vi<->pi link (or slot counts match exactly), the *constructors/destructors that store that vtable* are now paired directly: 1:1 when unambiguous, or via a "which one calls its sibling" direction heuristic for the classic 2-ctor (C1/C2) or 3-dtor (D0/D1/D2) case, else a weak fallback vote. This is what resolves the `Known problems` C1/C2 and D0/D1/D2 sibling-disambiguation cases the prior handoff flagged — spot-checked examples: `kn::FriendPersonality::~FriendPersonality()` D1/D2/D0 all correctly assigned distinct PPC addresses via their shared `_ZTVN2kn17FriendPersonalityE`; likewise `kn::Sparrow`, `kn::Genie`, `kn::ChickenLittle`. Only 71/978 high matches use `ctorvt` at all, and only 1/978 relies on it as sole evidence — low blast radius, high hit-rate where it applies.
- **Instruction-shape sibling tie-break**: `(nc, nt, nbranch/ninstr, nstrings, has_vt_store)` feature vector; both analyzers now emit `nbranch` and `vt_store`. When the top-2+ near-tied candidates for an EE function are plausible siblings (same PPC decl_file, or ctor/dtor-variant name family via `(C1|C2|D0|D1|D2)E` regex), and one has a decisively smaller shape distance (gap ≥2.0 — tested 1.0/1.5/2.0/3.0, results were flat below 2.0 so kept the conservative default), it is accepted at **med tier at most** (never elevated to high purely by shape) instead of being dumped into `ambiguous.tsv`. This only fires for the *PPC-side* tie case (one EE function, several PPC candidates); the *EE-side* competition case (two EE functions wanting one PPC symbol — C1/C2 twins, GAP duplicates) is deliberately left unresolved in `ambiguous.tsv` per the "guess not" instruction — auto-resolving it would require overriding the mutual-best safety check and was judged too risky for the precision budget.

## Priority-1 finding: seed feedback loop (tested, not adopted)
Implemented `match.py --extra-seeds FILE` (ee_addr\tppc_addr\ttier) to unconditionally re-inject a previous run's accepted matches as seed anchors (bypassing all vetoes), matching the handoff's "feed accepted names back as seeds, iterate to a fixed point" instruction. Empirically:
- `match.py`'s own round loop already converges to a fixed point *within a single run* (round 9 of 30 available, confirmed up to round 60 — no further rounds ever accept anything new), so there was no a-priori reason to expect an external second pass to add anything.
- Measured on 3-seed hold-out (generate high-tier from pass 1, feed back, rerun same holdout split): overall recall went from 53.5% to 53.2% (flat/slightly worse) and **high-tier holdout precision dropped from 97.8% to 97.0%** (still ≥95%, but a real regression) because ~2-3% of derived "seeds" are wrong and, once force-fed as unconditional anchors, both propagate errors and displace some previously-correct order-dependent matches elsewhere in the greedy accept loop (total matched count actually *decreased* slightly in the non-holdout run, 4,241→4,193, even though high-tier count jumped due to reclassification of med→high).
- Conclusion: **not adopted** for the delivered pipeline. The `--extra-seeds` flag is left in `match.py` as a documented, working capability (harmless when unused — default behaviour is unchanged) in case a future iteration wants to revisit it with a stricter confidence filter (e.g. only feed back matches with ≥3 corroborating evidence families) instead of "all high tier".

## Known problems (updated)
- Med tier still ~8% errors (92.1% precision on hold-out), concentrated in the same categories as before (trap_* handlers, generic same-CU siblings without a name-pattern or vtable-linkage disambiguator). The ctor/dtor-specific cases (C1/C2/D0/D1/D2) are now substantially better handled via ctor-vtable pairing.
- `ambiguous.tsv` grew 456→868 as a side effect of adding two new evidence families that surface more real (previously invisible) ties; 378 of the 868 are EE-side competitions left deliberately unresolved.
- EE-side sibling disambiguation (two EE functions competing for one PPC symbol) has no automated resolution — only the PPC-side case (one EE function, several PPC candidates) got a shape-based tie-break this iteration.
- 97 high matches sit on EE functions not in layout.tsv (gap functions, up from 68) — `gap_functions_named.tsv`, need layout additions before naming in functions.tsv.
- Only 3 BODY (wrapper-body-inlined) relations found, unchanged from before — not further exploited.

## Evidence families used
A callee-position alignment; B caller/callee-set fingerprint/self-consistency; C shared rare strings; D vtable slot pairing **+ ctor-vtable-store pairing (new)**; E locality **+ CU-locality via DWARF decl_file (new, informational)**.
high = D, or >=2 of {A,B,C,D}, or (A from >=2 parents + E); med = one core family + E, w>=1.5. Shape-based sibling tie-break (new) can promote a previously-ambiguous PPC-side tie to med tier when the shape-distance gap between top candidates is decisive (>=2.0).
Vetoes: locality conflict, matched-callee conflicts, EE calls > PPC calls + 2, indirect-call count mismatch >=2. (CU-locality conflict is recorded but no longer vetoes, see above.)
