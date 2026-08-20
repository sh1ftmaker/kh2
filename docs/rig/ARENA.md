# Model arena — 2026-08-20

Twelve unmatched KH2FM functions (84–364 B), the same playbook, the same
8-attempt budget, the same feedback loop, scored only by the byte-exact
mini-link verifier. 27 contenders across three providers. Four of the targets
carry a Qwen anchor: the score the 24-worker fleet reached over many rounds.

Every exact result below was re-verified independently of the orchestrator that
produced it, by recompiling the stored `attempt_NNN.cpp` through `compile_diff`.
All 45 claimed exacts reproduced; none were taken on trust.

## Leaderboard

| contender | exact | median fuzzy | attempts | wall |
|---|---|---|---|---|
| gpt-5.6-sol · xhigh | 8/12 | 100.00 | 46 | 3,043 s |
| gpt-5.6-sol · ultra | 8/12 | 100.00 | 46 | 5,733 s |
| **claude-opus-5** | **8/12** | 100.00 | 46 | 6,785 s |
| gpt-5.6-sol · max | 8/12 | 100.00 | 48 | 5,369 s |
| **gpt-5.6-sol · high** | **8/12** | 100.00 | 49 | **2,302 s** |
| claude-sonnet-5 | 7/12 | 100.00 | 51 | 9,767 s |
| gpt-5.6-sol · medium | 7/12 | 100.00 | 53 | 1,769 s |
| gpt-5.6-sol · low (default) | 7/12 | 100.00 | 60 | 1,612 s |
| gemini-3.1-pro-preview-customtools | 6/12 | 97.59 | 36 | 7,124 s |
| gpt-5.4-mini | 6/12 | 97.59 | 50 | 11,995 s |
| gpt-5.5 | 6/12 | 98.14 | 61 | 1,664 s |
| gpt-5.6-terra | 6/12 | 97.98 | 63 | 1,963 s |
| gpt-5.4 | 5/12 | 95.38 | 64 | 3,020 s |
| codex-auto-review | 5/12 | 80.56 | 66 | 2,590 s |
| claude-haiku-4-5 | 5/12 | 91.12 | 70 | 11,830 s |
| gpt-5.6-luna | 5/12 | 90.08 | 80 | 2,934 s |
| gemini-3.1-flash-lite | 3/12 | 28.84 | 46 | 4,527 s |
| 10 further Gemini routes | 0/12 | — | 0–2 | — |

The ten empty Gemini rows are recorded rather than dropped: `gemini-3.5-flash`
exhausted its free-tier daily token cap after one scoreable attempt, the named
pro models return quota limit 0 (only the `-customtools` route is reachable on
this key), `gemini-2.5-*` are decommissioned for this key, `gemini-2.5-flash`
is routed by the API to `gemini-3.5-flash`, and the remaining flash routes
answer probes but time out empty on arena-size prompts.

## Effort scaling

On the flagship, effort buys real wins on *large* functions and then stops:
`0x0024ba58` (340 B) falls only at `high` and above. Past `high` the returns
collapse — `max` and `ultra` cost 2.3× the wall time of `high` for the same
8/12. `high` is the efficiency frontier for that provider.

## Three providers, three failure signatures

Diff-class histograms over the unsolved targets. Codex's is summed over all
attempts, Gemini's over each target's best attempt, so compare *ratios*, not
magnitudes.

| provider | regalloc : operand_value | control-flow errors | character |
|---|---|---|---|
| Codex (gpt-5.6-sol) | 241 : 150 = 1.6 : 1 | 6 | right shape, wrong register |
| Claude (opus-5) | 178 : 67 = 2.7 : 1 | 5 | right shape, wrong register — more so |
| Gemini (3.1-pro) | 26 : 27 = 1 : 1 | 1 | right shape *and* register, wrong constant |

Nobody fails at comprehension. Across three providers and 27 contenders the
residual error is overwhelmingly ee-gcc 3.2's *register colouring* and its
delay-slot fill — which local gets `s0` versus `s1`, and whether the argument
setup lands in the branch delay slot. Opus never invented a symbol across 42
scored attempts and got struct widths wrong zero times. Gemini pro is the
outlier: it gets allocation nearly right and loses on the exact literal or
struct byte offset instead.

The weak tiers fail a stage earlier and differently. `claude-haiku-4-5`'s
dominant class is `extra_on_yours` at 502 — it writes *more code than the
function contains*, with wrong control-flow shape on 35 rows and size mismatches
on 36 of 69 attempts. `gemini-3.1-flash-lite` is dominated by missing/extra
blocks (44/44): it drops or invents whole instruction runs rather than
mis-allocating registers.

## The universal wall

`0x0017c030` beat all 27 contenders. Opus and Sonnet both plateaued at exactly
92.14 %, as did six of Gemini pro's eight attempts, with the same prologue diff.
Six hand-written source shapes — call result in a temp, hoisted cast pointer,
hoisted `Movement` pointer, typed `out` parameter, both parameters typed, early
return — all compile to byte-identical output at 92.14 %, 116 bytes against 112.

The original keeps `out` in `a0` through the copy and fills the call's delay
slot with the argument setup. Every shape we can write copies `out` into `s0`
first, freeing `a0` early, so the argument is set before the call and the delay
slot takes a bare `nop` — one instruction more. The choice is gcc's, not the
source's. Parked in `no_requeue.tsv`; no prompt fixes it.

## What the arena bought the project

Eight of twelve targets fell to at least one contender. Five were still `asm`
in the repo; four are now promoted (820 B), including `Tz::HBTE::SetupSel`
(340 B) and `Tz::Jiminy::SetParentSeqNum` (220 B) — the 200–999 B bin holds
47 % of all remaining bytes and had one match in it before today.

On the anchor `0x001c2338`, Gemini pro went byte-exact on attempt 2 in 82 s
where Qwen's best over 16 attempts was 78.57 %. The difference was mechanical,
not clever: it trusted the rig's VERIFIED 4-argument callee declaration instead
of inventing a zero-argument one, took `this` as an explicit `void* self`,
synthesised a padded layout struct landing on 0x3af / 0x588 / 0x768, and picked
the right global. Each of those is a rule the playbook can state.

## Caveats

- The Claude tiers were run by a Claude orchestrator. Its harness is a
  line-for-line copy of the Codex one with a single function swapped, and only
  mechanical `compile_diff` output re-entered any loop. But it raised the call
  timeout from 240 s to 480 s (the `claude` CLI buffers its whole reply and was
  returning *zero* output on large targets), and voided/re-ran 12 attempt slots
  lost to session limits. Both changes were applied to all three Claude tiers
  and not to Codex, so read Opus's 8/12 as "ties Codex when allowed to finish
  speaking", not a clean win.
- Gemini's first orchestrator lost five completed targets to a caching change
  made mid-run, and leaked 13 orphaned CLI processes because the `gemini`
  launcher re-execs node as a grandchild that `subprocess` timeouts never
  reaped — those orphans kept calling the API and are what looked like
  cascading 503s. Both were fixed and the lost targets rebuilt from disk
  without re-querying any model.
- Three Claude targets stopped at 7, 7 and 4 attempts on the shared 25-minute
  per-target call cap rather than on the 8-attempt budget.
