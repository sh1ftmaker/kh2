#!/usr/bin/env python3
"""lane.py: the non-matching lane (docs/PLAN.md K1) and its structural classes (K2).

`nonmatching/<addr>.cpp` holds one written-but-not-matching function each. The
lane is compiled and scored against the original, never linked: `make` and the
whole-ELF compare do not see it, and nothing in it counts as matched.

    python3 tools/lane.py score [--jobs N] [ADDR ...]   score lane files, write nonmatching/SCORES.tsv
    python3 tools/lane.py import DIR [--index DIR/index.tsv]   bring candidates in (keeps the best per address)
    python3 tools/lane.py exact                         lane functions that are byte-exact: promote them
    python3 tools/lane.py prune                         drop lane files whose function is now matched

Scoring is tools/rig/compile_diff.py, the same scorer the rig uses. SCORES.tsv:

    addr  size  symbol  pct  class  origin

`pct` is objdiff's instruction match. `class`:

    exact        byte-identical in the mini-link; waiting for promote.py
    regalloc     every differing row is the same instruction with other registers
    scheduling   the differing rows are the same instructions in another order
                 (registers and branch targets ignored)
    operands     same instructions, some constant or offset differs
    different    instructions missing, extra or changed
    error        does not compile or link, or contains a banned construct

`regalloc` and `scheduling` are the structurally matched classes: the function
is right in shape and the remaining difference is the compiler's register
choice or instruction order. tools/site_data.py gives them size x pct credit in
the weighted figure; byte-matched progress never includes them.
"""
import argparse
import csv
import json
import os
import re
import shutil
import sys
from collections import Counter
from concurrent.futures import ProcessPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
LANE = ROOT / "nonmatching"
SCORES = LANE / "SCORES.tsv"
STATUS = ROOT / "out/generated/layout_status.tsv"
STRUCTURAL = ("regalloc", "scheduling")
FIELDS = ["addr", "size", "symbol", "pct", "class", "origin"]
ORIGIN_RE = re.compile(r"^// FIXME\(lane\): not matching; origin: (\S+)", re.M)
# other projects' sources (twin transfer from a corpus) are not ours to commit; stubs carry nothing
SKIP_ORIGINS = {"corpus", "stub"}

sys.path.insert(0, str(ROOT / "tools/rig"))


def unmatched():
    """addr -> True for every function the build does not link from source."""
    if not STATUS.exists():
        sys.exit("run `python3 tools/build_elf.py objects && make` first (no layout_status.tsv)")
    with STATUS.open() as fh:
        return {r["addr"].lower() for r in csv.DictReader(fh, delimiter="\t") if r["mode"].strip() != "cxx"}


def registry_symbol(addr):
    import rigcommon as rc
    try:
        return rc.resolve("0x" + addr).symbol
    except SystemExit:
        return None


def _norm(text):
    import compile_diff as cd
    text = cd.REG_RE.sub("R", text.strip())
    m = text.split()
    if m and (m[0] in cd.BRANCH or m[0] in ("j", "jal", "b", "bal", "bc1t", "bc1f", "bc1tl", "bc1fl")):
        text = re.sub(r"0x[0-9a-f]+$", "T", text)          # branch target moves when code is reordered
    return text


def classify(pairs):
    """Name the difference from objdiff's differing rows (left = ours, right = the original)."""
    import compile_diff as cd
    rows = [(p.get("left") or "", p.get("right") or "") for p in pairs]
    rows = [(l, r) for l, r in rows if l != r]
    if not rows:
        return "different"                                   # bytes differ but no instruction row does
    if all(l and r and cd.REG_RE.sub("", l) == cd.REG_RE.sub("", r) for l, r in rows):
        return "regalloc"
    ours = Counter(_norm(l) for l, _ in rows if l and l.strip() != "nop")
    orig = Counter(_norm(r) for _, r in rows if r and r.strip() != "nop")
    if ours == orig:
        return "scheduling"
    if all(l and r and cd._mnemonic(l) == cd._mnemonic(r) for l, r in rows):
        return "operands"
    return "different"


def score_one(path):
    """(row dict) for one lane file. Runs in a worker process."""
    import compile_diff as cd
    captured = {}
    orig_classify = cd.classify

    def spy(pairs):
        captured["pairs"] = pairs
        return orig_classify(pairs)

    cd.classify = spy
    path = Path(path)
    addr = path.stem.lower()
    origin = (ORIGIN_RE.search(path.read_text(errors="ignore")) or [None, "hand"])[1]
    row = {"addr": addr, "size": 0, "symbol": "", "pct": "0.00", "class": "error", "origin": origin}
    try:
        res = cd.compile_diff("0x" + addr, path.resolve(), diff_cap=0)
    except SystemExit as e:                                   # rigcommon.die
        row["note"] = str(e)
        return row
    except Exception as e:  # noqa: BLE001  (one bad file must not stop the sweep)
        row["note"] = f"{type(e).__name__}: {e}"
        return row
    finally:
        cd.classify = orig_classify
    row["size"], row["symbol"] = res.get("size", 0), res.get("symbol", "")
    if res.get("compile_errors") or res.get("link_errors") or res.get("compiled_size") is None:
        row["note"] = "; ".join((res.get("compile_errors") or res.get("link_errors") or ["no output"])[:1])[:200]
        return row
    row["pct"] = f"{float(res.get('fuzzy_pct') or 0):.2f}"
    row["class"] = "exact" if res.get("exact") else classify(captured.get("pairs") or [])
    if not res.get("exact") and not res.get("size_ok") and row["class"] in STRUCTURAL:
        row["class"] = "different"                            # larger than its slot: never structural
    return row


