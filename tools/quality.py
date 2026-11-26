#!/usr/bin/env python3
"""quality.py: what each built function is made of.

Every function in layout.tsv is built from source and the ELF is byte-identical;
this tool says how much of that source is C/C++ a programmer could have written.
Writes out/generated/quality.tsv (addr, size, source, kind, named) and prints totals.

kind:
  cpp        C or C++ with no assembly and no register pin
  asm-file   the function comes from a .s file (not decompiled)
  vu0-asm    its body has assembly statements, all of them vector-unit (COP2/VU0) or
             128-bit load/store instructions that C cannot express on this compiler;
             original PS2 code wrote these the same way, so they count as decompiled
  inline-asm its body contains other assembly instructions (not decompiled as written)
  reg-pin    its body pins a variable to a register (register T x asm("$n"))
  asm-unit   it sits in a C/C++ file that has assembly code or pins which could not be
             attributed to single functions (counted as not clean until someone looks)

named: 1 when functions.tsv gives the address a real name (not an address placeholder).

File-scope `asm("a = b")` aliases and `asm("symbol")` labels on declarations are linkage,
not code, and do not count.
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
ASM_STMT = re.compile(r"\b(?:__asm__|asm)\s*(?:__volatile__|volatile)?\s*\(")
PIN = re.compile(r"\bregister\b[^;{}]*\basm\s*\(\s*\"\$")
ANCHOR = re.compile(r"/\*\s*TARGET\s+([0-9a-f]{8})\s*\*/|\bnamespace\s+n([0-9a-f]{8})\b|^//\s*(?:0x)?([0-9a-f]{8})\b", re.M)
VU0_LINE = re.compile(r"^\s*(?:\.set\s+\w+|(?:lqc2|sqc2|qmfc2|qmtc2|cfc2|ctc2|vcallms|vcallmsr|bc2[ft]l?|v[a-z0-9]+(?:\.[xyzw]+)?)\b[^\n]*)?\s*;?\s*$")
ALIAS_LINE = re.compile(r"^\s*(?:[\w.$]+\s*=\s*[\w.$]+|\.(?:globl|global|weak|set|type|size|equ)\b[^\n]*)?\s*;?\s*$")


def strip_comments_keep_anchors(text):
    """Blank out comments (keeping length and newlines) except the anchor comments."""
    def repl(m):
        s = m.group(0)
        if ANCHOR.fullmatch(s.strip()) or re.match(r"//\s*(?:0x)?[0-9a-f]{8}\b", s) or "TARGET" in s:
            return s
        return re.sub(r"[^\n]", " ", s)
    return re.sub(r"//[^\n]*|/\*.*?\*/", repl, text, flags=re.S)


def asm_strings(code, pos):
    """The concatenated string literals of the asm( ... ) starting at pos, and its end."""
    depth, i, out = 0, code.index("(", pos), []
    while i < len(code):
        c = code[i]
        if c == '"':
            j = i + 1
            while j < len(code) and code[j] != '"':
                j += 2 if code[j] == "\\" else 1
            if depth == 1:
                out.append(code[i + 1:j])
            i = j
        elif c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
            if depth == 0:
                break
        elif c == ":" and depth == 1:
            break                                   # operands follow; the template is complete
        i += 1
    return "".join(out).replace("\\n", "\n").replace("\\t", " "), i


def code_asm_positions(code):
    """Positions of asm statements that hold instructions (not labels, not aliases), and of pins."""
    hits = []
    for m in PIN.finditer(code):
        hits.append((m.start(), "reg-pin"))
    for m in ASM_STMT.finditer(code):
        line_start = code.rfind("\n", 0, m.start()) + 1
        before = code[line_start:m.start()].rstrip()
        if not before:                              # asm( on its own line: look at what precedes
            before = code[:line_start].rstrip()[-80:]
        if re.search(r"\bregister\b[^;{}]*$", before):
            continue                                # the pin regex has it
        if re.search(r"(?:[\w\]]|\))\s*$", before) and not re.search(r"\b(?:if|while|for|switch|return|else|do)\s*$|[;{}]\s*$", before):
            continue                                # asm("symbol") label on a declaration
        text, _ = asm_strings(code, m.start())
        if all(ALIAS_LINE.match(ln) for ln in text.split("\n")):
            continue                                # symbol alias / directive only
        vu0 = all(VU0_LINE.match(ln) for ln in text.split("\n"))
        hits.append((m.start(), "vu0-asm" if vu0 else "inline-asm"))
    return sorted(hits)


RANK = {"cpp": 0, "vu0-asm": 1, "reg-pin": 2, "inline-asm": 3}
CLEAN = ("cpp", "vu0-asm")


def classify_file(path, addrs):
    """addr -> kind for the functions of one C/C++ source."""
    text = (ROOT / path).read_text(errors="ignore")
    code = strip_comments_keep_anchors(text)
    hits = code_asm_positions(code)
    if not hits:
        return {a: "cpp" for a in addrs}
    anchors = []
    for m in ANCHOR.finditer(code):
        a = int(next(g for g in m.groups() if g), 16)
        if a in addrs and (not anchors or anchors[-1][1] != a):
            anchors.append((m.start(), a))
    seen = {a for _, a in anchors}
    if not anchors or len(seen) < len(addrs) * 0.9:
        return {a: "asm-unit" for a in addrs}       # cannot tell functions apart in this file
    kinds = {a: "cpp" for a in addrs}
    starts = [p for p, _ in anchors]
    import bisect
    for pos, kind in hits:
        i = bisect.bisect_right(starts, pos) - 1
        if i < 0:
            continue                                # before the first function: file-scope helper
        a = anchors[i][1]
        if RANK[kind] > RANK[kinds[a]]:
            kinds[a] = kind
    for a in addrs:
        if a not in seen:
            kinds[a] = "asm-unit"
    return kinds


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
    kind = {}
    for path, addrs in by_file.items():
        if path.endswith((".s", ".S")):
            kind.update({a: "asm-file" for a in addrs})
        elif not path or not (ROOT / path).exists():
            kind.update({a: "asm-unit" for a in addrs})
        else:
            kind.update(classify_file(path, addrs))
    out = []
    for r in rows:
        a = int(r["addr"], 16)
        nm = names.get(a, "")
        out.append({"addr": f"{a:08x}", "size": sizes.get(a, 0), "source": r["source"], "kind": kind[a],
                    "named": int(bool(nm) and not PLACEHOLDER.search(nm)), "name": nm})
    return out


def main():
    rows = load()
    OUT.parent.mkdir(parents=True, exist_ok=True)
    with OUT.open("w", newline="") as fh:
        w = csv.DictWriter(fh, ["addr", "size", "source", "kind", "named"], delimiter="\t",
                           extrasaction="ignore", lineterminator="\n")
        w.writeheader()
        w.writerows(rows)
    n, b = Counter(), Counter()
    for r in rows:
        n[r["kind"]] += 1
        b[r["kind"]] += r["size"]
    tot_n, tot_b = len(rows), sum(r["size"] for r in rows)
    print(f"{tot_n} functions, {tot_b:,} bytes, all built from source")
    for k in ("cpp", "vu0-asm", "reg-pin", "inline-asm", "asm-unit", "asm-file"):
        if n[k]:
            print(f"  {k:<11}{n[k]:>6} fns {b[k]:>10,} B  {100 * b[k] / tot_b:5.1f} %")
    named = [r for r in rows if r["named"]]
    print(f"  named      {len(named):>6} fns {sum(r['size'] for r in named):>10,} B  "
          f"{100 * sum(r['size'] for r in named) / tot_b:5.1f} %")


if __name__ == "__main__":
    main()
