#!/usr/bin/env python3
"""permuter.py — randomised semantically-neutral source rewrites, scored byte-exact.

The model arena settled what the wall is: across three providers and 27
contenders the residual diff on every unsolved function was dominated by
ee-gcc 3.2's register colouring and delay-slot fill, with control-flow errors
near zero. Models recover the algorithm and then lose on which local gets s0
versus s1 — and they cannot fix it by thinking harder, because the source does
not name registers. They re-roll and oscillate (0x0017c030 cycled
54.89 -> 92.14 -> 54.89 across all eight attempts on nearly every model).

That is a search problem, and the decomp community's answer is decomp-permuter:
generate many semantically-equivalent spellings of the same function and keep
the one whose bytes match. This is the same idea, scored by `compile_diff`
(byte-exact at the real link address, ~0.1-2 s a compile) instead of an objdump
heuristic, and speaking the rig's C++ house style directly rather than going
through pycparser, which is C-only.

    python3 tools/rig/permuter.py 0x0017c030 --src attempt_007.cpp --iters 2000
    python3 tools/rig/permuter.py --parked --min-fuzzy 90 --iters 500   # batch

What the moves are, and why each one moves the allocator: gcc 3.2's pre-IRA
allocator ranks live quantities by roughly
    floor_log2(n_refs) * freq * size / (death - birth)
so what decides s0 vs s1 is *reference count* and *live-range length* — not
declaration order. Every move below perturbs one of those two things while
leaving behaviour identical:

  hoist_decl      split `T x = e;` into `T x;` + `x = e;`   (lengthens a range)
  sink_use        move a last use later/earlier              (shifts death)
  add_temp        bind a subexpression to a new local        (adds refs, splits a range)
  inline_temp     substitute a single-use temp back          (removes refs)
  split_expr      break a compound expression in two         (adds a quantity)
  reorder_decls   permute independent declarations           (tie-break order)
  widen_local     flip u32/s32 or int/long on a local        (changes size term)

Nothing here reorders side effects: initialisers stay where they were, and
statement moves are restricted to declarations and pure assignments.
"""
from __future__ import annotations

import argparse
import json
import random
import re
import sys
import time
from pathlib import Path
from typing import List, Optional

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rigcommon as rc  # noqa: E402
from compile_diff import compile_diff  # noqa: E402
from regalloc import find_body_start, find_body_end, INLINE_DECL_RE, DECL_RE  # noqa: E402

ASSIGN_RE = re.compile(r"^(?P<indent>\s*)(?P<lhs>[A-Za-z_][\w\.\->\[\]]*)\s*=\s*(?P<rhs>[^;]+);\s*$")
CALL_ARG_RE = re.compile(r"(?P<fn>[A-Za-z_]\w*)\s*\((?P<args>[^();]+)\)")
INT_TYPES = ["u32", "s32", "int", "unsigned int", "long", "u16", "s16"]


class Source:
    """A candidate under mutation. Keeps the body span so moves never touch the
    includes, the rig's verbatim callee block, or the layout structs."""

    def __init__(self, text: str):
        self.lines = text.split("\n")
        self.body = find_body_start(self.lines)
        self.end = find_body_end(self.lines, self.body)

    def text(self) -> str:
        return "\n".join(self.lines)

    def copy(self) -> "Source":
        return Source(self.text())

    def stmt_indices(self) -> List[int]:
        return [i for i in range(self.body, self.end)
                if self.lines[i].strip() and not self.lines[i].strip().startswith("//")]


def m_hoist_decl(s: Source, rng: random.Random) -> bool:
    cands = [i for i in s.stmt_indices() if INLINE_DECL_RE.match(s.lines[i])
             and "for" not in s.lines[i].split("(")[0]]
    if not cands:
        return False
    i = rng.choice(cands)
    m = INLINE_DECL_RE.match(s.lines[i])
    s.lines[i] = f"{m.group('indent')}{m.group('name')} = {m.group('init')};"
    s.lines.insert(s.body, f"{m.group('indent')}{m.group('decl')} {m.group('name')};")
    s.end += 1
    return True


def m_reorder_decls(s: Source, rng: random.Random) -> bool:
    decls = [i for i in range(s.body, s.end) if DECL_RE.match(s.lines[i])]
    if len(decls) < 2:
        return False
    a, b = rng.sample(decls, 2)
    s.lines[a], s.lines[b] = s.lines[b], s.lines[a]
    return True


