"""Shared helpers for the agent-safe matching rig (tools/rig/*.py).

Everything in here is plain python3 (no third-party deps) and importable.
Paths are anchored on the worktree that contains this file.
"""

from __future__ import annotations

import json
import os
import re
import subprocess
import sys
from dataclasses import dataclass, asdict
from pathlib import Path
from typing import Dict, Iterable, List, Optional, Sequence, Tuple

TOOLS_DIR = Path(__file__).resolve().parents[1]
ROOT = TOOLS_DIR.parent
sys.path.insert(0, str(TOOLS_DIR))

import common  # noqa: E402  (tools/common.py)
from common import (  # noqa: E402
    FuncRange,
    MAIN_VADDR,
    addr_to_file_offset,
    load_boundaries,
    load_elf_image,
    parse_hex_addr,
    read_elf_vaddr,
    resolve_symbol_name,
)
import build_elf  # noqa: E402

RIG_OUT = ROOT / "out" / "rig"
GENERATED = ROOT / "out" / "generated"
SYMBOLS_LD = GENERATED / "symbols.ld"
LAYOUT_STATUS = GENERATED / "layout_status.tsv"
SLPM = ROOT / "SLPM_666.75"

E3 = Path(os.environ.get("KH2_E3", "/data/agent-tom/kh2/e3"))
E3_MAP = E3 / "map" / "ee_symbols_mapped.tsv"
E3_DWARF = E3 / "symbols" / "functions_dwarf.tsv"
E3_TYPES = E3 / "symbols" / "types.txt"

PS2_TOOLCHAIN = Path(os.environ.get("PS2_TOOLCHAIN", "/data/agent-tom/kh2/toolchain/gcc"))
EE_BIN = PS2_TOOLCHAIN / "bin"
EE_GXX = EE_BIN / "ee-g++"
EE_LD = EE_BIN / "ee-ld"
EE_AS = EE_BIN / "ee-as"
EE_OBJCOPY = EE_BIN / "ee-objcopy"
EE_OBJDUMP = EE_BIN / "ee-objdump"
LIBGCC_DIR = PS2_TOOLCHAIN / "lib" / "gcc-lib" / "ee" / "3.2-ee-040921"

# Exactly the flags the Makefile uses, plus -I src so candidate files that live
# outside src/ can use repo-root-relative includes.
CXXFLAGS = [
    "-O2",
    "-g0",
    "-x",
    "c++",
    "-fno-exceptions",
    "-fno-rtti",
    "-fpermissive",
    "-ffunction-sections",
    "-I",
    "src",
]

VU0_RE = re.compile(
    r"\b(lqc2|sqc2|cfc2|ctc2|qmfc2|qmtc2|"
    r"v(?:abs|add|sub|mul|div|sqrt|rsqrt|move|mr32|mfir|mtir|nop|clip|"
    r"call|jr|jalr|iadd|isub|iand|ior|ilw|isw|max|mini|opmula|opmsub|"
    r"madd|msub|ftoi\d*|itof\d*|rget|rinit|rnext|rxor|waitq|wait|"
    r"lqi|sqi|lqd|sqd|cal[ls]|sqrt)[a-z0-9._]*)\b"
)
FUNC_TOKEN_RE = re.compile(r"\b(func_[0-9a-fA-F]{8})\b")
D_TOKEN_RE = re.compile(r"\b(D_[0-9a-fA-F]{8})\b")


def json_out(obj) -> None:
    json.dump(obj, sys.stdout, indent=1, sort_keys=False)
    sys.stdout.write("\n")


def die(msg: str, **extra) -> "NoReturn":  # type: ignore[name-defined]
    payload = {"ok": False, "error": msg}
    payload.update(extra)
    json_out(payload)
    raise SystemExit(2)


def _run(cmd: Sequence[str], cwd: Path = ROOT, timeout: float = 120.0) -> subprocess.CompletedProcess:
    return subprocess.run(
        [str(c) for c in cmd],
        cwd=str(cwd),
        capture_output=True,
        text=True,
        timeout=timeout,
    )


# ---------------------------------------------------------------- layout / registry


_layout_cache: Optional[List[FuncRange]] = None
_layout_by_addr: Optional[Dict[int, FuncRange]] = None


