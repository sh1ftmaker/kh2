#!/usr/bin/env python3
"""quality.py: what each built function is made of.

Every function in layout.tsv is built from source and the ELF is byte-identical; this tool
says how much of that source is C/C++ a programmer could have written. It reads
out/generated/attribution.tsv (tools/attribute.py: the source lines and the assembly
statements that end up in each function, taken from the compiler's own output), writes
out/generated/quality.tsv (addr, size, source, kind, named, notes) and prints totals.

kind, worst first; a function gets the worst that applies:
  asm-file   it comes from a .s file (not decompiled; Sony's own assembly included)
  cpu-asm    assembly statements with ordinary processor instructions C could have produced
  volatile   memory reached through volatile casts: machine code transcribed load by load
             (not counted on a line that names a hardware register, 0x1000xxxx and the like)
  reg-pin    a variable pinned to a machine register (register T x asm("$16"))
  barrier    an empty assembly statement, there only to steer the optimiser
  flags      its code depends on an optimiser switch the rest of the game does not use
  game-asm   assembly the original programmers wrote too: vector-unit (VU0) maths, 128-bit
             vector copies, assertion traps, interrupt switches. Counts as decompiled.
  cpp        C or C++ with none of the above

"Decompiled" is cpp plus game-asm. named: 1 when functions.tsv gives a real name.
"""
import csv
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
STATUS = ROOT / "out/generated/layout_status.tsv"
OUT = ROOT / "out/generated/quality.tsv"
PLACEHOLDER = re.compile(r"^(?:func_|FUN_|D_|sub_)[0-9a-fA-F]{6,8}(?:\(.*\))?$|"
                         r"^_Z\d+(?:func|wtarget|ctarget|u_call\d|u_tail\d|trap)_?[0-9a-f]{8}")
ATTR = ROOT / "out/generated/attribution.tsv"
KINDS = ("cpp", "game-asm", "flags", "barrier", "reg-pin", "volatile", "cpu-asm", "asm-file")
CLEAN = ("cpp", "game-asm")
RANK = {k: i for i, k in enumerate(KINDS)}
BARRIER = re.compile(r"(?:\b__asm__|\basm)\s*(?:volatile|__volatile__)?\s*\(\s*\"\"")
PIN = re.compile(r"\bregister\b[^;{}]*\b(?:asm|__asm__)\s*\(\s*\"\$")
VOLATILE = re.compile(r"\bvolatile\b(?!\s*\()")
HARDWARE = re.compile(r"\b0x(?:1000|1200|[bB]000)[0-9a-fA-F]{4}\b")
GAME_ASM = {"vu0", "qcopy", "mmi", "trap", "kernel"}
SUFFIX_FLAGS = re.compile(r"_(?:nosched|nsi|nsr|mam|ncfj|aj1|nsamam|gnsamam|gnsa_nogcse)\.(?:c|cpp)$")


def expand(spec):
    out = set()
    for part in filter(None, spec.split(",")):
        a, _, b = part.partition("-")
        out.update(range(int(a), int(b or a) + 1))
    return out


def classify_function(src_lines, row, suffix_flags):
    """(kind, notes) for one attributed function."""
    asm = Counter()
    for item in row["asm"].split():
        k, _, n = item.partition(":")
        asm[k] += int(n)
    nums = expand(row["lines"]) | expand(row["body"])
    text = "\n".join(src_lines[n - 1] for n in sorted(nums) if 0 < n <= len(src_lines))
    found = Counter()
    found["cpu-asm"] = asm["cpu"] + asm["nop"]
    # volatile on a line that names a hardware register address is what Sony's own macros do
    found["volatile"] = sum(len(VOLATILE.findall(ln)) for ln in text.split("\n") if not HARDWARE.search(ln))
    found["reg-pin"] = len(PIN.findall(text))
    found["barrier"] = len(BARRIER.findall(text))
    found["flags"] = asm["steered"] + int(suffix_flags)
    found["game-asm"] = sum(asm[k] for k in GAME_ASM)
    kind = max((k for k in found if found[k]), key=RANK.get, default="cpp")
    notes = " ".join(f"{k}:{found[k]}" for k in KINDS if found[k])
    if re.search(r"\bgoto\b", text):
        notes = (notes + " goto").strip()
    return kind, notes


def load():
    if not STATUS.exists():
        sys.exit("build first (no out/generated/layout_status.tsv)")
    sizes = {}
    with (ROOT / "layout.tsv").open() as fh:
        for ln in fh:
            if ln[0] in "#a":
                continue
            p = ln.rstrip("\n").split("\t")
            sizes[int(p[0], 16)] = int(p[2])
    names = {}
    for ln in (ROOT / "functions.tsv").read_text().splitlines():
        if ln.startswith("#") or not ln.strip():
            continue
        p = ln.split("\t")
        if len(p) >= 2:
            names[int(p[1], 16)] = p[0]
    by_file = defaultdict(set)
    with STATUS.open() as fh:
        rows = list(csv.DictReader(fh, delimiter="\t"))
    for r in rows:
        by_file[r["source"]].add(int(r["addr"], 16))
    if not ATTR.exists():
        sys.exit("run tools/attribute.py first (no out/generated/attribution.tsv)")
    attr = {}
    with ATTR.open() as fh:
        for r in csv.DictReader(fh, delimiter="\t"):
            attr[int(r["addr"], 16)] = r
    kind, notes, texts = {}, {}, {}
    for path, addrs in by_file.items():
        if path.endswith((".s", ".S")):
            kind.update({a: "asm-file" for a in addrs})
            continue
        if path not in texts:
            f = ROOT / path
            texts[path] = f.read_text(errors="ignore").split("\n") if f.exists() else []
        st = bool(SUFFIX_FLAGS.search(path))
        for a in addrs:
            if a in attr:
                kind[a], notes[a] = classify_function(texts[path], attr[a], st)
            else:
                kind[a], notes[a] = "cpu-asm", "unattributed"
    out = []
    for r in rows:
        a = int(r["addr"], 16)
        nm = names.get(a, "")
        out.append({"addr": f"{a:08x}", "size": sizes.get(a, 0), "source": r["source"], "kind": kind[a],
                    "named": int(bool(nm) and not PLACEHOLDER.search(nm)), "name": nm,
                    "notes": notes.get(a, "")})
    return out


def main():
    rows = load()
    OUT.parent.mkdir(parents=True, exist_ok=True)
    with OUT.open("w", newline="") as fh:
        w = csv.DictWriter(fh, ["addr", "size", "source", "kind", "named", "notes"], delimiter="\t",
                           extrasaction="ignore", lineterminator="\n")
        w.writeheader()
        w.writerows(rows)
    n, b = Counter(), Counter()
    for r in rows:
        n[r["kind"]] += 1
        b[r["kind"]] += r["size"]
    tot_n, tot_b = len(rows), sum(r["size"] for r in rows)
    print(f"{tot_n} functions, {tot_b:,} bytes, all built from source")
    for k in KINDS:
        if n[k]:
            print(f"  {k:<11}{n[k]:>6} fns {b[k]:>10,} B  {100 * b[k] / tot_b:5.1f} %")
    dn, db = sum(n[k] for k in CLEAN), sum(b[k] for k in CLEAN)
    print(f"  decompiled {dn:>6} fns {db:>10,} B  {100 * db / tot_b:5.1f} %")
    named = [r for r in rows if r["named"]]
    print(f"  named      {len(named):>6} fns {sum(r['size'] for r in named):>10,} B  "
          f"{100 * sum(r['size'] for r in named) / tot_b:5.1f} %")


if __name__ == "__main__":
    main()