def m_add_temp(s: Source, rng: random.Random) -> bool:
    """Bind one call argument to a fresh local: one more reference, and the
    argument's value now lives in its own quantity."""
    cands = []
    for i in s.stmt_indices():
        for m in CALL_ARG_RE.finditer(s.lines[i]):
            for arg in m.group("args").split(","):
                arg = arg.strip()
                if arg and not arg.isdigit() and len(arg) < 40 and "=" not in arg:
                    cands.append((i, arg))
    if not cands:
        return False
    i, arg = rng.choice(cands)
    name = f"tmp{rng.randrange(1000)}"
    indent = re.match(r"\s*", s.lines[i]).group(0)
    ty = rng.choice(["u32", "s32", "void*"])
    s.lines[i] = s.lines[i].replace(arg, name, 1)
    s.lines.insert(i, f"{indent}{ty} {name} = ({ty})({arg});")
    s.end += 1
    return True


def m_inline_temp(s: Source, rng: random.Random) -> bool:
    """The inverse: fold a single-use local back into its use, removing a
    reference and shortening a live range."""
    for i in rng.sample(list(range(s.body, s.end)), min(12, max(1, s.end - s.body))):
        m = INLINE_DECL_RE.match(s.lines[i])
        if not m:
            continue
        name, init = m.group("name"), m.group("init")
        uses = [j for j in range(s.body, s.end)
                if j != i and re.search(rf"\b{re.escape(name)}\b", s.lines[j])]
        if len(uses) != 1:
            continue
        j = uses[0]
        s.lines[j] = re.sub(rf"\b{re.escape(name)}\b", f"({init})", s.lines[j], count=1)
        del s.lines[i]
        s.end -= 1
        return True
    return False


def m_sink_use(s: Source, rng: random.Random) -> bool:
    """Swap two adjacent independent assignments — moves a death point without
    changing what happens."""
    idx = [i for i in s.stmt_indices() if ASSIGN_RE.match(s.lines[i])]
    pairs = [(a, b) for a, b in zip(idx, idx[1:]) if b == a + 1]
    if not pairs:
        return False
    a, b = rng.choice(pairs)
    ma, mb = ASSIGN_RE.match(s.lines[a]), ASSIGN_RE.match(s.lines[b])
    # only when neither reads what the other writes
    if re.search(rf"\b{re.escape(ma.group('lhs'))}\b", mb.group("rhs")) or \
       re.search(rf"\b{re.escape(mb.group('lhs'))}\b", ma.group("rhs")) or \
       ma.group("lhs") == mb.group("lhs"):
        return False
    s.lines[a], s.lines[b] = s.lines[b], s.lines[a]
    return True


def m_widen_local(s: Source, rng: random.Random) -> bool:
    decls = [i for i in range(s.body, s.end)
             if any(re.match(rf"\s*{t}\s+\w+\s*[;=]", s.lines[i]) for t in INT_TYPES)]
    if not decls:
        return False
    i = rng.choice(decls)
    for t in INT_TYPES:
        if re.match(rf"\s*{t}\s+", s.lines[i]):
            s.lines[i] = re.sub(rf"^(\s*){t}\b", r"\1" + rng.choice(
                [x for x in INT_TYPES if x != t]), s.lines[i])
            return True
    return False


def m_split_expr(s: Source, rng: random.Random) -> bool:
    """Split `a = b OP c;` into two statements, creating an extra quantity."""
    cands = [i for i in s.stmt_indices()
             if ASSIGN_RE.match(s.lines[i]) and
             re.search(r"[^=!<>]=[^=]", s.lines[i]) and
             re.search(r"\s(\+|-|\||&|\^|\*)\s", s.lines[i])]
    if not cands:
        return False
    i = rng.choice(cands)
    m = ASSIGN_RE.match(s.lines[i])
    parts = re.split(r"\s(\+|-|\||&|\^)\s", m.group("rhs"), maxsplit=1)
    if len(parts) != 3:
        return False
    name = f"tmp{rng.randrange(1000)}"
    ind = m.group("indent")
    s.lines[i] = f"{ind}{m.group('lhs')} = {name} {parts[1]} {parts[2]};"
    s.lines.insert(i, f"{ind}u32 {name} = {parts[0]};")
    s.end += 1
    return True