def layout() -> List[FuncRange]:
    global _layout_cache, _layout_by_addr
    if _layout_cache is None:
        _layout_cache = load_boundaries()
        _layout_by_addr = {r.addr: r for r in _layout_cache}
    return _layout_cache


def layout_by_addr() -> Dict[int, FuncRange]:
    layout()
    assert _layout_by_addr is not None
    return _layout_by_addr


_registry_cache: Optional[Dict[int, str]] = None


def registry_symbols() -> Dict[int, str]:
    """addr -> mangled symbol, straight from functions.tsv (fast, no src scan)."""
    global _registry_cache
    if _registry_cache is not None:
        return _registry_cache
    out: Dict[int, str] = {}
    path = ROOT / "functions.tsv"
    if path.exists():
        for line in path.read_text().splitlines():
            s = line.strip()
            if not s or s.startswith("#"):
                continue
            parts = s.split("\t")
            if len(parts) != 2:
                continue
            try:
                out[parse_hex_addr(parts[1])] = resolve_symbol_name(parts[0].strip())
            except ValueError:
                continue
    _registry_cache = out
    return out


_symbol_to_addr: Optional[Dict[str, int]] = None


def symbol_to_addr() -> Dict[str, int]:
    global _symbol_to_addr
    if _symbol_to_addr is None:
        _symbol_to_addr = {v: k for k, v in registry_symbols().items()}
    return _symbol_to_addr


_status_cache: Optional[Dict[int, Tuple[str, str]]] = None


def layout_status() -> Dict[int, Tuple[str, str]]:
    """addr -> (mode, source). mode is 'asm' or 'cxx'."""
    global _status_cache
    if _status_cache is not None:
        return _status_cache
    out: Dict[int, Tuple[str, str]] = {}
    if LAYOUT_STATUS.exists():
        for i, line in enumerate(LAYOUT_STATUS.read_text().splitlines()):
            if i == 0 or not line.strip() or line.startswith("#"):
                continue
            parts = line.split("\t")
            if len(parts) < 2:
                continue
            try:
                addr = int(parts[0], 16)
            except ValueError:
                continue
            out[addr] = (parts[1], parts[2] if len(parts) > 2 else "")
    _status_cache = out
    return out


@dataclass
class Target:
    addr: int
    end: int
    size: int
    layout_name: str
    symbol: str  # the mangled symbol a definition must produce
    symbol_origin: str  # registry | e3-seed | e3-high | stub
    mode: str  # asm | cxx
    source: str  # TU that currently defines it (cxx only)


def resolve(spec: str) -> Target:
    """Accept 0xADDR / ADDR / mangled symbol / 'NS::Class::Func(int)'."""
    spec = spec.strip()
    addr: Optional[int] = None
    if common.HEX_RE.match(spec):
        addr = parse_hex_addr(spec)
    else:
        try:
            sym = resolve_symbol_name(spec)
        except ValueError:
            sym = spec
        addr = symbol_to_addr().get(sym)
        if addr is None:
            # maybe a raw layout name like FUN_00281100 / func_00281100
            m = re.search(r"([0-9a-fA-F]{8})$", spec)
            if m:
                addr = int(m.group(1), 16)
        if addr is None:
            die(f"unknown symbol: {spec}")
    row = layout_by_addr().get(addr)
    if row is None:
        die(f"address 0x{addr:08x} is not a layout row start")
    mode, source = layout_status().get(addr, ("asm", ""))
    sym, origin = symbol_for(addr)
    return Target(
        addr=row.addr,
        end=row.end,
        size=row.size,
        layout_name=row.name,
        symbol=sym,
        symbol_origin=origin,
        mode=mode,
        source=source,
    )


def symbol_for(addr: int) -> Tuple[str, str]:
    """The symbol a new definition for `addr` must produce, and where it came from.

    functions.tsv is authoritative. When the address is not registered yet we
    fall back to the E3-2014 mangled name, but only when the mapping confidence
    is `seed` or `high` -- for weaker evidence we use the neutral func_XXXXXXXX
    stub rather than committing a possibly wrong name to the registry.
    """
    reg = registry_symbols().get(addr)
    if reg:
        return reg, "registry"
    row = e3_map().get(addr, {})
    mangled = row.get("mangled", "")
    if mangled and row.get("confidence") in ("seed", "high"):
        return mangled, "e3-" + str(row.get("confidence"))
    return f"func_{addr:08x}", "stub"


