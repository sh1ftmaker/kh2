#!/usr/bin/env python3
"""gen_prototypes.py -- build data/prototypes.tsv from the E3 (PS3) DWARF.

Task D (stale callee prototypes): the rig's context skeleton (get_context.py)
gets callee/target arity from two old, weaker sources:

  1. rigcommon.E3_MAP (/data/agent-tom/kh2/e3/map/ee_symbols_mapped.tsv) --
     an address-keyed guess table.  Its "demangled" text is used verbatim to
     build the extern "C" declaration's argument list in get_context.py's
     callee_decls(), and to decide member-vs-free-function class/namespace
     shape in build_skeleton() -- but it is frequently STALE (the registry
     has since been given a different, better name for the same address) and
     it never records whether a member function is `static` (Itanium
     mangling never encodes an implicit `this`, so a demangled signature for
     a non-static member always looks arity-short by exactly one, and a
     static member looks identical to a non-static one).

  2. get_context.py's prototype_for(): computes arity purely by re-parsing
     whatever demangled text it is handed, with no idea whether a member
     function is static.

This script instead reads two much better sources built by the autodecomp
pipeline from the real E3 (PS3) debug build:

  * /data/agent-tom/kh2/autodecomp/out/names/map_functions.tsv
      ee_addr -> ppc_addr, confidence tier, mangled/demangled name
  * /data/agent-tom/kh2/autodecomp/out/simmatch/funcs_dwarf.json
      ppc_addr -> {name, linkage, ret, params[], this(bool), this_type, locals}
      -- a function with no `this` entry (this=False) is a free function or a
      STATIC member; this=True gives the exact `this` pointer type.

Output: data/prototypes.tsv (tab-separated), one row per EE address for which
both sources agree and the mapping's confidence tier is not the weakest
("seed"/"sim-low", both observed to misassign the wrong symbol -- e.g. the
callee at 0x001063f0 is tier "seed" and is registered as plain operator
new[](unsigned int) when the call site actually feeds it two arguments; there
is no such 2-arg overload in the E3 DWARF either, so this script correctly
leaves it out rather than fabricate a wrong "verified" answer).

Columns:
  ee_addr        8 hex digits, no 0x
  dwarf_linkage  the *true* E3-DWARF mangled name (may differ from the
                 registry's mangled name at the same address -- a naming
                 conflict; see docs/e3/additions_conflicts.tsv)
  tier           confidence tier from map_functions.tsv
  static         "1" if this is a class member with no `this` (this=False
                 and the qualified name contains "::"), else "0"
  arity          len(final_args) -- explicit params, with `this` prepended
                 as an explicit leading arg for non-static members
  ret            DWARF return type (may be blank -- E3 often omits it for
                 void-ish/complex returns)
  text           ready-to-use demangled signature: "Qual::name(args)", with
                 `this` spliced in as arg 0 for non-static members and a
                 "[DWARF: static -- ...]" suffix for static ones (rigcommon
                 splices this straight into what get_context.py already
                 treats as "the demangled name", so no get_context.py edit
                 is needed to benefit from it)
  decl_file      source file from the DWARF map
"""

from __future__ import annotations

import json
import re
import sys
from pathlib import Path
from typing import Dict, List

ROOT = Path(__file__).resolve().parents[2]
AUTODECOMP = Path("/data/agent-tom/kh2/autodecomp/out")
MAP_FUNCTIONS = AUTODECOMP / "names" / "map_functions.tsv"
FUNCS_DWARF = AUTODECOMP / "simmatch" / "funcs_dwarf.json"
OUT_TSV = ROOT / "data" / "prototypes.tsv"

# Tiers observed to sometimes misassign the wrong symbol to an address
# entirely (see 0x001063f0 / 0x0027aed8 in the Task D investigation notes):
# too weak to trust for arity.
WEAK_TIERS = {"seed", "sim-low"}


def clean_this_type(t: str) -> str:
    """"Foo *const" (a const pointer, DWARF's spelling of an implicit
    non-static `this`) -> "Foo *" (the type of the argument register)."""
    t = t.strip()
    t = re.sub(r"\s*\*\s*const\s*$", " *", t).strip()
    return t


def load_map_functions() -> List[dict]:
    rows: List[dict] = []
    if not MAP_FUNCTIONS.exists():
        return rows
    lines = MAP_FUNCTIONS.read_text(errors="ignore").splitlines()
    if not lines:
        return rows
    hdr = lines[0].split("\t")
    for line in lines[1:]:
        if not line.strip():
            continue
        rows.append(dict(zip(hdr, line.split("\t"))))
    return rows


def load_funcs_dwarf() -> Dict[str, dict]:
    if not FUNCS_DWARF.exists():
        return {}
    return json.loads(FUNCS_DWARF.read_text())


def build_rows() -> List[dict]:
    mapf = load_map_functions()
    dwarf = load_funcs_dwarf()
    out: List[dict] = []
    for row in mapf:
        ee_addr = row.get("ee_addr", "")
        ppc_addr = row.get("ppc_addr", "")
        tier = row.get("tier", "")
        if not ee_addr or not ppc_addr or tier in WEAK_TIERS:
            continue
        d = dwarf.get(ppc_addr)
        if not d:
            continue
        qual_dem = row.get("demangled") or d.get("name") or ""
        qual = qual_dem.split("(")[0].strip()
        is_method = "::" in qual
        this_flag = bool(d.get("this"))
        static_flag = is_method and not this_flag
        explicit = [p.get("type", "") for p in (d.get("params") or [])]
        if this_flag:
            final_args = [clean_this_type(d.get("this_type") or "")] + explicit
            suffix = ""
        else:
            final_args = explicit
            suffix = (
                " [DWARF: static -- no implicit `this`, do NOT add a leading "
                "self/object-pointer argument]"
                if static_flag else ""
            )
        text = f"{qual}({', '.join(a for a in final_args if a)}){suffix}"
        out.append({
            "ee_addr": ee_addr,
            "dwarf_linkage": row.get("mangled") or d.get("linkage") or "",
            "tier": tier,
            "static": "1" if static_flag else "0",
            "arity": str(len(final_args)),
            "ret": d.get("ret") or "",
            "text": text,
            "decl_file": row.get("decl_file") or d.get("file") or "",
        })
    return out


def main() -> int:
    rows = build_rows()
    OUT_TSV.parent.mkdir(parents=True, exist_ok=True)
    cols = ["ee_addr", "dwarf_linkage", "tier", "static", "arity", "ret", "text", "decl_file"]
    with OUT_TSV.open("w") as f:
        f.write("\t".join(cols) + "\n")
        for r in sorted(rows, key=lambda r: r["ee_addr"]):
            f.write("\t".join(r[c].replace("\t", " ") for c in cols) + "\n")
    print(f"wrote {len(rows)} rows to {OUT_TSV}", file=sys.stderr)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