# --- moves ported from decomp-permuter's randomiser, with its own weights ---
# Upstream weights perm_temp_for_expr at 100, five times anything else: binding
# a subexpression to a temporary is the move that most reliably changes which
# quantity gets a callee-saved register. The first version of this file only
# did it for call arguments, which is why 1,775 compiles found 18 distinct
# scores -- the reachable set was exhausted almost immediately.

EXPR_RE = re.compile(r"(?<![\w.])(\*?[A-Za-z_]\w*(?:\s*(?:->|\.)\s*\w+)+|"
                     r"[A-Za-z_]\w*\s*\[[^\]]+\])")


def m_temp_for_expr(s: Source, rng: random.Random) -> bool:
    """Bind any member access or subscript to a fresh local (upstream weight 100)."""
    cands = []
    for i in s.stmt_indices():
        line = s.lines[i]
        if line.strip().startswith(("for", "while", "}", "{")):
            continue
        for m in EXPR_RE.finditer(line):
            e = m.group(1).strip()
            if 3 < len(e) < 48 and "=" not in e:
                cands.append((i, e))
    if not cands:
        return False
    i, expr = rng.choice(cands)
    name = f"t{rng.randrange(10000)}"
    ind = re.match(r"\s*", s.lines[i]).group(0)
    ty = rng.choice(["u32", "s32", "u32", "void*"])
    s.lines[i] = s.lines[i].replace(expr, name, 1)
    s.lines.insert(i, f"{ind}{ty} {name} = ({ty})({expr});")
    s.end += 1
    return True


def m_refer_to_var(s: Source, rng: random.Random) -> bool:
    """Reuse an existing local in place of one of its known values."""
    names = []
    for i in range(s.body, s.end):
        m = INLINE_DECL_RE.match(s.lines[i]) or DECL_RE.match(s.lines[i])
        if m and "name" in m.groupdict():
            names.append((i, m.group("name")))
    if len(names) < 2:
        return False
    (i, a), (j, b) = rng.sample(names, 2)
    if not re.search(rf"\b{re.escape(b)}\b", s.lines[i]):
        return False
    s.lines[i] = re.sub(rf"\b{re.escape(b)}\b", a, s.lines[i], count=1)
    return True


def m_add_mask(s: Source, rng: random.Random) -> bool:
    """A no-op mask or cast: changes nothing, can change the RTL."""
    idx = [i for i in s.stmt_indices() if ASSIGN_RE.match(s.lines[i])]
    if not idx:
        return False
    i = rng.choice(idx)
    m = ASSIGN_RE.match(s.lines[i])
    wrap = rng.choice(["(u32)({})", "({}) & 0xffffffff", "({}) | 0", "({}) ^ 0",
                       "(s32)({})", "({}) + 0"])
    s.lines[i] = f"{m.group('indent')}{m.group('lhs')} = {wrap.format(m.group('rhs'))};"
    return True


def m_ins_block(s: Source, rng: random.Random) -> bool:
    """Wrap a run of statements in a bare block -- shortens a live range."""
    idx = [i for i in s.stmt_indices()
           if not s.lines[i].strip().startswith(("if", "for", "while", "else", "}", "{"))
           and s.lines[i].strip().endswith(";")]
    if len(idx) < 2:
        return False
    a = rng.choice(idx[:-1])
    b = min(a + rng.randint(1, 3), s.end - 1)
    ind = re.match(r"\s*", s.lines[a]).group(0)
    s.lines.insert(b + 1, ind + "}")
    s.lines.insert(a, ind + "{")
    s.end += 2
    return True


def m_self_assign(s: Source, rng: random.Random) -> bool:
    """`x = x;` -- an extra reference, which is a term in the priority formula."""
    names = set()
    for i in range(s.body, s.end):
        for m in re.finditer(r"\b([A-Za-z_]\w*)\s*=[^=]", s.lines[i]):
            names.add(m.group(1))
    if not names:
        return False
    idx = s.stmt_indices()
    if not idx:
        return False
    i = rng.choice(idx)
    name = rng.choice(sorted(names))
    ind = re.match(r"\s*", s.lines[i]).group(0)
    s.lines.insert(i, f"{ind}{name} = {name};")
    s.end += 1
    return True


