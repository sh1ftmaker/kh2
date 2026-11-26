#!/usr/bin/env python3
"""Regenerate layout.tsv (function-boundary table) to cover all discoverable code
in the KH2FM main ELF section, not just the Ghidra-seeded 11,286 functions.

See docs/layout-regen.md for the method. Summary:

  1. `candidates`: from a Ghidra function-body export + the current layout.tsv,
     compute new candidate function starts from several evidence sources (direct
     calls, tail jumps, ctor/dtor pointers, pointer-table entries, lui/addiu
     formed addresses, an external cross-check list, and "next code after a
     function end" for gap-filling), each filtered through a bounded MIPS/R5900
     CFG walk (see `plausible_function`) that rejects data disguised as code.
  2. `ghidra`: feed validated candidates to Ghidra headless
     (tools/ghidra/ExportFunctionBodies.java) on a *copy* of the project so it
     creates real functions (real disassembly + CFG, not our approximation),
     then re-export all function bodies.
  3. Repeat 1-2 to a fixpoint (no new validated candidates).
  4. `emit`: turn the final body export into a new layout.tsv (existing rows
     kept byte-for-byte; new rows appended as `FUN_xxxxxxxx`) plus
     out/generated/layout_gaps.tsv classifying what's left uncovered.

`--dry-run` on `emit`/`all` prints counts without writing layout.tsv.

Requires the `rabbitizer` package (from tools/venv) for instruction decode/CFG
validation, and a Ghidra headless install for the `ghidra`/`all` subcommands
(see docs/layout-regen.md for env setup). Without rabbitizer, validation is
skipped (all candidates are treated as passing) -- NOT recommended, see docs.
"""
from __future__ import annotations

import argparse
import csv
import json
import os
import re
import struct
import subprocess
import sys
import shutil
from collections import defaultdict, deque
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ELF_PATH = Path(os.environ.get("KH2_ORIG", ROOT / "SLPM_666.75"))
LAYOUT_TSV = ROOT / "layout.tsv"
GEN_DIR = ROOT / "out" / "generated"
CANDIDATES_TXT = GEN_DIR / "layout_candidates.txt"
GAPS_TSV = GEN_DIR / "layout_gaps.tsv"
GHIDRA_SCRIPT_DIR = ROOT / "tools" / "ghidra"
EE_FUNCS_JSON = Path("/data/agent-tom/kh2/e3/map/ee_funcs.json")

# --- main-section geometry (verified against SLPM_666.75 + layout.tsv) -----
BASE = 0x100000          # MAIN_VADDR
FOFF = 0x1000             # file offset of BASE
SEC_END = 0x37A4B4        # MAIN_END (end of the 'main' ELF section)
CODE_LO = 0x10001C        # first byte after the 0x1c-byte header; == layout row 0
CODE_HI = 0x367418        # end of the last known code byte (verified: last
                           # instruction pair jr $ra / addiu $sp,$sp,N ends here,
                           # followed by all-zero rodata/data padding)
CTORS_LO = 0x37A4B4
CTORS_HI = 0x37A4B4 + 0x234 + 0x118   # .ctors + .dtors, contiguous in file

MAX_ITERS = 25

# --- rabbitizer (R5900 decoder) ---------------------------------------------
def _load_rabbitizer():
    tools = Path(os.environ.get("KH2_TOOLS", "/data/agent-tom/kh2/tools"))
    venv_site = tools / "venv" / "lib"
    if venv_site.exists():
        for p in venv_site.glob("python3*/site-packages"):
            sys.path.insert(0, str(p))
    try:
        import rabbitizer  # type: ignore
        return rabbitizer
    except ImportError:
        return None


rb = _load_rabbitizer()


# --- ELF section access -----------------------------------------------------
def load_sections():
    data = ELF_PATH.read_bytes()
    # sec covers BASE.. (SEC_END + ctors + dtors), contiguous in the file
    end = CTORS_HI
    sec = data[FOFF : FOFF + (end - BASE)]
    return sec


