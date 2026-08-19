#!/usr/bin/env python3
"""lock.py acquire|release|list <addr>

Advisory per-function file locks so several agents can share one worktree
without two of them promoting the same layout row. Locks live in
out/rig/locks/<addr>.lock and hold {pid, host, ts, owner}.

A lock whose owning pid is gone is considered stale and is taken over.
"""

from __future__ import annotations

import argparse
import errno
import json
import os
import socket
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))

import rigcommon as rc

LOCK_DIR = rc.RIG_OUT / "locks"


def _path(addr: int) -> Path:
    return LOCK_DIR / f"{addr:08x}.lock"


def _alive(pid: int) -> bool:
    if pid <= 0:
        return False
    try:
        os.kill(pid, 0)
    except OSError as e:
        return e.errno == errno.EPERM
    return True


def acquire(addr: int, owner: str = "") -> dict:
    LOCK_DIR.mkdir(parents=True, exist_ok=True)
    p = _path(addr)
    payload = {
        "addr": f"0x{addr:08x}",
        "pid": os.getpid(),
        "host": socket.gethostname(),
        "ts": time.time(),
        "owner": owner or f"pid{os.getpid()}",
    }
    for _ in range(2):
        try:
            fd = os.open(p, os.O_CREAT | os.O_EXCL | os.O_WRONLY, 0o644)
        except FileExistsError:
            try:
                held = json.loads(p.read_text())
            except (OSError, json.JSONDecodeError):
                held = {}
            if held.get("host") == socket.gethostname() and not _alive(int(held.get("pid", -1))):
                p.unlink(missing_ok=True)  # stale, retry once
                continue
            return {"ok": False, "acquired": False, "held_by": held}
        with os.fdopen(fd, "w") as f:
            json.dump(payload, f)
        return {"ok": True, "acquired": True, "lock": payload}
    return {"ok": False, "acquired": False, "error": "could not take stale lock"}


def release(addr: int) -> dict:
    p = _path(addr)
    if not p.exists():
        return {"ok": True, "released": False, "note": "no lock held"}
    p.unlink()
    return {"ok": True, "released": True}


def list_locks() -> dict:
    LOCK_DIR.mkdir(parents=True, exist_ok=True)
    out = []
    for p in sorted(LOCK_DIR.glob("*.lock")):
        try:
            out.append(json.loads(p.read_text()))
        except (OSError, json.JSONDecodeError):
            out.append({"addr": p.stem, "error": "unreadable"})
    return {"ok": True, "locks": out}


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("action", choices=["acquire", "release", "list"])
    ap.add_argument("target", nargs="?")
    ap.add_argument("--owner", default="")
    args = ap.parse_args()

    if args.action == "list":
        rc.json_out(list_locks())
        return 0
    if not args.target:
        rc.die("acquire/release need an address or symbol")
    t = rc.resolve(args.target)
    res = acquire(t.addr, args.owner) if args.action == "acquire" else release(t.addr)
    rc.json_out(res)
    return 0 if res.get("ok") else 1


if __name__ == "__main__":
    raise SystemExit(main())
