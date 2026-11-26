#!/usr/bin/env python3
"""attribute.py: which source lines and which assembly statements end up in each function.

Compiles every source once more with debug line numbers and assembly output (nothing in the
build is touched) and writes out/generated/attribution.tsv, one row per function:

  addr  source  symbol  body  lines  asm

body   first and last line of the function's own definition ("216-228")
lines  the source lines of the function's own file that produced code in it, as ranges
       ("120-131,140"), plus "hdr" entries are dropped (headers are shared code)
asm    the kinds of the assembly statements the compiler pasted into the function
       (see ASM_KINDS), as "kind:count" pairs; "steered:1" when the function's code changes
       if the file's optimiser-steering switches are taken away

Inline functions and macros are charged to the function they were expanded in, which is what
the question "is this function free of assembly" needs. tools/quality.py reads the result.

Run after `make`, with the toolchain env.sh sourced:  python3 tools/attribute.py
It asks make for every object's compile command (out/cmds.txt) and re-runs itself inside
the build sandbox (tools/sandbox.sh, KH2_NATIVE=1). tools/detrick.py takes the same file.
"""
import argparse
import csv
import os
import re
import shlex
import subprocess
import sys
from collections import Counter, defaultdict
from concurrent.futures import ProcessPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
OUT = ROOT / "out/generated/attribution.tsv"
STATUS = ROOT / "out/generated/layout_status.tsv"
LINKED = ROOT / "out/linked.tmp.elf"

COP2 = re.compile(r"^(?:lqc2|sqc2|qmfc2|qmtc2|cfc2|ctc2|vcallms|vcallmsr|bc2[ft]l?|v[a-z0-9]+(?:\.[xyzw]+)?)\b")
BRIDGE = {"mfc1", "mtc1", "lq", "sq", "addi", "li", "nop", "pextlw", "pextuw", "pcpyld", "pcpyud"}
MMI = {"pextlw", "pextuw", "pcpyld", "pcpyud", "pextlh", "pextlb", "pextub", "pextuh", "pand", "por", "pxor",
       "paddw", "psubw", "pexew", "pdivw", "pmflo", "pmfhi", "ppacb", "ppach", "ppacw", "pcpyh", "pnor"}
# What an assembly statement is, from the instructions the compiler pasted:
#   vu0     vector-unit (COP2) code, with the moves that carry a value in or out
#   qcopy   128-bit copies (lq/sq): the vector classes' copy and assignment
#   mmi     128-bit multimedia instructions (packing floats into a vector and the like)
#   trap    a bare break instruction (assertion failure)
#   kernel  interrupt and cache primitives (ei, di, sync)
#   nop     nothing but nop
#   cpu     ordinary processor instructions that C could have produced
ASM_KINDS = ("vu0", "qcopy", "mmi", "trap", "kernel", "nop", "cpu")


def asm_kind(lines):
    ins = [l for l in lines if l and not l.startswith(".")]
    ins = [l for l in ins if not re.match(r"^[\w.$%=]+:$", l)] or ins
    mns = [l.split()[0].lower() for l in ins]
    if not mns:
        return None
    s = set(mns)
    cop2 = [bool(COP2.match(l.lower())) for l in ins]
    rest = {m for m, c in zip(mns, cop2) if not c}
    if any(cop2) and rest <= BRIDGE:
        return "vu0"
    if s <= {"lq", "sq"}:
        return "qcopy"
    if s & MMI and s <= MMI | {"lq", "sq", "mfc1", "mtc1"}:
        return "mmi"
    if s <= {"break"}:
        return "trap"
    if s <= {"nop"}:
        return "nop"
    if s <= {"sync.p", "sync.l", "ei", "di", "nop", "sync"}:
        return "kernel"
    return "cpu"


def ranges(nums):
    out, nums = [], sorted(nums)
    i = 0
    while i < len(nums):
        j = i
        while j + 1 < len(nums) and nums[j + 1] == nums[j] + 1:
            j += 1
        out.append(str(nums[i]) if i == j else f"{nums[i]}-{nums[j]}")
        i = j + 1
    return ",".join(out)


# Switches that only change how the optimiser orders or allocates: nobody sets these per file.
STEER_FLAGS = re.compile(r"^-f(?:no-)?(?:move-all-movables|schedule-insns2?|gcse|sched-interblock|strength-reduce|"
                         r"rerun-loop-opt|optimize-sibling-calls|cse-follow-jumps|rerun-cse-after-loop|"
                         r"cse-skip-blocks|regmove|peephole2?|delayed-branch)$|^-falign-\w+=|^-finline-limit")


def bodies(text):
    """symbol -> the function's assembly with labels renumbered and line notes dropped."""
    out, cur, buf = {}, None, []
    for ln in text.split("\n"):
        t = ln.strip()
        if t.startswith(".ent"):
            cur, buf = t.split()[1], []
        elif t.startswith(".end") and cur:
            names = {}
            body = "\n".join(buf)
            body = re.sub(r"\$L[A-Z]*\d+", lambda m: names.setdefault(m.group(0), f"L{len(names)}"), body)
            out[cur] = body
            cur = None
        elif cur and t and not t.startswith((".stab", "$LM", "$LBB", "$LBE")):
            buf.append(t)
    return out