def w32(sec: bytes, addr: int) -> int:
    off = addr - BASE
    return struct.unpack_from("<I", sec, off)[0]


def in_code(a: int) -> bool:
    return CODE_LO <= a < CODE_HI and a % 4 == 0


# --- layout.tsv / ghidra body export I/O ------------------------------------
def load_layout(path: Path = LAYOUT_TSV):
    rows = []
    header = []
    with open(path) as f:
        for line in f:
            if line.startswith("#"):
                header.append(line)
                continue
            if line.startswith("addr\t"):
                continue
            a, e, s, n = line.rstrip("\n").split("\t")
            rows.append((int(a, 16), int(e, 16), int(s), n))
    rows.sort(key=lambda r: r[0])
    return header, rows


def load_ghidra_bodies(path: Path):
    """entry -> (name, thunk:int, ranges:[(start,end)])"""
    out = {}
    with open(path) as f:
        for r in csv.DictReader(f, delimiter="\t"):
            e = int(r["entry"], 16)
            ranges = []
            if r["ranges"].strip():
                for p in r["ranges"].split(","):
                    a, b = p.split("-")
                    ranges.append((int(a, 16), int(b, 16)))
            out[e] = (r["name"], int(r["thunk"]), ranges)
    return out


def owned_bitmap(bodies: dict) -> bytearray:
    own = bytearray(SEC_END - BASE)
    for e, (name, thunk, ranges) in bodies.items():
        if not (BASE <= e < SEC_END):
            continue  # skip overlay-section functions (0x01f18000+) etc.
        for a, b in ranges:
            if a < BASE or b > SEC_END:
                a = max(a, BASE)
                b = min(b, SEC_END)
                if a >= b:
                    continue
            own[a - BASE : b - BASE] = b"\x01" * (b - a)
    return own


# --- R5900 bounded CFG walker (candidate validation) ------------------------
def plausible_function(sec: bytes, entry: int, own: "bytearray | None" = None,
                        max_instrs: int = 6000, max_span: int = 0x10000) -> bool:
    """Bounded flood-fill CFG walk from `entry`, using rabbitizer to decode.
    Rejects candidates that: fail to decode as valid R5900 within the walk,
    branch to before their own entry via a conditional/loop branch (mid-function
    loop target, not a real start), or never reach an explicit return / tail
    jump within max_instrs. If `own` (a SEC-sized owned-bytes bitmap) is given,
    falling through (non-branch, non-jump) into an already-owned function body
    is a dead end that earns no credit -- it means the candidate's own
    instruction stream never explicitly terminated before running into someone
    else's code, which is not how compiler-generated functions look; an
    explicit jump/branch INTO owned code (e.g. a tail-call thunk) is still
    accepted. If rabbitizer is unavailable, always returns True (see module
    docstring -- validation degrades to off).
    """
    if rb is None:
        return True
    if entry % 4 != 0 or not (CODE_LO <= entry < CODE_HI):
        return False
    cat = rb.InstrCategory.R5900

    def is_owned(pc):
        return own is not None and BASE <= pc < SEC_END and own[pc - BASE]

    def decode(pc):
        if not (CODE_LO <= pc < CODE_HI) or pc % 4 != 0:
            return None
        return rb.Instruction(w32(sec, pc), pc, category=cat)

    # reject obvious padding starts: two zero words in a row
    w0 = w32(sec, entry)
    if w0 == 0 and CODE_LO <= entry + 4 < CODE_HI and w32(sec, entry + 4) == 0:
        return False

    visited = set()
    worklist = deque([entry])
    n = 0
    saw_return = False

    while worklist:
        pc = worklist.popleft()
        if pc in visited:
            continue
        if not (CODE_LO <= pc < CODE_HI) or pc % 4 != 0:
            continue  # left the code window -> treat as terminal, not failure
        if pc != entry and is_owned(pc):
            continue  # fell through into someone else's body: dead end, no credit
        visited.add(pc)
        n += 1
        if n > max_instrs or pc - entry > max_span:
            return False  # runaway: probably decoded into data

        ins = decode(pc)
        if ins is None or not ins.isValid():
            return False

        if ins.isReturn():  # jr $ra
            dpc = pc + 4
            dins = decode(dpc)
            if dins is not None and not dins.isValid():
                return False
            saw_return = True
            continue

        if ins.isJump():
            dpc = pc + 4
            dins = decode(dpc)
            if dins is not None and not dins.isValid():
                return False
            try:
                target = ins.getBranchVramGeneric()
            except Exception:
                target = None
            is_call = ins.isFunctionCall()
            if is_call:
                worklist.append(pc + 8)  # call returns; fallthrough continues
            elif ins.isJType():
                # unconditional `j` with a statically known target: a legitimate
                # explicit function-ending transfer, including tail calls to an
                # *earlier* address -- only conditional backward branches (loops)
                # are checked against `entry` below.
                saw_return = True  # counts as an explicit termination point
                if target is not None and CODE_LO <= target < CODE_HI:
                    worklist.append(target)
                # no fallthrough after an unconditional transfer
            else:
                # register-indirect jr $other / jalr $other (target not statically
                # known): could be a real jump-table dispatch, but a lone `jr $reg`
                # with reg != $ra is exactly what a literal-pool word (e.g. 0x8 =
                # "jr $zero") also decodes to -- too weak a signal on its own, so
                # this path earns no credit and isn't followed further.
                pass
            continue

        if ins.isBranch():
            dpc = pc + 4
            dins = decode(dpc)
            if dins is not None and not dins.isValid():
                return False
            try:
                target = ins.getBranchVramGeneric()
            except Exception:
                target = None
            if target is not None and target < entry:
                return False
            if target is not None:
                worklist.append(target)
            if not ins.isUnconditionalBranch():
                worklist.append(pc + 8)
            continue

        # plain instruction
        worklist.append(pc + 4)

    return saw_return


