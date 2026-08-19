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
import os
import re
import subprocess
import sys
import time
from pathlib import Path
from typing import Dict, List, Optional

sys.path.insert(0, str(Path(__file__).resolve().parent))

import rigcommon as rc
from compile_diff import compile_diff

DEF_RE = re.compile(
    r"^[ \t]*(?P<ret>[A-Za-z_][A-Za-z0-9_:<>,*&\s]*?[\s*&])"
    r"(?P<cls>[A-Za-z_][A-Za-z0-9_]*)::(?P<fn>~?[A-Za-z_][A-Za-z0-9_]*)"
    r"\s*\((?P<args>[^;{}]*)\)\s*(?P<cv>const)?\s*\{",
    re.M,
)


def member_decls(src_text: str) -> List[dict]:
    """Out-of-line member definitions in a candidate file."""
    out = []
    for m in DEF_RE.finditer(src_text):
        ret = " ".join(m.group("ret").split())
        args = " ".join(m.group("args").split())
        cv = " const" if m.group("cv") else ""
        out.append(
            {
                "cls": m.group("cls"),
                "fn": m.group("fn"),
                "decl": f"{ret} {m.group('fn')}({args}){cv};",
            }
        )
    return out


def ensure_member_decl(header: Path, cls: str, fn: str, decl: str) -> Optional[str]:
    """Add `decl` to `class cls` in `header` if that member is not declared yet.

    Returns the inserted line, or None when nothing was needed.
    """
    text = header.read_text()
    m = re.search(rf"^[ \t]*(?:class|struct)\s+{re.escape(cls)}\s*(?::[^{{;]*)?\{{", text, re.M)
    if not m:
        return None
    depth = 0
    end = None
    for i in range(m.end() - 1, len(text)):
        if text[i] == "{":
            depth += 1
        elif text[i] == "}":
            depth -= 1
            if depth == 0:
                end = i
                break
    if end is None:
        return None
    body = text[m.end() : end]
    if re.search(rf"\b{re.escape(fn)}\s*\(", body):
        return None
    line_start = text.rfind("\n", 0, end) + 1
    header.write_text(text[:line_start] + f"    {decl}\n" + text[line_start:])
    return decl



CLASS_BLOCK_RE = re.compile(
    r"^[ \t]*(?:class|struct)\s+(?P<cls>[A-Za-z_][A-Za-z0-9_]*)\s*(?::[^{;]*)?\{",
    re.M,
)


def _block_end(text: str, open_brace: int) -> Optional[int]:
    depth = 0
    for i in range(open_brace, len(text)):
        if text[i] == "{":
            depth += 1
        elif text[i] == "}":
            depth -= 1
            if depth == 0:
                j = text.find(";", i)
                return (j + 1) if j != -1 else (i + 1)
    return None


