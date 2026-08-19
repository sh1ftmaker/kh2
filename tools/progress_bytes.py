#!/usr/bin/env python3
"""Honest progress: matched *bytes* (not function count), by size bin and by source dir.

Reads out/generated/layout_status.tsv (produced by `tools/build_elf.py objects`).
A function counts as decompiled only if it has a C++ source (status == cxx).
"""
from __future__ import annotations
import argparse, csv, json, sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
STATUS = ROOT / "out" / "generated" / "layout_status.tsv"
LAYOUT = ROOT / "layout.tsv"
BINS = [(0, 80, "<80 B"), (80, 200, "80-199 B"), (200, 1000, "200-999 B"), (1000, 1 << 30, ">=1 KB")]


def load():
    sizes = {}
    with LAYOUT.open() as f:
        rd = csv.DictReader((l for l in f if not l.startswith("#")), delimiter="\t")
        for r in rd:
            sizes[int(r["addr"], 16)] = int(r["size"])
    rows = []
    with STATUS.open() as f:
        rd = csv.DictReader((l for l in f if not l.startswith("#")), delimiter="\t")
        for r in rd:
            r["size"] = sizes[int(r["addr"], 16)]
            rows.append(r)
    return rows


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--json", action="store_true")
    a = ap.parse_args()
    if not STATUS.exists():
        print(f"missing {STATUS}; run `make` first", file=sys.stderr)
        return 1
    rows = load()
    size_k, status_k, src_k = "size", "mode", "source"
    tot_b = tot_n = done_b = done_n = 0
    bins = {lab: [0, 0, 0, 0] for _, _, lab in BINS}  # done_n, tot_n, done_b, tot_b
    dirs = defaultdict(lambda: [0, 0])  # n, bytes
    for r in rows:
        sz = int(r[size_k]); done = r[status_k].strip().lower() == "cxx"
        tot_b += sz; tot_n += 1
        for lo, hi, lab in BINS:
            if lo <= sz < hi:
                bins[lab][1] += 1; bins[lab][3] += sz
                if done: bins[lab][0] += 1; bins[lab][2] += sz
        if done:
            done_b += sz; done_n += 1
            d = "?"
            if src_k and r.get(src_k):
                p = Path(r[src_k]).parts
                d = p[1] if len(p) > 1 and p[0] == "src" else p[0]
            dirs[d][0] += 1; dirs[d][1] += sz
    out = {
        "functions": {"done": done_n, "total": tot_n, "percent": round(100 * done_n / tot_n, 2)},
        "bytes": {"done": done_b, "total": tot_b, "percent": round(100 * done_b / tot_b, 2)},
        "bins": {lab: {"done_fns": v[0], "total_fns": v[1], "done_bytes": v[2], "total_bytes": v[3]} for lab, v in bins.items()},
        "by_dir": {d: {"fns": v[0], "bytes": v[1]} for d, v in sorted(dirs.items(), key=lambda kv: -kv[1][1])},
    }
    if a.json:
        json.dump(out, sys.stdout, indent=2); print(); return 0
    print(f"Functions: {done_n}/{tot_n} ({out['functions']['percent']}%)")
    print(f"Bytes:     {done_b}/{tot_b} ({out['bytes']['percent']}%)   <- headline")
    print("\nBy size bin (done/total fns, done/total bytes):")
    for lab, v in bins.items():
        print(f"  {lab:>10}: {v[0]:5d}/{v[1]:5d} fns   {v[2]:8d}/{v[3]:8d} B  ({100*v[2]/max(v[3],1):5.1f}%)")
    print("\nDecompiled bytes by src dir:")
    for d, v in out["by_dir"].items():
        print(f"  {d:16s} {v['fns']:5d} fns  {v['bytes']:8d} B")
    return 0


if __name__ == "__main__":
    sys.exit(main())