# --- candidate evidence sources ---------------------------------------------
def find_pointer_run_regions(sec: bytes, own: bytearray, starts: set):
    """Contiguous >=3-word runs of aligned, un-owned words that each point into
    the code span: these are vtables / fptr tables, not function bodies -- a
    candidate address that itself falls inside such a run is data, not code."""
    runs = []
    p = BASE
    cur = []
    END = CTORS_HI
    while p < END - 3:
        owned_word = BASE <= p < SEC_END and own[p - BASE]
        if not owned_word:
            w = w32(sec, p)
            if in_code(w):
                cur.append((p, w))
            else:
                if len(cur) >= 3:
                    runs.append(cur)
                cur = []
        else:
            if len(cur) >= 3:
                runs.append(cur)
            cur = []
        p += 4
    if len(cur) >= 3:
        runs.append(cur)
    region_set = set()
    for r in runs:
        for p, _ in r:
            region_set.add(p)
    targets = defaultdict(int)
    for r in runs:
        for p, w in r:
            targets[w] += 1
    return region_set, targets


def compute_candidates(sec: bytes, bodies: dict, layout_starts: set):
    own = owned_bitmap(bodies)
    starts = set(bodies) | layout_starts
    starts = {a for a in starts if BASE <= a < SEC_END}

    table_region, tab_targets = find_pointer_run_regions(sec, own, starts)

    def usable(a):
        return in_code(a) and a not in starts and not own[a - BASE] and a not in table_region

    jal, jt, lu, cd = set(), set(), set(), set()
    for e, (name, thunk, ranges) in bodies.items():
        if not (BASE <= e < SEC_END):
            continue
        for a, b in ranges:
            a = max(a, BASE)
            b = min(b, SEC_END)
            p = a
            hi = {}
            while p < b:
                w = w32(sec, p)
                op = w >> 26
                if op == 15:  # lui
                    hi[(w >> 16) & 31] = (w & 0xFFFF) << 16
                    p += 4
                    continue
                elif op in (2, 3):  # j, jal
                    t = ((p + 4) & 0xF0000000) | ((w & 0x3FFFFFF) << 2)
                    if usable(t):
                        (jal if op == 3 else jt).add(t)
                elif op in (9, 0x19, 0x0D):  # addiu, addi(unused)->skip, ori
                    rs_ = (w >> 21) & 31
                    rt = (w >> 16) & 31
                    imm = w & 0xFFFF
                    if rs_ in hi:
                        signed = imm - 0x10000 if (imm & 0x8000 and op != 0x0D) else imm
                        x = (hi[rs_] + signed) & 0xFFFFFFFF
                        if usable(x):
                            lu.add(x)
                    if op == 0x0D:
                        pass
                if op == 0:
                    hi.pop((w >> 11) & 31, None)
                elif op not in (0x28, 0x29, 0x2B, 0x2F, 0x3F, 0x39, 0x3D, 0x1F, 0x2A, 0x2E, 4, 5, 6, 7, 1, 2, 3, 9, 0x0D, 0x19):
                    hi.pop((w >> 16) & 31, None)
                p += 4

    for p in range(CTORS_LO, CTORS_HI, 4):
        w = w32(sec, p)
        if usable(w):
            cd.add(w)

    tab = {w for w, cnt in tab_targets.items() if usable(w)}

    ee = set()
    if EE_FUNCS_JSON.exists():
        try:
            ee_data = json.load(open(EE_FUNCS_JSON))["funcs"]
            ee = {int(k, 16) for k, v in ee_data.items() if v.get("src") == "gap"}
            ee = {a for a in ee if usable(a)}
        except Exception:
            ee = set()

    # "seq": gap starts -- low-priority fill-forward pass
    gaps = compute_gaps(sorted(starts), bodies)
    seq = {g0 for g0, g1 in gaps if usable(g0)}

    return {
        "jal": jal, "cd": cd, "j": jt, "tab": tab, "lu": lu, "ee": ee, "seq": seq,
    }, table_region, own