# ---------------------------------------------------------------- SLPM bytes / disasm


_slpm_bytes: Optional[bytes] = None


def slpm_bytes() -> bytes:
    global _slpm_bytes
    if _slpm_bytes is None:
        _slpm_bytes = SLPM.read_bytes()
    return _slpm_bytes


def orig_bytes(addr: int, size: int) -> bytes:
    foff = addr_to_file_offset(addr)
    return slpm_bytes()[foff : foff + size]


def disasm(addr: int, end: int, elf: Path = SLPM) -> str:
    cp = _run(
        [
            EE_OBJDUMP,
            "-d",
            "-m",
            "mips:5900",
            f"--start-address=0x{addr:x}",
            f"--stop-address=0x{end:x}",
            str(elf),
        ]
    )
    lines = []
    started = False
    for line in cp.stdout.splitlines():
        if not started:
            if re.match(r"^\s*[0-9a-f]+:\s", line):
                started = True
            else:
                continue
        lines.append(line.rstrip())
    return "\n".join(lines)


def has_vu0(text: str) -> bool:
    for line in text.splitlines():
        # only look at the mnemonic column of objdump output
        m = re.match(r"^\s*[0-9a-f]+:\s+(?:[0-9a-f]{2} ){0,8}\s*([a-z][a-z0-9._]*)", line)
        mn = m.group(1) if m else ""
        if mn and VU0_RE.match(mn):
            return True
    return False


def callees(disasm_text: str) -> List[int]:
    out: List[int] = []
    for m in re.finditer(r"\bjal\s+0x([0-9a-f]+)", disasm_text):
        a = int(m.group(1), 16)
        if a not in out:
            out.append(a)
    return out


def string_refs(disasm_text: str, limit: int = 12) -> List[dict]:
    """lui/addiu pairs pointing at printable ASCII in the ELF image."""
    img = load_elf_image(SLPM)
    if img is None:
        return []
    pending: Dict[str, int] = {}
    out: List[dict] = []
    for line in disasm_text.splitlines():
        m = re.search(r"\blui\s+([a-z0-9]+),0x([0-9a-f]+)", line)
        if m:
            pending[m.group(1)] = int(m.group(2), 16) << 16
            continue
        m = re.search(r"\b(?:addiu|ori|lw|addu)\s+[a-z0-9]+,([a-z0-9]+),(-?(?:0x)?[0-9a-fx]+)", line)
        if m and m.group(1) in pending:
            try:
                lo = int(m.group(2), 16) if m.group(2).startswith(("0x", "-0x")) else int(m.group(2))
            except ValueError:
                continue
            if lo > 0x7FFF:
                lo -= 0x10000
            addr = (pending[m.group(1)] + lo) & 0xFFFFFFFF
            data = read_elf_vaddr(img, addr, 64)
            if not data:
                continue
            s = data.split(b"\0", 1)[0]
            if len(s) >= 3 and all(0x20 <= c < 0x7F for c in s):
                item = {"addr": f"0x{addr:08x}", "text": s.decode("ascii")}
                if item not in out:
                    out.append(item)
                if len(out) >= limit:
                    break
    return out


# ---------------------------------------------------------------- symbols.ld helpers


_symbols_ld_names: Optional[set] = None


def symbols_ld_names() -> set:
    global _symbols_ld_names
    if _symbols_ld_names is None:
        names = set()
        if SYMBOLS_LD.exists():
            for m in re.finditer(r"PROVIDE\(([A-Za-z_][A-Za-z0-9_]*)\s*=", SYMBOLS_LD.read_text()):
                names.add(m.group(1))
        _symbols_ld_names = names
    return _symbols_ld_names


def extra_provides(src_text: str) -> List[str]:
    """PROVIDE lines for func_XXXXXXXX / D_XXXXXXXX tokens not already in symbols.ld."""
    known = symbols_ld_names()
    seen: Dict[str, int] = {}
    for rx in (FUNC_TOKEN_RE, D_TOKEN_RE):
        for m in rx.finditer(src_text):
            name = m.group(1)
            if name in known or name in seen:
                continue
            seen[name] = int(name.split("_")[-1], 16)
    return [f"PROVIDE({n} = 0x{a:08x});" for n, a in sorted(seen.items(), key=lambda kv: kv[1])]


