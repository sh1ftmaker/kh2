#!/usr/bin/env python3
"""detrick.py: remove compiler-steering constructs that turn out not to be needed.

For every source file the build compiles, find the constructs below, take each one out, and
recompile. A removal is kept only when the object file is unchanged (every loaded section,
relocation and symbol identical to the object built from the untouched file), so the linked
game cannot change. No model is involved.

  barrier   empty assembly statements: asm(""), asm volatile("" ::: "memory"), asm("" : "+r"(x))
  pin       variables pinned to a machine register: register T x asm("$16")
  nop       assembly statements that hold only nop instructions
  volatile  the volatile qualifier on casts and declarations
  expect    __builtin_expect(x, n) around a condition
  flags     extra compiler switches of a linked unit (linked_units.tsv), except -G0

Run inside the build sandbox, from the repository root:

  tools/sandbox.sh python3 tools/detrick.py --cmds <file> [--kinds barrier,pin,nop] [--jobs N] [--apply] [src ...]

<file> holds the compile commands, one per object: `python3 tools/attribute.py` writes it to
out/cmds.txt. Without --apply nothing is written. After a flags pass run `make` and
tools/attribute.py again before the next pass, so the commands carry the new switches; a
switch and a source construct can each be removable only while the other is present.
Prints one line per file: sites found, sites removed.
"""
import argparse
import os
import re
import shlex
import struct
import subprocess
import sys
from concurrent.futures import ProcessPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SKIP_SECTIONS = re.compile(r"^(?:\.rela?)?\.(?:mdebug|stab|debug|line|comment|gnu\.attributes|pdr)")

BARRIER = re.compile(r"(?:\b__asm__|\basm)\s*(?:volatile|__volatile__)?\s*\(\s*\"\"\s*(:[^;]*?)?\)\s*;")
NOP = re.compile(r"(?:\b__asm__|\basm)\s*(?:volatile|__volatile__)?\s*\(\s*((?:\"(?:\\[nt]|\s|nop|;)*\"\s*)+)\)\s*;")
VOLATILE = re.compile(r"\bvolatile\s+(?!\()")
EXPECT = re.compile(r"\b__builtin_expect\s*\(")
PIN = re.compile(r"\bregister\b(\s+[^;{}=()]*?)\s*\b(?:asm|__asm__)\s*\(\s*\"\$?\w+\"\s*\)")


def sections(path):
    """The comparable content of an ELF32 little-endian object."""
    d = Path(path).read_bytes()
    shoff, = struct.unpack_from("<I", d, 0x20)
    shentsize, shnum, shstrndx = struct.unpack_from("<HHH", d, 0x2E)
    hdr = [struct.unpack_from("<10I", d, shoff + i * shentsize) for i in range(shnum)]
    stroff = hdr[shstrndx][4]
    out = []
    for h in hdr:
        name = d[stroff + h[0]:d.index(b"\0", stroff + h[0])].decode()
        if SKIP_SECTIONS.match(name) or name in (".shstrtab",):
            continue
        body = b"" if h[1] == 8 else d[h[4]:h[4] + h[5]]            # SHT_NOBITS has no bytes
        out.append((name, h[1], h[2], h[5], h[8], body))
    return out


def find_sites(text, kinds):
    sites = []
    if "barrier" in kinds:
        for m in BARRIER.finditer(text):
            ops = m.group(1) or ""
            if '"=' in ops:                       # an output-only operand defines a value: not a no-op
                continue
            sites.append((m.start(), m.end(), "", "barrier"))
    if "nop" in kinds:
        for m in NOP.finditer(text):
            if "nop" in m.group(1):
                sites.append((m.start(), m.end(), "", "nop"))
    if "pin" in kinds:
        for m in PIN.finditer(text):
            sites.append((m.start(), m.end(), m.group(1).lstrip(), "pin"))
    if "volatile" in kinds:
        for m in VOLATILE.finditer(text):
            before = text[max(0, m.start() - 12):m.start()]
            if re.search(r"(?:asm|__asm__)\s*$", before):
                continue
            sites.append((m.start(), m.end(), "", "volatile"))
    if "expect" in kinds:
        for m in EXPECT.finditer(text):
            depth, i, comma = 1, m.end(), None
            while i < len(text) and depth:
                c = text[i]
                depth += c == "("
                depth -= c == ")"
                if c == "," and depth == 1:
                    comma = i
                i += 1
            if comma and not depth:
                sites.append((m.start(), i, "(" + text[m.end():comma].strip() + ")", "expect"))
    sites.sort()
    clean, end = [], 0
    for s in sites:                               # nested sites: keep the outer one
        if s[0] >= end:
            clean.append(s)
            end = s[1]
    return clean


def apply_sites(text, sites, drop):
    out, last = [], 0
    for i, (s, e, rep, _) in enumerate(sites):
        if i in drop:
            out.append(text[last:s])
            out.append(rep + "\n" * text.count("\n", s, e))      # keep line numbers stable
            last = e
    out.append(text[last:])
    return "".join(out)


