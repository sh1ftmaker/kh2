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


def _scope_mismatch(info: dict, cls: str, body: str) -> bool:
    """True when the header declares `cls` inside a namespace the candidate never
    opens, so the header cannot stand in for the candidate's own definition.

    Deliberately shallow -- one level of `namespace X {` is what the repo's
    headers actually use, and a wrong answer here only costs a redundant local
    definition, never a bad build.
    """
    try:
        text = (rc.ROOT / info["header"]).read_text()
    except OSError:
        return False
    decl = re.search(rf"^[ \t]*(?:struct|class)\s+{re.escape(cls)}\b", text, re.M)
    if not decl:
        return False
    ns = None
    for nm in re.finditer(r"^[ \t]*namespace\s+([A-Za-z_][A-Za-z0-9_]*)\s*\{", text, re.M):
        if nm.start() < decl.start():
            ns = nm.group(1)
    if not ns:
        return False
    if re.search(rf"\bnamespace\s+{re.escape(ns)}\b|\busing\s+namespace\s+{re.escape(ns)}\b"
                 rf"|\b{re.escape(ns)}\s*::\s*{re.escape(cls)}\b", body):
        return False
    return bool(re.search(rf"(?<!::)\b{re.escape(cls)}\b", body))


def normalize_candidate(body: str, dest: Optional[Path] = None,
                        dest_text: str = "") -> tuple[str, List[dict], List[dict]]:
    """Turn a self-contained candidate into repo house style.

    A candidate must compile on its own, so it declares its own methods-only
    class. Once the function lands in a TU next to the repo's real header that
    local declaration becomes a redefinition, so here we drop it, add the
    header include instead, and remember which member declarations the header
    still needs.
    """
    edits: List[dict] = []
    includes: List[str] = []
    kept: List[dict] = []
    out = body
    # Candidate includes are spelled relative to `src/` (-I src).  Inside the
    # destination TU they must be spelled the way the TU spells them, and
    # dropped when the TU already includes the same file under another spelling
    # (ee-gcc 3.2 keys `#pragma once` on the spelled path, so two spellings of
    # one header is a redefinition error).
    def _resolve(spelled: str, base_dir: Path) -> Optional[Path]:
        for cand in (base_dir / spelled, rc.ROOT / "src" / spelled):
            try:
                if cand.exists():
                    return cand.resolve()
            except OSError:
                pass
        return None
    dest_dir = dest.parent if dest is not None else rc.ROOT / "src"
    dest_includes = set()
    for dm in re.finditer(r'^[ \t]*#include\s+"([^"]+)"', dest_text, re.M):
        r = _resolve(dm.group(1), dest_dir)
        if r:
            dest_includes.add(r)
    def _fix_include(m):
        spelled = m.group(1)
        r = _resolve(spelled, rc.ROOT / "src")
        if r is None:
            return m.group(0)
        if r in dest_includes:
            return ""  # already included by the TU
        return f'#include "{os.path.relpath(r, dest_dir)}"'
    out = re.sub(r'^[ \t]*#include\s+"([^"]+)"[ \t]*\n?', lambda m: _fix_include(m) + ("\n" if _fix_include(m) else ""), out, flags=re.M)
    while True:
        m = CLASS_BLOCK_RE.search(out)
        if not m:
            break
        cls = m.group("cls")
        info = rc.find_class_header(cls)
        if info is not None and _scope_mismatch(info, cls, out):
            # The repo header declares this type inside a namespace, but the
            # candidate names it unqualified from a global-scope `extern "C"`
            # function. Dropping the local definition in favour of the header
            # would leave the type undeclared at the use site, which is how
            # 0x0028b078 failed to promote while being byte-exact. Keep the
            # candidate self-contained instead.
            info = None
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
        local_types = set(re.findall(
            r"^[ \t]*(?:struct|class|union|enum)\s+([A-Za-z_][A-Za-z0-9_]*)", body, re.M))
        local_types.discard(cls)
        pending: List[dict] = []
        movable = True
        for dm in re.finditer(r"^[ \t]*([^;{}]*?\b([A-Za-z_~][A-Za-z0-9_]*)\s*\([^;{}]*\)[^;{}]*);",
                              block, re.M):
            decl = " ".join(dm.group(1).split())
            decl = re.sub(r"^(?:public|private|protected)\s*:\s*", "", decl)
            # A declaration naming a type that only exists in the candidate cannot
            # move into the repo header -- the header would not parse.
            if any(re.search(rf"\b{re.escape(lt)}\b", decl) for lt in local_types):
                movable = False
                break
            pending.append({"cls": cls, "fn": dm.group(2), "decl": decl + ";",
                            "header": info["header"], "include": info["include"]})
        if not movable:
            # leave this class declaration in place; the candidate stays self-contained
            e = _block_end(out, m.end() - 1)
            if e is None:
                break
            kept.append({"cls": cls, "header": info["header"], "include": info["include"]})
            out = out[:m.start()] + out[m.start():e].replace("class ", "class\x00", 1).replace(
                "struct ", "struct\x00", 1) + out[e:]
            continue
        edits.extend(pending)
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
    return out, edits, kept


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


UNDEF_RE = re.compile(r"undefined reference to [`']((?:func|wtarget|ctarget)_([0-9a-fA-F]{8}))'")


