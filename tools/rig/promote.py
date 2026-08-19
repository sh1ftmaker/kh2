#!/usr/bin/env python3
"""promote.py <addr|symbol> --src <file.cpp> --dest src/<dir>/<tu>.cpp

Land a byte-exact candidate in the repo. The steps, in order, and any failure
rolls every touched file back to exactly its previous content:

  1. re-run compile_diff; refuse unless exact == true
  2. write/append the candidate into the destination TU
  3. make sure functions.tsv maps the address to the symbol the definition emits
  4. run `make verify` (a real full build) and require MATCHED!

Nothing is left behind on failure: pre-existing files are restored byte for
byte and files this tool created are deleted.
"""

from __future__ import annotations

import argparse
import json
import subprocess
import sys
import time
from pathlib import Path
from typing import Dict, List, Optional

sys.path.insert(0, str(Path(__file__).resolve().parent))

import rigcommon as rc
from compile_diff import compile_diff

# /usr/bin/make explicitly: the PS2 toolchain ships an ancient `make` that lands
# on PATH via tools/env.sh and mis-expands $(abspath ...).
MAKE = "/usr/bin/make"


class Rollback:
    def __init__(self) -> None:
        self.saved: Dict[Path, Optional[bytes]] = {}

    def track(self, path: Path) -> None:
        if path in self.saved:
            return
        self.saved[path] = path.read_bytes() if path.exists() else None

    def restore(self) -> List[str]:
        touched = []
        for path, data in self.saved.items():
            if data is None:
                if path.exists():
                    path.unlink()
                    touched.append(f"deleted {path}")
            else:
                path.write_bytes(data)
                touched.append(f"restored {path}")
        return touched


def registry_check(addr: int, symbol: str) -> Optional[str]:
    """None when the registry can hold this (addr, symbol); else the conflict."""
    regs = rc.registry_symbols()
    cur = regs.get(addr)
    if cur and cur != symbol:
        return f"functions.tsv already maps 0x{addr:08x} to {cur}, not {symbol}"
    other = rc.symbol_to_addr().get(symbol)
    if other is not None and other != addr:
        return f"functions.tsv already maps {symbol} to 0x{other:08x}"
    return None


def add_registry_entry(path: Path, addr: int, symbol: str) -> bool:
    text = path.read_text()
    line = f"{symbol}\t{addr:08x}\n"
    if line in text:
        return False
    if not text.endswith("\n"):
        text += "\n"
    path.write_text(text + line)
    return True


def promote(spec: str, src: Path, dest: str, *, dry_run: bool = False) -> dict:
    t0 = time.time()
    target = rc.resolve(spec)
    src = Path(src)
    if not src.is_absolute():
        src = (rc.ROOT / src).resolve()
    dest_path = (rc.ROOT / dest).resolve()
    if not str(dest_path).startswith(str(rc.ROOT / "src")):
        rc.die(f"--dest must live under src/: {dest}")
    if dest_path.suffix != ".cpp":
        rc.die(f"--dest must be a .cpp translation unit: {dest}")

    # 1. re-check
    cd = compile_diff(spec, src)
    if not cd.get("exact"):
        return {
            "ok": False,
            "promoted": False,
            "addr": f"0x{target.addr:08x}",
            "reason": "candidate is not byte-exact; nothing was written",
            "compile_diff": {k: cd.get(k) for k in
                             ("exact", "size_ok", "fuzzy_pct", "compiled_size",
                              "compile_errors", "link_errors")},
        }

    conflict = registry_check(target.addr, target.symbol)
    if conflict:
        return {"ok": False, "promoted": False, "addr": f"0x{target.addr:08x}",
                "reason": conflict}

    if dry_run:
        return {"ok": True, "promoted": False, "dry_run": True,
                "addr": f"0x{target.addr:08x}", "symbol": target.symbol,
                "dest": dest}

    rb = Rollback()
    registry = rc.ROOT / "functions.tsv"
    rb.track(dest_path)
    rb.track(registry)

    body = src.read_text()
    created = not dest_path.exists()
    dest_path.parent.mkdir(parents=True, exist_ok=True)
    if created:
        dest_path.write_text(body if body.endswith("\n") else body + "\n")
    else:
        prev = dest_path.read_text()
        sep = "" if prev.endswith("\n") else "\n"
        dest_path.write_text(
            prev + sep + f"\n// ---- 0x{target.addr:08x} {target.symbol} ----\n" + body
        )

    added = add_registry_entry(registry, target.addr, target.symbol)

    cp = subprocess.run(
        [MAKE, "verify"], cwd=str(rc.ROOT), capture_output=True, text=True, timeout=1800,
    )
    out = (cp.stdout or "") + (cp.stderr or "")
    matched = cp.returncode == 0 and "MATCHED!" in out

    if not matched:
        undone = rb.restore()
        tail = [l for l in out.splitlines() if l.strip()][-25:]
        return {
            "ok": False,
            "promoted": False,
            "addr": f"0x{target.addr:08x}",
            "symbol": target.symbol,
            "reason": "make verify did not print MATCHED!",
            "make_output_tail": tail,
            "rolled_back": undone,
        }

    return {
        "ok": True,
        "promoted": True,
        "addr": f"0x{target.addr:08x}",
        "symbol": target.symbol,
        "symbol_origin": target.symbol_origin,
        "size": target.size,
        "dest": dest,
        "dest_created": created,
        "registry_entry_added": added,
        "verify": "MATCHED!",
        "elapsed_ms": int((time.time() - t0) * 1000),
    }


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("target")
    ap.add_argument("--src", required=True)
    ap.add_argument("--dest", required=True)
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()
    res = promote(args.target, Path(args.src), args.dest, dry_run=args.dry_run)
    rc.json_out(res)
    return 0 if res.get("ok") else 1


if __name__ == "__main__":
    raise SystemExit(main())