def work(job):
    src, cmd, kinds, do_apply = job
    path = ROOT / src
    text = path.read_text(errors="surrogateescape")
    sites = find_sites(text, kinds)
    if not sites:
        return src, 0, 0, {}
    tmp_src = path.with_name(f"zzdt_{os.getpid()}{path.suffix}")
    tmp_obj = ROOT / "out" / f"zzdt_{os.getpid()}.o"
    argv = shlex.split(cmd)
    argv[argv.index("-o") + 1] = str(tmp_obj)
    argv[-1] = str(tmp_src)

    def build(body):
        tmp_src.write_text(body, errors="surrogateescape")
        tmp_obj.unlink(missing_ok=True)
        r = subprocess.run(argv, cwd=ROOT, capture_output=True)
        if r.returncode or not tmp_obj.exists():
            return None
        return sections(tmp_obj)

    try:
        base = build(text)
        if base is None:
            return src, len(sites), -1, {}
        keep = set()

        def reduce(group):
            if build(apply_sites(text, sites, keep | set(group))) == base:
                keep.update(group)
            elif len(group) > 1:
                mid = len(group) // 2
                reduce(group[:mid])
                reduce(group[mid:])

        for _ in range(2):                        # a second pass: one removal can unlock another
            before = len(keep)
            reduce([i for i in range(len(sites)) if i not in keep])
            if len(keep) == before or len(keep) == len(sites):
                break
        if keep and do_apply:
            final = apply_sites(text, sites, keep)
            if build(final) == base:
                path.write_text(final, errors="surrogateescape")
            else:
                keep = set()
        by = {}
        for i, s in enumerate(sites):
            t = by.setdefault(s[3], [0, 0])
            t[0] += 1
            t[1] += i in keep
        return src, len(sites), len(keep), by
    finally:
        tmp_src.unlink(missing_ok=True)
        tmp_obj.unlink(missing_ok=True)


def flag_work(job):
    src, cmd, flags = job
    path = ROOT / src
    tmp_src = path.with_name(f"zzdt_{os.getpid()}{path.suffix}")
    tmp_obj = ROOT / "out" / f"zzdt_{os.getpid()}.o"
    argv = shlex.split(cmd)
    argv[argv.index("-o") + 1] = str(tmp_obj)
    argv[-1] = str(tmp_src)
    tmp_src.write_bytes(path.read_bytes())

    def build(args):
        tmp_obj.unlink(missing_ok=True)
        r = subprocess.run(args, cwd=ROOT, capture_output=True)
        return sections(tmp_obj) if not r.returncode and tmp_obj.exists() else None

    try:
        base = build(argv)
        dropped = []
        if base is not None:
            for f in flags:
                trial = list(argv)
                for d in dropped + [f]:
                    trial.remove(d)
                if build(trial) == base:
                    dropped.append(f)
        return src, flags, dropped
    finally:
        tmp_src.unlink(missing_ok=True)
        tmp_obj.unlink(missing_ok=True)


def run_flags(a, cmds):
    tsv = ROOT / "linked_units.tsv"
    lines = tsv.read_text().split("\n")
    jobs, where = [], {}
    for n, ln in enumerate(lines):
        p = ln.split("\t")
        if ln.startswith("#") or len(p) < 5 or p[0] == "source" or p[0] not in cmds:
            continue
        flags = [f for f in p[4].split() if f not in ("-", "-G0") and not f.startswith("cc=")]
        if flags and (not a.src or p[0] in a.src):
            jobs.append((p[0], cmds[p[0]], flags))
            where[p[0]] = n
    found = removed = 0
    per = {}
    with ProcessPoolExecutor(a.jobs) as ex:
        for src, flags, dropped in ex.map(flag_work, jobs):
            found += len(flags)
            removed += len(dropped)
            for f in flags:
                t = per.setdefault(f, [0, 0])
                t[0] += 1
                t[1] += f in dropped
            if dropped:
                print(f"{src}\t-{' -'.join(d.lstrip('-') for d in dropped)}", flush=True)
                p = lines[where[src]].split("\t")
                left = p[4].split()
                for d in dropped:
                    left.remove(d)
                p[4] = " ".join(left) or "-"
                lines[where[src]] = "\t".join(p)
    if a.apply:
        tsv.write_text("\n".join(lines))
    for f, (n, r) in sorted(per.items()):
        print(f"total {f}: {r} of {n} removed")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--cmds", required=True)
    ap.add_argument("--kinds", default="barrier,pin,nop")
    ap.add_argument("--jobs", type=int, default=os.cpu_count() or 4)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("src", nargs="*")
    a = ap.parse_args()
    kinds = set(a.kinds.split(","))
    if "flags" in kinds:
        cmds = {ln.split()[-1]: ln.strip() for ln in Path(a.cmds).read_text().splitlines() if " -c -o " in ln}
        return run_flags(a, cmds)
    jobs = []
    for ln in Path(a.cmds).read_text().splitlines():
        ln = ln.strip()
        if not ln or " -c -o " not in ln:
            continue
        src = ln.split()[-1]
        if not src.endswith((".c", ".cpp", ".cc")) or (a.src and src not in a.src):
            continue
        jobs.append((src, ln, kinds, a.apply))
    total = {}
    with ProcessPoolExecutor(a.jobs) as ex:
        for src, n, kept, by in ex.map(work, jobs):
            if not n:
                continue
            print(f"{src}\t{n}\t{'compile-failed' if kept < 0 else kept}", flush=True)
            for k, (f, r) in by.items():
                t = total.setdefault(k, [0, 0])
                t[0] += f
                t[1] += r
    for k, (f, r) in sorted(total.items()):
        print(f"total {k}: {r} of {f} removed")


if __name__ == "__main__":
    main()