def m_condition(s: Source, rng: random.Random) -> bool:
    """Respell a condition: `if (x)` <-> `if (x != 0)`, and flip comparisons."""
    idx = [i for i in range(s.body, s.end) if s.lines[i].strip().startswith(("if", "while"))]
    if not idx:
        return False
    i = rng.choice(idx)
    line = s.lines[i]
    for a, b in ((" != 0", ""), (" == 0", "!"), (" < ", " <= "), (" <= ", " < "),
                 (" > ", " >= "), (" >= ", " > ")):
        if a in line and rng.random() < 0.5:
            s.lines[i] = line.replace(a, b, 1)
            return True
    m = re.match(r"^(\s*(?:if|while)\s*\()([^()]+)(\).*)$", line)
    if m and "!=" not in m.group(2) and "==" not in m.group(2):
        s.lines[i] = f"{m.group(1)}({m.group(2)}) != 0{m.group(3)}"
        return True
    return False


# weighted like upstream's default_weights.toml: temp-for-expr dominates
MOVES = ([m_temp_for_expr] * 10 + [m_add_mask] * 3 + [m_add_temp] * 2 +
         [m_inline_temp] * 2 + [m_reorder_decls] * 2 + [m_ins_block] * 2 +
         [m_condition] * 2 + [m_hoist_decl] * 2 + [m_split_expr] * 2 +
         [m_refer_to_var] + [m_self_assign] + [m_sink_use] + [m_widen_local])


def search(addr: str, src: Path, iters: int, seed: int, quiet: bool = False) -> dict:
    rng = random.Random(seed)
    base_text = src.read_text()
    base = compile_diff(addr, src)
    if base.get("exact"):
        return {"ok": True, "exact": True, "iters": 0, "tried": 0, "compiled": 0,
                "file": str(src), "from_fuzzy": 100.0, "elapsed_s": 0.0,
                "note": "already byte-exact, no permutation needed"}
    best_fuzzy = float(base.get("fuzzy_pct") or 0.0)
    start_fuzzy = best_fuzzy
    best_text = base_text
    tmp = src.with_suffix(".permuter_try.cpp")
    out_path = src.with_suffix(".permuted.cpp")
    t0 = time.time()
    tried = compiled = 0
    scores = set()
    no_change = 0
    seen: set = set()

    # A random *walk*, not repeated single mutations of one fixed source. The
    # first version always mutated the best text with 1-3 moves, so it kept
    # re-deriving the same handful of shapes: 1,616 of 3,000 steps produced no
    # change at all and 1,384 compiles found only 7 distinct scores. Compound
    # shapes are where the interesting register assignments live, so the state
    # has to drift: keep a current text, accept sideways moves, and restart
    # occasionally to escape a dead end.
    cur_text, cur_fuzzy = base_text, best_fuzzy
    stall = 0
    for n in range(iters):
        if stall > 250:                       # dead end: restart from the best
            cur_text, cur_fuzzy, stall = best_text, best_fuzzy, 0
        elif rng.random() < 0.04:             # occasional restart from scratch
            cur_text, cur_fuzzy = base_text, start_fuzzy
        s = Source(cur_text)
        applied = 0
        for _ in range(rng.randint(1, 4)):
            applied += 1 if rng.choice(MOVES)(s, rng) else 0
        cand = s.text()
        if not applied or cand == cur_text:
            no_change += 1
            continue
        h = hash(cand)
        if h in seen:                          # already compiled this shape
            no_change += 1
            continue
        seen.add(h)
        tried += 1
        tmp.write_text(cand)
        try:
            res = compile_diff(addr, tmp)
        except Exception:
            continue
        if res.get("compile_errors"):
            stall += 1
            continue
        compiled += 1
        if res.get("exact"):
            out_path.write_text(cand)
            tmp.unlink(missing_ok=True)
            return {"ok": True, "exact": True, "iters": n + 1, "tried": tried,
                    "compiled": compiled, "file": str(out_path),
                    "from_fuzzy": start_fuzzy, "distinct_scores": len(scores),
                    "elapsed_s": round(time.time() - t0, 1)}
        f = float(res.get("fuzzy_pct") or 0.0)
        scores.add(round(f, 2))
        if f > best_fuzzy:
            best_fuzzy, best_text = f, cand
            if not quiet:
                print(f"  {addr} {f:6.2f} % after {n + 1} iters", flush=True)
        # accept equal-or-better, and sometimes slightly worse, so the walk can
        # cross a valley instead of sitting on the first plateau it finds
        if f >= cur_fuzzy or rng.random() < 0.10:
            cur_text, cur_fuzzy = cand, f
            stall = 0
        else:
            stall += 1
    tmp.unlink(missing_ok=True)
    if best_text != base_text:
        out_path.write_text(best_text)
    return {"ok": True, "exact": False, "iters": iters, "tried": tried,
            "compiled": compiled, "from_fuzzy": start_fuzzy, "best_fuzzy": best_fuzzy,
            "distinct_scores": len(scores), "no_change": no_change,
            "file": str(out_path) if best_text != base_text else None,
            "elapsed_s": round(time.time() - t0, 1)}