# ---------------------------------------------------------------- E3 data


_e3_map: Optional[Dict[int, dict]] = None


def e3_map() -> Dict[int, dict]:
    global _e3_map
    if _e3_map is not None:
        return _e3_map
    out: Dict[int, dict] = {}
    if E3_MAP.exists():
        lines = E3_MAP.read_text().splitlines()
        hdr = lines[0].split("\t")
        for line in lines[1:]:
            if not line.strip():
                continue
            parts = line.split("\t")
            row = dict(zip(hdr, parts))
            try:
                out[int(row["ee_addr"], 16)] = row
            except (KeyError, ValueError):
                continue
    _e3_map = out
    return out


_dwarf: Optional[Dict[str, dict]] = None


def dwarf_by_linkage() -> Dict[str, dict]:
    global _dwarf
    if _dwarf is not None:
        return _dwarf
    out: Dict[str, dict] = {}
    if E3_DWARF.exists():
        lines = E3_DWARF.read_text(errors="ignore").splitlines()
        hdr = lines[0].split("\t")
        for line in lines[1:]:
            if not line.strip():
                continue
            row = dict(zip(hdr, line.split("\t")))
            ln = row.get("linkage_name", "")
            if ln and ln not in out:
                out[ln] = row
    _dwarf = out
    return out


_types_index: Optional[Dict[str, Tuple[int, int]]] = None
_types_lines: Optional[List[str]] = None


def _load_types() -> Tuple[Dict[str, Tuple[int, int]], List[str]]:
    global _types_index, _types_lines
    if _types_index is not None and _types_lines is not None:
        return _types_index, _types_lines
    idx: Dict[str, Tuple[int, int]] = {}
    lines: List[str] = []
    if E3_TYPES.exists():
        lines = E3_TYPES.read_text(errors="ignore").splitlines()
        starts: List[Tuple[str, int]] = []
        head_re = re.compile(r"^(?:class|structure|union|enumeration)\s+([^\s]+)\s+size=")
        for i, line in enumerate(lines):
            m = head_re.match(line)
            if m:
                starts.append((m.group(1), i))
        for n, (name, i) in enumerate(starts):
            end = starts[n + 1][1] if n + 1 < len(starts) else len(lines)
            # trim trailing blanks
            while end > i + 1 and not lines[end - 1].strip():
                end -= 1
            if name not in idx:
                idx[name] = (i, end)
    _types_index, _types_lines = idx, lines
    return idx, lines


def type_block(name: str, max_lines: int = 80) -> Optional[str]:
    idx, lines = _load_types()
    span = idx.get(name)
    if span is None:
        # try suffix match (e.g. "PartyInfo" -> "Tz::PartyInfo")
        cands = [k for k in idx if k.split("::")[-1] == name]
        if len(cands) != 1:
            return None
        span = idx[cands[0]]
    i, end = span
    block = lines[i:end]
    if len(block) > max_lines:
        block = block[:max_lines] + [f"  /* ... {end - i - max_lines} more lines truncated ... */"]
    return "\n".join(block)


def type_names() -> Iterable[str]:
    idx, _ = _load_types()
    return idx.keys()


# ---------------------------------------------------------------- demangling


_cxxfilt_cache: Dict[str, str] = {}


def cxxfilt(sym: str) -> str:
    """Full Itanium demangling (with argument types) via the system c++filt."""
    if sym in _cxxfilt_cache:
        return _cxxfilt_cache[sym]
    try:
        out = subprocess.run(["c++filt", sym], capture_output=True, text=True, timeout=5).stdout.strip()
    except (OSError, subprocess.SubprocessError):
        out = ""
    _cxxfilt_cache[sym] = out if out and out != sym else ""
    return _cxxfilt_cache[sym]