def read_scores():
    if not SCORES.exists():
        return {}
    with SCORES.open() as fh:
        return {r["addr"]: r for r in csv.DictReader(fh, delimiter="\t")}


def write_scores(rows):
    with SCORES.open("w", newline="") as fh:
        w = csv.DictWriter(fh, FIELDS, delimiter="\t", extrasaction="ignore", lineterminator="\n")
        w.writeheader()
        for a in sorted(rows):
            w.writerow(rows[a])


def run_scores(paths, jobs):
    out = []
    with ProcessPoolExecutor(max_workers=jobs) as ex:
        for i, row in enumerate(ex.map(score_one, [str(p) for p in paths], chunksize=4), 1):
            out.append(row)
            if i % 500 == 0:
                print(f"  scored {i}/{len(paths)}", file=sys.stderr)
    return out


def summary(rows):
    by = Counter(r["class"] for r in rows.values())
    size = Counter()
    for r in rows.values():
        size[r["class"]] += int(r["size"])
    print(f"lane: {len(rows)} functions, {sum(size.values()):,} bytes")
    for c in ("exact", "regalloc", "scheduling", "operands", "different", "error"):
        if by[c]:
            print(f"  {c:<11}{by[c]:>6} fns {size[c]:>10,} B")


def cmd_score(args):
    todo = unmatched()
    files = sorted(LANE.glob("*.cpp"))
    if args.addr:
        want = {a.lower().removeprefix("0x").zfill(8) for a in args.addr}
        files = [f for f in files if f.stem.lower() in want]
    stale = [f for f in files if f.stem.lower() not in todo]
    if stale:
        print(f"note: {len(stale)} lane files are for functions already matched; run `lane.py prune`", file=sys.stderr)
    files = [f for f in files if f.stem.lower() in todo]
    rows = read_scores() if args.addr else {}
    for row in run_scores(files, args.jobs):
        rows[row["addr"]] = row
        if row["class"] == "error" and args.addr:
            print(f"{row['addr']}: error: {row.get('note', '')}", file=sys.stderr)
    write_scores(rows)
    summary(rows)


def cmd_import(args):
    src = Path(args.dir).resolve()
    index = Path(args.index) if args.index else src / "index.tsv"
    origin_of = {}
    if index.exists():
        with index.open() as fh:
            origin_of = {r["addr"].lower(): r.get("source", "import") for r in csv.DictReader(fh, delimiter="\t")}
    todo = unmatched()
    LANE.mkdir(exist_ok=True)
    stage = ROOT / "out/lane_import"
    shutil.rmtree(stage, ignore_errors=True)
    stage.mkdir(parents=True)
    skipped = Counter()
    for f in sorted(src.glob("*.cpp")):
        addr = f.stem.lower()
        origin = origin_of.get(addr, "import")
        if addr not in todo:
            skipped["already matched"] += 1
            continue
        if origin in SKIP_ORIGINS:
            skipped[f"origin {origin}"] += 1
            continue
        body = f.read_text(errors="ignore")
        body = re.sub(r"\A(?://\s*coverage[^\n]*\n)+", "", body)   # the exporter's own header lines
        sym = registry_symbol(addr)
        if sym and sym != f"func_{addr}":                        # the registry gained a real name since
            body = body.replace(f'asm("func_{addr}")', f'asm("{sym}")')
        head = (f"// FIXME(lane): not matching; origin: {origin} (machine-written, unreviewed).\n"
                f"// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.\n")
        (stage / f.name).write_text(head + body)
    old = read_scores()
    kept = dict(old)
    n_new = n_better = 0
    for row in run_scores(sorted(stage.glob("*.cpp")), args.jobs):
        a = row["addr"]
        if row["class"] == "error":
            skipped["does not compile, or banned construct"] += 1
            continue
        if float(row["pct"]) <= 0:
            skipped["0 % similar"] += 1
            continue
        if a in old and float(old[a]["pct"]) >= float(row["pct"]):
            skipped["lane already has a better one"] += 1
            continue
        n_better += a in old
        n_new += a not in old
        shutil.copyfile(stage / f"{a}.cpp", LANE / f"{a}.cpp")
        kept[a] = row
    shutil.rmtree(stage, ignore_errors=True)
    write_scores(kept)
    print(f"imported {n_new} new, replaced {n_better}")
    for k, v in skipped.most_common():
        print(f"  skipped {v}: {k}")
    summary(kept)


def cmd_exact(_args):
    for a, r in sorted(read_scores().items()):
        if r["class"] == "exact":
            print(f"{a}\t{r['size']}\t{r['symbol']}\tnonmatching/{a}.cpp")


def cmd_prune(_args):
    todo, rows, n = unmatched(), read_scores(), 0
    for f in sorted(LANE.glob("*.cpp")):
        if f.stem.lower() not in todo:
            f.unlink()
            rows.pop(f.stem.lower(), None)
            n += 1
    write_scores(rows)
    print(f"pruned {n} lane files whose function is matched")


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    sub = ap.add_subparsers(dest="cmd", required=True)
    s = sub.add_parser("score")
    s.add_argument("addr", nargs="*")
    s.add_argument("--jobs", type=int, default=max(1, (os.cpu_count() or 4) // 2))
    s.set_defaults(fn=cmd_score)
    s = sub.add_parser("import")
    s.add_argument("dir")
    s.add_argument("--index")
    s.add_argument("--jobs", type=int, default=max(1, (os.cpu_count() or 4) // 2))
    s.set_defaults(fn=cmd_import)
    sub.add_parser("exact").set_defaults(fn=cmd_exact)
    sub.add_parser("prune").set_defaults(fn=cmd_prune)
    args = ap.parse_args()
    args.fn(args)


if __name__ == "__main__":
    main()