def register_stub_callees(make_output: str, rb: "Rollback") -> List[str]:
    """Add registry rows for stub callees the full link could not resolve.

    A candidate is scored by mini-linking it against PROVIDEd callee addresses,
    so it can be byte-exact while the real link still fails on a callee that has
    no row in functions.tsv. Only addresses that are genuine layout rows are
    added -- a typo'd or hallucinated symbol must still fail loudly.
    """
    rows = {r.addr for r in rc.layout()}
    regs = rc.registry_symbols()
    want = {}
    for sym, hexaddr in UNDEF_RE.findall(make_output):
        addr = int(hexaddr, 16)
        if addr in rows and addr not in regs and sym.startswith("func_"):
            want[sym] = hexaddr.lower()
    if not want:
        return []
    registry = rc.ROOT / "functions.tsv"
    rb.track(registry)
    lines = registry.read_text().splitlines()
    for sym, hexaddr in sorted(want.items(), key=lambda kv: kv[1]):
        out, done = [], False
        for line in lines:
            if not done and "\t" in line and not line.startswith("#"):
                if line.split("\t")[1].strip() > hexaddr:
                    out.append(f"{sym}\t{hexaddr}")
                    done = True
            out.append(line)
        if not done:
            out.append(f"{sym}\t{hexaddr}")
        lines = out
    registry.write_text("\n".join(lines) + "\n")
    rc._registry_cache = None
    return sorted(want)


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
    # the registry may already carry this address under another spelling of the
    # same symbol (e.g. `Tz::MenuCursor::DeleteAll(...)`); one row per address
    if addr in rc.registry_symbols():
        return False
    if not text.endswith("\n"):
        text += "\n"
    path.write_text(text + line)
    return True


def promote(spec: str, src: Path, dest: str, *, dry_run: bool = False) -> dict:
    # cross-PROCESS serialisation: promote edits shared repo files and runs make;
    # the driver's threading.Lock only covers its own threads, and a second
    # promoter (hand session, Fable agent) may run concurrently with a campaign
    import fcntl
    rc.RIG_OUT.mkdir(parents=True, exist_ok=True)
    _plock = open(rc.RIG_OUT / "promote.flock", "w")
    fcntl.flock(_plock, fcntl.LOCK_EX)
    try:
        return _promote_locked(spec, src, dest, dry_run=dry_run)
    finally:
        fcntl.flock(_plock, fcntl.LOCK_UN)
        _plock.close()


def _promote_locked(spec: str, src: Path, dest: str, *, dry_run: bool = False) -> dict:
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
    body, pending_decls, kept_classes = normalize_candidate(
        src.read_text(), dest_path, dest_text)
    for k in kept_classes:
        base = Path(k["include"]).name
        if re.search(rf'#include\s+"[^"]*{re.escape(base)}"', dest_text):
            return {
                "ok": False, "promoted": False, "addr": f"0x{target.addr:08x}",
                "reason": (
                    f'the candidate declares class {k["cls"]} with a member whose type '
                    f'only exists in the candidate, so that declaration cannot move into '
                    f'{k["header"]}; but {dest} already includes that header, which would '
                    f'be a redefinition. Either restrict the local class to members the '
                    f'header can express, or pick a destination TU that does not include '
                    f'{k["include"]}.'
                ),
            }
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

    # out/generated/{objects.mk,layout_status.tsv,symbols.ld} are regenerated only
    # when layout.tsv/functions.tsv change, so adding a definition to an existing TU
    # would otherwise leave the row marked `asm` and the build would still .incbin
    # the original bytes -- a vacuous MATCHED!. Force the regeneration.
    subprocess.run(
        ["python3", str(rc.ROOT / "tools" / "build_elf.py"), "objects"],
        cwd=str(rc.ROOT), capture_output=True, text=True, timeout=600,
    )
    cp = subprocess.run(
        [MAKE, "verify"], cwd=str(rc.ROOT), capture_output=True, text=True, timeout=1800,
    )
    out = (cp.stdout or "") + (cp.stderr or "")
    log = rc.ensure_out() / "last_verify.log"
    log.write_text(out)
    matched = cp.returncode == 0 and "MATCHED!" in out

    if not matched:
        added = register_stub_callees(out, rb)
        if added:
            # The mini-link scorer PROVIDEs every callee, so a candidate can be
            # byte-exact and still fail the full link when a callee it calls has
            # no registry row. That is a registry gap, not a defect in the
            # candidate -- fill it and verify once more.
            subprocess.run(
                ["python3", str(rc.ROOT / "tools" / "build_elf.py"), "objects"],
                cwd=str(rc.ROOT), capture_output=True, text=True, timeout=600,
            )
            cp = subprocess.run(
                [MAKE, "verify"], cwd=str(rc.ROOT), capture_output=True, text=True, timeout=1800,
            )
            out = (cp.stdout or "") + (cp.stderr or "")
            out += "\nrig: auto-registered stub callees: " + " ".join(added) + "\n"
            log.write_text(out)
            matched = cp.returncode == 0 and "MATCHED!" in out

    # A MATCHED! that did not actually build this row from source proves nothing.
    built_from = ""
    if matched:
        rc._status_cache = None
        mode, srcfile = rc.layout_status().get(target.addr, ("asm", ""))
        built_from = srcfile
        if mode != "cxx" or not srcfile:
            matched = False
            out += (f"\nrig: 0x{target.addr:08x} is still marked '{mode}' in "
                    "out/generated/layout_status.tsv -- the build did not use the new "
                    "definition, so MATCHED! says nothing about it. The registry symbol "
                    "probably does not resolve to the destination TU.\n")

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
        "built_from": built_from,
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