def compute_gaps(sorted_starts, bodies):
    """Gaps in code coverage, using owned-body ranges (not just entries)."""
    own = owned_bitmap(bodies)
    gaps = []
    p = CODE_LO
    in_gap_start = None
    for a in range(CODE_LO, CODE_HI, 4):
        owned_word = own[a - BASE]
        if not owned_word:
            if in_gap_start is None:
                in_gap_start = a
        else:
            if in_gap_start is not None:
                gaps.append((in_gap_start, a))
                in_gap_start = None
    if in_gap_start is not None:
        gaps.append((in_gap_start, CODE_HI))
    return gaps


PRIORITY = ["jal", "cd", "j", "tab", "lu", "ee", "seq"]


def cmd_candidates(args):
    sec = load_sections()
    header, layout_rows = load_layout()
    layout_starts = {r[0] for r in layout_rows}
    bodies = load_ghidra_bodies(Path(args.bodies))
    sources, table_region, own = compute_candidates(sec, bodies, layout_starts)

    validated = {}
    for tier in PRIORITY:
        ok = sorted(a for a in sources[tier] if plausible_function(sec, a, own))
        validated[tier] = ok

    seen = set()
    out_lines = []
    for tier in PRIORITY:
        for a in validated[tier]:
            if a in seen:
                continue
            seen.add(a)
            out_lines.append(f"0x{a:08x}\t{tier}\n")

    GEN_DIR.mkdir(parents=True, exist_ok=True)
    CANDIDATES_TXT.write_text("".join(out_lines))
    print(f"candidates: {sum(len(v) for v in sources.values())} raw -> "
          f"{sum(len(v) for v in validated.values())} validated -> {len(seen)} unique")
    for tier in PRIORITY:
        print(f"  {tier:4s} raw={len(sources[tier]):5d} validated={len(validated[tier]):5d}")
    print(f"wrote {CANDIDATES_TXT} ({len(seen)} addrs)")
    return len(seen)


