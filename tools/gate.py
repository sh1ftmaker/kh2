#!/usr/bin/env python3
"""gate.py: the mechanical submission gate (docs/PLAN.md K3).

    python3 tools/gate.py                      everything, against origin/matching
    python3 tools/gate.py --base <ref>         compare with another base
    python3 tools/gate.py --worker             also: a worker branch may not touch shared files
    python3 tools/gate.py --no-build           skip the rebuild (static checks only)

Prints one line per finding and ends with `gate: ok` or `gate: FAILED (n)`.
Review (docs/REVIEW_BRIEF.md) covers what a script cannot see.

Checks:
  build       make ends in MATCHED!
  progress    every function is still built from source; decompiled and named counts are not below the base's
  registry    functions.tsv: well-formed, one symbol per address, one address per symbol
  banned      no asm statement, register pin, naked or .incbin in changed sources; in hand-written
              ones also no #pragma, goto or volatile
  leftovers   no decompiler leftovers in changed hand-written sources
  names       symbols changed in functions.tsv never replace a real name
  lane        nonmatching/ files and SCORES.tsv agree; none is for a matched function
  data        no game data or binaries tracked
  shared      (--worker) no change to tools, build files, layout, site data or rule documents
"""
import argparse
import csv
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
sys.path.insert(0, str(ROOT / "tools/rig"))

# machine-written, unreviewed code: banned constructs still apply, leftover checks do not
MACHINE_DIRS = ("src/anon/", "src/autodecomp/", "nonmatching/")
SOURCE_EXT = (".cpp", ".hpp", ".h", ".c")
SHARED = ("tools/", "Makefile", "layout.tsv", "objdiff.json", "site/", "docker/", ".github/",
          "CLAUDE.md", "AGENTS.md", "CONTRIBUTING.md", "README.md", "docs/RULES_CARD.md",
          "docs/REVIEW_BRIEF.md", "docs/PLAN.md", "docs/COORDINATOR.md", "docs/roadmap.yml", "data/")
LEFTOVERS = [
    (re.compile(r"\bM2C_\w+"), "m2c macro"),
    (re.compile(r"\bsaved_reg_\w+|\bunksp\w*|\bvar_[a-z]\d+\b|\bsp[0-9A-F]{2,}\b"), "m2c local"),
    (re.compile(r"\bundefined[1248]?\b"), "Ghidra undefined type"),
    (re.compile(r"\b(?:param_\d+|[a-z]{1,3}Var\d+|local_[0-9a-f]+|in_[a-z]\w+|DAT_[0-9a-f]{8}|FUN_[0-9a-f]{8})\b"),
     "Ghidra name"),
    (re.compile(r"\*\s*\(\s*[\w:]+\s*\*+\s*\)\s*\(\s*\(\s*(?:u8|char|unsigned char|s8)\s*\*\s*\)"),
     "field access by cast and offset"),
]
EXTRA_BANNED = [
    (re.compile(r"^\s*#\s*pragma\b(?!\s+once)", re.M), "#pragma"),
    (re.compile(r"\bgoto\s+\w+\s*;"), "goto"),
    (re.compile(r"\bvolatile\b"), "volatile"),
]
PLACEHOLDER = re.compile(r"^(?:func_|FUN_|D_|sub_)[0-9a-fA-F]{6,8}$|_[0-9a-fA-F]{8}(?:[A-Za-z]\w*)?$|"
                         r"^_Z\d+(?:func|wtarget|ctarget|u_call\d|u_tail\d)_[0-9a-f]{8}")
findings = []


def fail(check, msg):
    findings.append(check)
    print(f"{check}: {msg}")


def git(*args, check=False):
    r = subprocess.run(["git", *args], cwd=ROOT, capture_output=True, text=True)
    if check and r.returncode:
        sys.exit(f"git {' '.join(args)}: {r.stderr.strip()}")
    return r.stdout


def changed_files(base):
    mb = git("merge-base", base, "HEAD").strip() or base
    out = git("diff", "--name-status", "--no-renames", mb)          # includes the working tree
    files = []
    for line in out.splitlines():
        st, _, path = line.partition("\t")
        files.append((st, path))
    for path in git("ls-files", "--others", "--exclude-standard").splitlines():
        files.append(("A", path))
    return mb, files


def registry(text):
    rows = []
    for n, line in enumerate(text.splitlines(), 1):
        if not line.strip() or line.startswith("#"):
            continue
        parts = line.split("\t")
        rows.append((n, parts))
    return rows


def check_build():
    r = subprocess.run(["make"], cwd=ROOT, capture_output=True, text=True)
    if r.returncode or "MATCHED!" not in r.stdout:
        fail("build", "make did not end in MATCHED!: " + (r.stdout + r.stderr).strip()[-400:])