def demangle(sym: str) -> str:
    """Demangled name WITH argument types when they are recoverable.

    Order: E3 map (has the original spelling) > c++filt (any Itanium name, incl.
    _Z13func_XXXXXXXX placeholders) > DWARF qualified name > repo heuristic.
    """
    if not sym or not sym.startswith("_Z"):
        return sym
    row = e3_map_by_mangled().get(sym)
    if row:
        return row.get("demangled", sym)
    full = cxxfilt(sym)
    if full:
        return full
    d = dwarf_by_linkage().get(sym)
    if d:
        return d.get("qualified", sym)
    q = common._symbol_to_qualified_name(sym)
    return q or sym


_e3_by_mangled: Optional[Dict[str, dict]] = None


def e3_map_by_mangled() -> Dict[str, dict]:
    global _e3_by_mangled
    if _e3_by_mangled is None:
        _e3_by_mangled = {r["mangled"]: r for r in e3_map().values() if r.get("mangled")}
    return _e3_by_mangled


def namespace_of(sym_or_demangled: str) -> str:
    d = sym_or_demangled
    if d.startswith("_Z"):
        d = demangle(d)
    d = d.split("(")[0]
    parts = d.split("::")
    return parts[0] if len(parts) > 1 else ""


def ensure_out() -> Path:
    RIG_OUT.mkdir(parents=True, exist_ok=True)
    return RIG_OUT


# ---------------------------------------------------------------- fast opcode scan

def scan_row(addr: int, size: int) -> dict:
    """Decode the row's words straight from SLPM (no objdump) for cheap triage.

    jal      opcode 0b000011 (0x03)
    j        opcode 0b000010 (0x02)  -- tail calls out of the row count too
    COP2     opcode 0b010010 (0x12)  -- all VU0 macro-mode ops + cfc2/ctc2/qmfc2/qmtc2
    LQC2     opcode 0b110110 (0x36)
    SQC2     opcode 0b111110 (0x3e)
    """
    data = orig_bytes(addr, size)
    calls: List[int] = []
    vu0 = False
    for i in range(0, len(data) - 3, 4):
        w = int.from_bytes(data[i : i + 4], "little")
        op = w >> 26
        if op == 0x03 or op == 0x02:  # jal / j (tail call)
            t = ((addr + i) & 0xF0000000) | ((w & 0x03FFFFFF) << 2)
            if op == 0x02 and addr <= t < addr + size:
                continue  # local branch, not a tail call
            if t not in calls:
                calls.append(t)
        elif op in (0x12, 0x36, 0x3E):
            vu0 = True
    return {"calls": calls, "n_calls": len(calls), "uses_vu0": vu0}


# ---------------------------------------------------------------- repo headers

CLASS_DECL_RE_TMPL = r"^[ \t]*(?:class|struct)\s+{cls}\s*(?::[^{{;]*)?\{{"


def find_class_header(qualified: str) -> Optional[dict]:
    """Locate the repo header that already declares `NS::Class`, if any.

    A candidate that redeclares a class the repo already has will not build once
    it is promoted into a TU that includes that header, so the model needs to
    know up front.
    """
    if not qualified:
        return None
    parts = qualified.split("::")
    cls = parts[-1]
    ns = parts[:-1]
    rx = re.compile(CLASS_DECL_RE_TMPL.format(cls=re.escape(cls)), re.M)
    src = ROOT / "src"
    for p in sorted(list(src.rglob("*.hpp")) + list(src.rglob("*.h"))):
        text = p.read_text(errors="ignore")
        m = rx.search(text)
        if not m:
            continue
        if ns and not all(f"namespace {n}" in text for n in ns):
            continue
        members = re.findall(r"\b([A-Za-z_~][A-Za-z0-9_]*)\s*\(", text[m.end() :])
        layouts = re.findall(r"^\s*struct\s+([A-Za-z_][A-Za-z0-9_]*Layout)\s*\{", text, re.M)
        return {
            "header": p.relative_to(ROOT).as_posix(),
            "include": p.relative_to(src).as_posix(),
            "declared_members": sorted(set(members)),
            "layout_structs": sorted(set(layouts)),
        }
    return None


def tu_for_header(header_rel: str) -> Optional[str]:
    p = ROOT / header_rel
    cpp = p.with_suffix(".cpp")
    return cpp.relative_to(ROOT).as_posix() if cpp.exists() else None