# --- ghidra driving ----------------------------------------------------------
def run_ghidra(proj_dir: Path, candidates_file: Path, bodies_out: Path, readonly: bool):
    tools = Path(os.environ.get("KH2_TOOLS", "/data/agent-tom/kh2/tools"))
    ghidra_home = Path(os.environ.get("GHIDRA_INSTALL_DIR", tools / "ghidra" / "ghidra_12.1.2_PUBLIC"))
    analyze = ghidra_home / "support" / "analyzeHeadless"
    env = dict(os.environ)
    env["KH2_BODIES_OUT"] = str(bodies_out)
    if candidates_file is not None:
        env["KH2_CANDIDATES"] = str(candidates_file)
    else:
        env.pop("KH2_CANDIDATES", None)
    cmd = [str(analyze), str(proj_dir), "kh2", "-process", "SLPM_666.75", "-noanalysis",
           "-scriptPath", str(GHIDRA_SCRIPT_DIR), "-postScript", "ExportFunctionBodies.java",
           "-max-cpu", "8"]
    if readonly:
        cmd.insert(cmd.index("-noanalysis") + 1, "-readOnly")
    r = subprocess.run(cmd, env=env, capture_output=True, text=True)
    log = r.stdout + r.stderr
    created = skipped = failed = 0
    for line in log.splitlines():
        if "KH2_CANDIDATES created=" in line:
            m = re.search(r"created=(\d+)", line)
            created = int(m.group(1)) if m else 0
            m = re.search(r"skipped\(inside body\)=(\d+)", line)
            skipped = int(m.group(1)) if m else 0
            m = re.search(r"failed=(\d+)", line)
            failed = int(m.group(1)) if m else 0
    return r.returncode, created, skipped, failed, log


def setup_scratch_project(scratch_dir: Path):
    tools = Path(os.environ.get("KH2_TOOLS", "/data/agent-tom/kh2/tools"))
    src = tools / "ghidra-projects"
    scratch_dir.mkdir(parents=True, exist_ok=True)
    gpr = scratch_dir / "kh2.gpr"
    rep = scratch_dir / "kh2.rep"
    if not gpr.exists():
        shutil.copy(src / "kh2.gpr", gpr)
        shutil.copytree(src / "kh2.rep", rep)
        for p in scratch_dir.glob("*.lock*"):
            p.unlink()
        for p in rep.glob("*.lock*"):
            p.unlink()
    return scratch_dir


REJECTED_TXT = GEN_DIR / "layout_rejected.txt"


def cmd_ghidra(args):
    scratch = Path(args.scratch)
    setup_scratch_project(scratch)
    sec = load_sections()
    header, layout_rows = load_layout()
    layout_starts = {r[0] for r in layout_rows}

    rejected = set()
    if REJECTED_TXT.exists() and not args.reset:
        rejected = {int(l, 16) for l in REJECTED_TXT.read_text().split() if l.strip()}

    bodies_path = GEN_DIR / "ghidra_bodies.tsv"
    if not bodies_path.exists() or args.reset:
        rc, created, skipped, failed, log = run_ghidra(scratch, None, bodies_path, readonly=True)
        print(f"[iter0 export] fns exported, rc={rc}")
        rejected = set()

    for it in range(1, MAX_ITERS + 1):
        bodies = load_ghidra_bodies(bodies_path)
        sources, table_region, own = compute_candidates(sec, bodies, layout_starts)
        validated = {}
        for tier in PRIORITY:
            validated[tier] = sorted(a for a in sources[tier] if a not in rejected and plausible_function(sec, a, own))
        seen = set()
        cand_lines = []
        for tier in PRIORITY:
            for a in validated[tier]:
                if a in seen:
                    continue
                seen.add(a)
                cand_lines.append(f"0x{a:08x}\n")
        print(f"[iter {it}] new validated candidates: {len(seen)} "
              + " ".join(f"{t}={len(validated[t])}" for t in PRIORITY))
        if not seen:
            print(f"[iter {it}] fixpoint reached")
            break
        cand_file = GEN_DIR / f"cands_iter{it}.txt"
        cand_file.write_text("".join(cand_lines))
        next_bodies = GEN_DIR / "ghidra_bodies.tsv"
        rc, created, skipped, failed, log = run_ghidra(scratch, cand_file, next_bodies, readonly=False)
        newly_rejected = set(int(m, 16) for m in re.findall(r"KH2_NOCODE ([0-9a-fA-F]+)", log))
        newly_rejected |= set(int(m, 16) for m in re.findall(r"KH2_CREATE_FAILED ([0-9a-fA-F]+)", log))
        rejected |= newly_rejected
        GEN_DIR.mkdir(parents=True, exist_ok=True)
        REJECTED_TXT.write_text("".join(f"0x{a:08x}\n" for a in sorted(rejected)))
        print(f"[iter {it}] ghidra rc={rc} created={created} skipped={skipped} failed={failed} "
              f"(total rejected so far: {len(rejected)})")
        if rc != 0:
            print(log[-4000:])
            break
    else:
        print(f"stopped after MAX_ITERS={MAX_ITERS} without a fixpoint")
    return bodies_path