def work(job):
    src, cmd = job
    argv = shlex.split(cmd)
    tmp = ROOT / "out" / f"zzat_{os.getpid()}.s"
    argv[argv.index("-c")] = "-S"
    argv[argv.index("-o") + 1] = str(tmp)
    had_g = "-g" in argv
    argv = [a for a in argv if a != "-g0"]
    argv.insert(1, "-g")
    r = subprocess.run(argv, cwd=ROOT, capture_output=True)
    if r.returncode or not tmp.exists():
        return src, None
    text = tmp.read_text(errors="replace")
    tmp.unlink()
    steered = set()
    plain = [a for a in argv if not STEER_FLAGS.match(a)]
    if len(plain) != len(argv):                   # which functions do the steering switches change?
        if not had_g:
            argv.remove("-g")
            plain.remove("-g")
            subprocess.run(argv, cwd=ROOT, capture_output=True)
            with_flags = bodies(tmp.read_text(errors="replace")) if tmp.exists() else {}
            tmp.unlink(missing_ok=True)
        else:
            with_flags = bodies(text)
        r = subprocess.run(plain, cwd=ROOT, capture_output=True)
        without = bodies(tmp.read_text(errors="replace")) if not r.returncode and tmp.exists() else {}
        tmp.unlink(missing_ok=True)
        steered = {k for k, v in with_flags.items() if without.get(k) != v}
    fns, defs, cur, in_main, in_app, block = {}, {}, None, True, False, []
    base = os.path.basename(src)
    for ln in text.split("\n"):
        t = ln.strip()
        if t.startswith(".stabs"):
            m = re.match(r'\.stabs\s+"([^"]*)",(\d+),', t)
            if m and m.group(2) in ("100", "132") and m.group(1) and not m.group(1).endswith("/"):
                in_main = os.path.basename(m.group(1)) == base
            elif m and m.group(2) == "36" and m.group(1):
                p = t.rsplit(",", 2)
                if p[2] in fns and in_main:
                    defs[p[2]] = int(p[1])
            continue
        if t.startswith(".ent"):
            cur = t.split()[1]
            fns[cur] = [set(), Counter()]
            continue
        if t.startswith(".end"):
            cur = None
            continue
        if cur is None:
            continue
        if t.startswith(".stabn"):
            p = t.split(None, 1)[1].split(",")
            if p[0] == "68" and in_main:
                fns[cur][0].add(int(p[2]))
            continue
        if t == "#APP":
            in_app, block = True, []
            continue
        if t == "#NO_APP":
            in_app = False
            k = asm_kind(block)
            if k:
                fns[cur][1][k] += 1
            continue
        if in_app:
            for part in t.split(";"):
                part = part.split("#")[0].strip()
                if part:
                    block.append(part)
    starts = sorted(set(defs.values()))
    out = {}
    for k, v in fns.items():
        body = ""
        if k in defs:
            nxt = [x for x in starts if x > defs[k]]
            own = [x for x in v[0] if x >= defs[k] and (not nxt or x < nxt[0])]
            body = f"{defs[k]}-{max(own + [defs[k]])}"
        asm = [f"{a}:{n}" for a, n in sorted(v[1].items())] + (["steered:1"] if k in steered else [])
        out[k] = (body, ranges(v[0]), " ".join(asm))
    return src, out


def linked_symbols():
    """name -> [addr] for the functions of the linked image."""
    out = defaultdict(list)
    r = subprocess.run(["readelf", "-sW", str(LINKED)], capture_output=True, text=True, check=True)
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 8 and p[3] == "FUNC":
            out[p[7]].append(int(p[1], 16))
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--cmds")
    ap.add_argument("--jobs", type=int, default=min(16, os.cpu_count() or 4))
    a = ap.parse_args()
    if not a.cmds:
        sandbox = str(ROOT / "tools/sandbox.sh")
        objs = sorted(set(re.findall(r"out/build/\S+\.o", (ROOT / "out/generated/objects.mk").read_text())))
        r = subprocess.run([sandbox, "make", "-n", "-B"] + objs, cwd=ROOT, capture_output=True, text=True)
        cmds = [ln for ln in r.stdout.splitlines() if " -c -o " in ln or " -o out" in ln]
        if not cmds:
            sys.exit("could not read the compile commands from make: " + r.stderr[-300:])
        (ROOT / "out/cmds.txt").write_text("\n".join(cmds) + "\n")
        sys.exit(subprocess.run([sandbox, "python3", "tools/attribute.py", "--cmds", "out/cmds.txt",
                                 "--jobs", str(a.jobs)], cwd=ROOT).returncode)
    by_src = defaultdict(set)
    with STATUS.open() as fh:
        for r in csv.DictReader(fh, delimiter="\t"):
            by_src[r["source"]].add(int(r["addr"], 16))
    jobs = []
    for ln in Path(a.cmds).read_text().splitlines():
        ln = ln.strip()
        if " -c -o " in ln and ln.split()[-1].endswith((".c", ".cpp", ".cc")):
            jobs.append((ln.split()[-1], ln))
    syms = linked_symbols()
    rows, failed, unplaced = [], [], 0
    with ProcessPoolExecutor(a.jobs) as ex:
        for src, fns in ex.map(work, jobs):
            if fns is None:
                failed.append(src)
                continue
            for name, (body, lines, asm) in fns.items():
                addr = next((x for x in syms.get(name, ()) if x in by_src[src]), None)
                if addr is None:
                    unplaced += 1
                    continue
                rows.append((f"{addr:08x}", src, name, body, lines, asm))
    rows.sort()
    with OUT.open("w", newline="") as fh:
        w = csv.writer(fh, delimiter="\t", lineterminator="\n")
        w.writerow(["addr", "source", "symbol", "body", "lines", "asm"])
        w.writerows(rows)
    want = sum(len(v) for s, v in by_src.items() if s.endswith((".c", ".cpp", ".cc")))
    print(f"attributed {len(rows)} of {want} C/C++ functions; {unplaced} compiled functions not in the layout; "
          f"{len(failed)} sources failed")
    for s in failed:
        print("failed:", s)


if __name__ == "__main__":
    main()