def parked_targets(min_fuzzy: float) -> List[tuple]:
    """Parked near-misses with a stored attempt to mutate, best first."""
    out = []
    status = rc.layout_status()
    for sp in (rc.RIG_OUT / "rounds").glob("*/*/summary.json"):
        try:
            s = json.loads(sp.read_text())
        except (OSError, ValueError):
            continue
        if s.get("result") == "matched" or float(s.get("best_fuzzy") or 0) < min_fuzzy:
            continue
        # a round can park a function that has since been promoted by hand or by
        # the sweep; those are done, not near-misses
        if status.get(int(s["addr"], 16), ("asm", ""))[0] == "cxx":
            continue
        # the last attempt is not the best one: workers often end on a worse
        # shape than their peak, and starting the search there throws away the
        # progress that made the function worth permuting (0x0031da48 started
        # 5 points below its own parked score)
        best_att, best_score = None, -1.0
        for att in sorted(sp.parent.glob("attempt_*.cpp")):
            sc = att.parent / f"score_{att.stem.split('_')[1]}.json"
            fz = -1.0
            if sc.exists():
                try:
                    fz = float(json.loads(sc.read_text()).get("fuzzy") or -1.0)
                except (OSError, ValueError):
                    fz = -1.0
            if fz < 0:
                try:
                    fz = float(compile_diff(s["addr"], att).get("fuzzy_pct") or 0.0)
                except Exception:
                    continue
            if fz > best_score:
                best_att, best_score = att, fz
        if best_att is not None:
            out.append((max(float(s["best_fuzzy"]), best_score), s["addr"],
                        s.get("size", 0), best_att))
    out.sort(reverse=True)
    seen, uniq = set(), []
    for row in out:
        if row[1] not in seen:
            seen.add(row[1])
            uniq.append(row)
    return uniq


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("target", nargs="?")
    ap.add_argument("--src")
    ap.add_argument("--parked", action="store_true", help="batch over parked near-misses")
    ap.add_argument("--min-fuzzy", type=float, default=90.0)
    ap.add_argument("--iters", type=int, default=1000)
    ap.add_argument("--limit", type=int, default=10, help="functions per batch")
    ap.add_argument("--seed", type=int, default=1)
    args = ap.parse_args()

    if args.parked:
        rows = parked_targets(args.min_fuzzy)[: args.limit]
        print(f"permuter: {len(rows)} parked targets >= {args.min_fuzzy} %")
        wins = []
        for fz, addr, size, att in rows:
            print(f"[{addr} {size} B, parked at {fz:.2f} %] {att.parent.parent.name}", flush=True)
            r = search(addr, att, args.iters, args.seed)
            if r.get("exact"):
                wins.append({"addr": addr, "size": size, "file": r["file"]})
                print(f"  EXACT after {r['iters']} iters ({r['elapsed_s']} s) -> {r['file']}", flush=True)
            else:
                print(f"  {r.get('best_fuzzy', 0):.2f} % best from {r.get('from_fuzzy', 0):.2f} "
                      f"({r['compiled']} compiled, {r.get('distinct_scores', 0)} distinct scores, "
                      f"{r.get('no_change', 0)} no-op moves, {r['elapsed_s']} s)", flush=True)
        print(json.dumps({"wins": wins, "bytes": sum(w["size"] for w in wins)}, indent=1))
        return 0

    if not args.target or not args.src:
        ap.error("give a target and --src, or --parked")
    print(json.dumps(search(args.target, Path(args.src), args.iters, args.seed), indent=1))
    return 0


if __name__ == "__main__":
    sys.exit(main())