def normalize_candidate(body: str, dest: Optional[Path] = None,
                        dest_text: str = "") -> tuple[str, List[dict]]:
    """Turn a self-contained candidate into repo house style.

    A candidate must compile on its own, so it declares its own methods-only
    class. Once the function lands in a TU next to the repo's real header that
    local declaration becomes a redefinition, so here we drop it, add the
    header include instead, and remember which member declarations the header
    still needs.
    """
    edits: List[dict] = []
    includes: List[str] = []
    out = body
    while True:
        m = CLASS_BLOCK_RE.search(out)
        if not m:
            break
        cls = m.group("cls")
        info = rc.find_class_header(cls)
        if info is None:
            # not a repo class: leave it alone, but do not rescan it
            nxt = CLASS_BLOCK_RE.search(out, m.end())
            if nxt is None:
                break
            # temporarily mask this block so the loop can move on
            end = _block_end(out, m.end() - 1)
            if end is None:
                break
            out = out[:m.start()] + out[m.start():end].replace("class ", "class\x00", 1).replace(
                "struct ", "struct\x00", 1) + out[end:]
            continue
        end = _block_end(out, m.end() - 1)
        if end is None:
            break
        block = out[m.start():end]
        for dm in re.finditer(r"^[ \t]*([^;{}]*?\b([A-Za-z_~][A-Za-z0-9_]*)\s*\([^;{}]*\)[^;{}]*);",
                              block, re.M):
            decl = " ".join(dm.group(1).split())
            decl = re.sub(r"^(?:public|private|protected)\s*:\s*", "", decl)
            edits.append({"cls": cls, "fn": dm.group(2), "decl": decl + ";",
                          "header": info["header"], "include": info["include"]})
        includes.append(info["include"])
        out = out[:m.start()] + out[end:]
    out = out.replace("class\x00", "class ").replace("struct\x00", "struct ")
    for inc in dict.fromkeys(includes):
        base = Path(inc).name
        # ee-gcc 3.2 keys `#pragma once` on the spelled path, so including the
        # same header under two spellings in one TU is a redefinition error.
        # Reuse whatever spelling the destination TU already uses.
        if re.search(rf'#include\s+"[^"]*{re.escape(base)}"', dest_text):
            continue
        spelled = inc
        if dest is not None:
            spelled = os.path.relpath(rc.ROOT / "src" / inc, dest.parent)
        line = f'#include "{spelled}"'
        if line not in out:
            out = line + "\n" + out
    return out, edits


def error_lines(out: str, limit: int = 25) -> List[str]:
    """The lines that actually explain the failure, not the wall of warnings."""
    lines = [l.rstrip() for l in out.splitlines() if l.strip()]
    hits: List[str] = []
    for i, l in enumerate(lines):
        low = l.lower()
        if "error" in low and "werror" not in low:
            hits.extend(lines[max(0, i - 1) : i + 2])
    if not hits:
        hits = lines[-limit:]
    seen, uniq = set(), []
    for l in hits:
        if l not in seen:
            seen.add(l)
            uniq.append(l)
    return uniq[-limit:]


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

    created = not dest_path.exists()
    dest_text = "" if created else dest_path.read_text()
    body, pending_decls = normalize_candidate(src.read_text(), dest_path, dest_text)
    dest_path.parent.mkdir(parents=True, exist_ok=True)
    if created:
        dest_path.write_text(body if body.endswith("\n") else body + "\n")
    else:
        prev = dest_text
        sep = "" if prev.endswith("\n") else "\n"
        dest_path.write_text(
            prev + sep + f"\n// ---- 0x{target.addr:08x} {target.symbol} ----\n" + body
        )

    added = add_registry_entry(registry, target.addr, target.symbol)

    # If the candidate defines members of a class the repo already declares in a
    # header, that header needs the declaration too -- otherwise the TU will not
    # compile. Rolled back with everything else on failure.
    header_edits: List[str] = []
    seen = {(d["cls"], d["fn"]) for d in pending_decls}
    for d in member_decls(body):
        if (d["cls"], d["fn"]) in seen:
            continue
        info = rc.find_class_header(d["cls"])
        if info and info["include"] in body:
            d = dict(d, header=info["header"], include=info["include"])
            pending_decls.append(d)
    for d in pending_decls:
        hp = rc.ROOT / d["header"]
        rb.track(hp)
        ins = ensure_member_decl(hp, d["cls"], d["fn"], d["decl"])
        if ins:
            header_edits.append(f'{d["header"]}: {ins}')

    cp = subprocess.run(
        [MAKE, "verify"], cwd=str(rc.ROOT), capture_output=True, text=True, timeout=1800,
    )
    out = (cp.stdout or "") + (cp.stderr or "")
    log = rc.ensure_out() / "last_verify.log"
    log.write_text(out)
    matched = cp.returncode == 0 and "MATCHED!" in out

    if not matched:
        undone = rb.restore()
        tail = error_lines(out)
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
        "header_declarations_added": header_edits,
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