def check_progress(mb):
    """Everything stays built from source, and the decompiled share does not drop."""
    import quality
    status = ROOT / "out/generated/layout_status.tsv"
    if not status.exists():
        return fail("progress", "no out/generated/layout_status.tsv (build first)")
    with status.open() as fh:
        not_built = [r["addr"] for r in csv.DictReader(fh, delimiter="\t") if r["mode"].strip() != "cxx"]
    if not_built:
        fail("progress", f"{len(not_built)} functions are no longer built from source, e.g. {not_built[0]}")
    rows = quality.load()
    fns = sum(1 for r in rows if r["kind"] in quality.CLEAN)
    code = sum(r["size"] for r in rows if r["kind"] in quality.CLEAN)
    named = sum(1 for r in rows if r["named"])
    try:
        base = json.loads(git("show", f"{mb}:site/data/summary.json"))["totals"]
    except (json.JSONDecodeError, KeyError):
        return print("progress: base has no site/data/summary.json; not compared")
    if "kinds" not in base:
        return print(f"progress: {fns} fns / {code} B decompiled, {named} named (base predates the quality figures)")
    if fns < base["fns_matched"] or code < base["code_matched"]:
        fail("progress", f"decompiled {fns} fns / {code} B is below the base's "
                         f"{base['fns_matched']} fns / {base['code_matched']} B")
    elif named < base.get("fns_named", 0):
        fail("progress", f"{named} named functions is below the base's {base['fns_named']}")
    else:
        print(f"progress: {fns} fns / {code} B decompiled, {named} named "
              f"(base {base['fns_matched']} / {base['code_matched']}, {base.get('fns_named', 0)} named)")


def check_registry(mb):
    text = (ROOT / "functions.tsv").read_text()
    by_addr, by_sym = {}, {}
    for n, parts in registry(text):
        if len(parts) != 2 or not re.fullmatch(r"[0-9a-fA-F]{8}", parts[1].strip()):
            fail("registry", f"functions.tsv:{n}: expected symbol<TAB>8-hex address")
            continue
        sym, addr = parts[0], parts[1].strip().lower()
        if addr in by_addr:
            fail("registry", f"functions.tsv:{n}: address {addr} already has {by_addr[addr]} (one symbol per address)")
        if sym in by_sym and by_sym[sym] != addr:
            fail("registry", f"functions.tsv:{n}: symbol {sym} is also at {by_sym[sym]}")
        by_addr[addr], by_sym[sym] = sym, addr
    old = {p[1].strip().lower(): p[0] for _, p in registry(git("show", f"{mb}:functions.tsv")) if len(p) == 2}
    for addr, sym in old.items():
        new = by_addr.get(addr)
        if new != sym and not PLACEHOLDER.search(sym):
            fail("names", f"{addr}: real name {sym} was {'removed' if new is None else 'renamed to ' + new}")


def check_sources(files):
    import compile_diff as cd
    for st, path in files:
        if st == "D" or not path.endswith(SOURCE_EXT) or path.startswith("nonmatching/legacy/"):
            continue
        p = ROOT / path
        if not p.exists():
            continue
        text = p.read_text(errors="ignore")
        code = re.sub(r"//[^\n]*|/\*.*?\*/", "", text, flags=re.S)
        for what in cd.banned_constructs(code):
            fail("banned", f"{path}: {what}")
        if path.startswith(MACHINE_DIRS):
            continue
        for rx, what in EXTRA_BANNED:
            if rx.search(code):
                fail("banned", f"{path}: {what}")
        for rx, what in LEFTOVERS:
            m = rx.search(code)
            if m:
                fail("leftovers", f"{path}: {what} `{m.group(0)[:40]}`")


def check_lane():
    lane = ROOT / "nonmatching"
    scores = lane / "SCORES.tsv"
    if not scores.exists():
        return
    with scores.open() as fh:
        rows = {r["addr"]: r for r in csv.DictReader(fh, delimiter="\t")}
    on_disk = {f.stem.lower() for f in lane.glob("*.cpp")}
    for a in sorted(on_disk - set(rows))[:20]:
        fail("lane", f"nonmatching/{a}.cpp has no SCORES.tsv row (run tools/lane.py score {a})")
    for a in sorted(set(rows) - on_disk)[:20]:
        fail("lane", f"SCORES.tsv row {a} has no file")
    status = ROOT / "out/generated/layout_status.tsv"
    if status.exists():
        with status.open() as fh:
            done = {r["addr"].lower() for r in csv.DictReader(fh, delimiter="\t") if r["mode"].strip() == "cxx"}
        stale = sorted(on_disk & done)
        if stale:
            fail("lane", f"{len(stale)} lane files are for matched functions, e.g. {stale[0]} (run tools/lane.py prune)")


def check_data():
    for path in git("ls-files").splitlines():
        low = path.lower()
        if low.endswith((".elf", ".iso", ".img", ".bin", ".7z", ".zst", ".tar.gz", ".o", ".a")) or "slpm_" in low:
            fail("data", f"{path}: binaries and game data are never tracked")


def check_shared(files):
    for st, path in files:
        if path.startswith(SHARED) or path in SHARED:
            fail("shared", f"{path}: a worker branch may not change this; report it as a SHARED-EDIT")


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--base", default="origin/matching")
    ap.add_argument("--worker", action="store_true")
    ap.add_argument("--no-build", action="store_true")
    args = ap.parse_args()
    mb, files = changed_files(args.base)
    if not args.no_build:
        check_build()
    if not findings:
        check_progress(mb)
    check_registry(mb)
    check_sources(files)
    check_lane()
    check_data()
    if args.worker:
        check_shared(files)
    if findings:
        print(f"gate: FAILED ({len(findings)})")
        return 1
    print("gate: ok")
    return 0


if __name__ == "__main__":
    sys.exit(main())
