#!/usr/bin/env python3
"""list_candidates.py — undecompiled layout rows that are worth attempting.

A row is a candidate when layout_status says `asm` (nothing in src/ builds it yet).
Filters let a driver or a human carve out a work queue.

JSON on stdout: {"ok": true, "count": N, "candidates": [ {...}, ... ]}
Each candidate: addr, size, symbol (mangled or null), demangled, decl_file,
namespace, n_calls, uses_vu0, confidence, parked.
"""

from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path
from typing import Dict, List, Optional

sys.path.insert(0, str(Path(__file__).resolve().parent))

import rigcommon as rc

CACHE = rc.RIG_OUT / "candidates_cache.json"


def _scan_row(row, sym: str) -> Dict[str, object]:
    """Cheap opcode scan straight from SLPM bytes (no objdump subprocess)."""
    s = rc.scan_row(row.addr, row.size)
    return {"n_calls": s["n_calls"], "uses_vu0": s["uses_vu0"]}


def parked_addrs() -> set:
    path = rc.RIG_OUT / "parked.json"
    out = set()
    if path.exists():
        try:
            for k in json.loads(path.read_text()):
                out.add(int(k, 16))
        except (ValueError, json.JSONDecodeError):
            pass
    tsv = rc.ROOT / "docs" / "rig" / "parked.tsv"
    if tsv.exists():
        for i, line in enumerate(tsv.read_text().splitlines()):
            if i == 0 or not line.strip() or line.startswith("#"):
                continue
            try:
                out.add(int(line.split("\t")[0], 16))
            except ValueError:
                pass
    return out


def list_candidates(
    *,
    min_size: int = 0,
    max_size: int = 1 << 30,
    named_only: bool = False,
    namespace: Optional[str] = None,
    decl_file: Optional[str] = None,
    exclude_parked: bool = True,
    exclude_vu0: bool = False,
    limit: int = 50,
    sort: str = "size",
    scan: bool = True,
) -> List[dict]:
    status = rc.layout_status()
    regs = rc.registry_symbols()
    e3 = rc.e3_map()
    parked = parked_addrs() if exclude_parked else set()

    rows = []
    for row in rc.layout():
        mode, _src = status.get(row.addr, ("asm", ""))
        if mode != "asm":
            continue
        if not (min_size <= row.size <= max_size):
            continue
        if row.addr in parked:
            continue
        sym = regs.get(row.addr, "")
        e3row = e3.get(row.addr, {})
        if not sym:
            sym = e3row.get("mangled", "")
        if named_only and not sym:
            continue
        dem = e3row.get("demangled") or (rc.demangle(sym) if sym else "")
        ns = rc.namespace_of(dem) if dem else ""
        if namespace and ns != namespace:
            continue
        df = e3row.get("decl_file", "")
        if decl_file and decl_file.lower() not in df.lower():
            continue
        rows.append(
            {
                "addr": f"0x{row.addr:08x}",
                "size": row.size,
                "symbol": sym or None,
                "demangled": dem or None,
                "namespace": ns or None,
                "decl_file": df or None,
                "confidence": e3row.get("confidence") or None,
                "layout_name": row.name,
                "_row": row,
            }
        )

    if sort == "size":
        rows.sort(key=lambda r: (r["size"], r["addr"]))
    elif sort == "-size":
        rows.sort(key=lambda r: (-r["size"], r["addr"]))
    elif sort == "addr":
        rows.sort(key=lambda r: r["addr"])
    elif sort == "confidence":
        order = {"seed": 0, "high": 1, "med": 2, "low": 3}
        rows.sort(key=lambda r: (order.get(r["confidence"] or "", 9), r["size"]))

    out: List[dict] = []
    for r in rows:
        row = r.pop("_row")
        if scan:
            r.update(_scan_row(row, r["symbol"] or ""))
            if exclude_vu0 and r["uses_vu0"]:
                continue
        out.append(r)
        if len(out) >= limit:
            break
    return out


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--min-size", type=int, default=0)
    ap.add_argument("--max-size", type=int, default=1 << 30)
    ap.add_argument("--named-only", action="store_true",
                    help="only rows with a known mangled name (registry or E3 map)")
    ap.add_argument("--namespace", help="top-level namespace, e.g. Tz / YS / dk")
    ap.add_argument("--decl-file", help="substring match on the E3 decl_file")
    ap.add_argument("--exclude-parked", action="store_true", default=True)
    ap.add_argument("--include-parked", dest="exclude_parked", action="store_false")
    ap.add_argument("--exclude-vu0", action="store_true",
                    help="drop functions that use COP2/VU0 macro-mode instructions")
    ap.add_argument("--limit", type=int, default=50)
    ap.add_argument("--sort", default="size", choices=["size", "-size", "addr", "confidence"])
    ap.add_argument("--no-scan", dest="scan", action="store_false",
                    help="skip the disassembly scan (no n_calls / uses_vu0)")
    args = ap.parse_args()

    cands = list_candidates(
        min_size=args.min_size,
        max_size=args.max_size,
        named_only=args.named_only,
        namespace=args.namespace,
        decl_file=args.decl_file,
        exclude_parked=args.exclude_parked,
        exclude_vu0=args.exclude_vu0,
        limit=args.limit,
        sort=args.sort,
        scan=args.scan,
    )
    rc.json_out({"ok": True, "count": len(cands), "candidates": cands})
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