# --- gap classification -------------------------------------------------------
def classify_gap(sec: bytes, g0: int, g1: int, starts: set, own: "bytearray | None" = None) -> str:
    n = g1 - g0
    words = [w32(sec, p) for p in range(g0, g1 - 3, 4)]
    if not words:
        return "tiny"
    if all(w == 0 for w in words):
        return "zero"
    ncode = sum(1 for w in words if in_code(w))
    if ncode == len(words):
        return "jump_table_or_vtable"
    if ncode >= len(words) * 0.6:
        return "ptrs_mostly"
    raw = sec[g0 - BASE : g1 - BASE]
    printable = sum(1 for x in raw if 32 <= x < 127 or x in (0, 9, 10, 13))
    if printable >= len(raw) * 0.9 and n >= 8:
        return "string"
    if rb is not None and plausible_function(sec, g0, own):
        return "unknown_code_like"
    return "other"


def cmd_emit(args):
    sec = load_sections()
    header, layout_rows = load_layout()
    existing = {r[0]: r for r in layout_rows}
    bodies_path = Path(args.bodies)
    bodies = load_ghidra_bodies(bodies_path)

    # Existing rows are kept byte-for-byte and always win any overlap.
    claimed = bytearray(SEC_END - BASE)
    for r in existing.values():
        a, e, s, n = r
        claimed[a - BASE : e - BASE] = b"\x01" * (e - a)

    # New functions (Ghidra entry not already an existing row): emit ONE row
    # per contiguous body range, not just entry..end -- a non-contiguous body
    # (e.g. a shared-tail fragment physically BEFORE its entry point) would
    # otherwise silently lose bytes that Ghidra legitimately owns. Segments
    # are placed greedily in address order and trimmed against whatever is
    # already claimed (existing rows first, then earlier-placed segments), so
    # the result is always non-overlapping.
    segments = []
    for e, (name, thunk, ranges) in bodies.items():
        if e in existing or not (BASE <= e < SEC_END):
            continue
        for x, y in ranges:
            x = max(x, BASE)
            y = min(y, SEC_END)
            if x < y:
                segments.append((x, y))
    segments.sort()

    new_rows = []
    for x, y in segments:
        p = x
        while p < y and not claimed[p - BASE]:
            p += 1
        # [x, p) is the maximal unclaimed run starting at x within [x, y)
        end = p
        end = x + ((end - x) & ~3)  # 4-byte align down
        if end <= x:
            continue
        claimed[x - BASE : end - BASE] = b"\x01" * (end - x)
        new_rows.append((x, end, end - x, f"FUN_{x:08x}"))

    new_rows.sort(key=lambda r: r[0])
    # final overlap guard (belt-and-suspenders; the claimed-bitmap placement
    # above should already guarantee no overlap): drop any row that overlaps
    # its predecessor.
    clean = []
    prev_end = CODE_LO
    dropped = []
    for r in sorted(list(existing.values()) + new_rows, key=lambda r: r[0]):
        a, e, s, n = r
        if a < prev_end:
            dropped.append(r)
            continue
        clean.append(r)
        prev_end = e

    print(f"emit: {len(layout_rows)} existing rows kept, {len(clean) - len(layout_rows)} new rows, "
          f"{len(dropped)} dropped for overlap")

    if not args.dry_run:
        GEN_DIR.mkdir(parents=True, exist_ok=True)
        with open(LAYOUT_TSV, "w") as f:
            f.writelines(header if header else ["# AUTO-GENERATED FILE. DO NOT EDIT.\n"])
            f.write("addr\tend\tsize\tname\n")
            for a, e, s, n in clean:
                f.write(f"{a:08x}\t{e:08x}\t{s}\t{n}\n")
        print(f"wrote {LAYOUT_TSV} ({len(clean)} rows)")

    # gap report
    starts = {r[0] for r in clean}
    gaps = []
    prev = CODE_LO
    for a, e, s, n in clean:
        if a > prev:
            gaps.append((prev, a))
        prev = max(prev, e)
    if CODE_HI > prev:
        gaps.append((prev, CODE_HI))

    own = bytearray(SEC_END - BASE)
    for a, e, s, n in clean:
        own[a - BASE : e - BASE] = b"\x01" * (e - a)

    gap_class = defaultdict(lambda: [0, 0])
    gap_rows = []
    unknown_big = []
    for g0, g1 in gaps:
        c = classify_gap(sec, g0, g1, starts, own)
        gap_class[c][0] += 1
        gap_class[c][1] += g1 - g0
        gap_rows.append((g0, g1, g1 - g0, c))
        if c == "unknown_code_like" and g1 - g0 >= 64:
            unknown_big.append((g0, g1, g1 - g0))

    if not args.dry_run:
        with open(GAPS_TSV, "w") as f:
            f.write("start\tend\tsize\tclass\n")
            for g0, g1, n, c in gap_rows:
                f.write(f"{g0:08x}\t{g1:08x}\t{n}\t{c}\n")
        print(f"wrote {GAPS_TSV} ({len(gap_rows)} gaps, {sum(n for _,_,n,_ in gap_rows)} bytes)")

    print("gap classes:")
    for c, (cnt, byt) in sorted(gap_class.items(), key=lambda kv: -kv[1][1]):
        print(f"  {c:22s} count={cnt:5d} bytes={byt:8d}")
    if unknown_big:
        print(f"unknown_code_like gaps >= 64 B ({len(unknown_big)}):")
        for g0, g1, n in unknown_big:
            print(f"  0x{g0:08x}-0x{g1:08x} ({n} B)")

    return clean, gap_rows


def cmd_all(args):
    bodies_path = cmd_ghidra(args)
    args.bodies = str(bodies_path)
    cmd_emit(args)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)

    p = sub.add_parser("candidates", help="compute + validate candidate function starts")
    p.add_argument("--bodies", default=str(ROOT / "tools" / "gen_layout_wip" / "ghidra_bodies_base.tsv"))
    p.set_defaults(func=cmd_candidates)

    p = sub.add_parser("ghidra", help="iterate Ghidra headless to a fixpoint")
    p.add_argument("--scratch", default="/tmp/kh2_gen_layout_gp")
    p.add_argument("--reset", action="store_true", help="re-copy the project and start from the base export")
    p.set_defaults(func=cmd_ghidra)

    p = sub.add_parser("emit", help="write layout.tsv + layout_gaps.tsv from a bodies export")
    p.add_argument("--bodies", default=str(GEN_DIR / "ghidra_bodies.tsv"))
    p.add_argument("--dry-run", action="store_true")
    p.set_defaults(func=cmd_emit)

    p = sub.add_parser("all", help="ghidra + emit")
    p.add_argument("--scratch", default="/tmp/kh2_gen_layout_gp")
    p.add_argument("--reset", action="store_true")
    p.add_argument("--dry-run", action="store_true")
    p.set_defaults(func=cmd_all)

    args = ap.parse_args()
    args.func(args)


if __name__ == "__main__":
    main()
