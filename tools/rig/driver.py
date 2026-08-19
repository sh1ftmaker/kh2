#!/usr/bin/env python3
"""driver.py — run the matching loop against an OpenAI-compatible endpoint.

  python3 tools/rig/driver.py --endpoint http://spark-e3f4.local:8000/v1 \\
      --model qwen3.8-27b --pick --min-size 80 --max-size 200 --count 6 \\
      --parallel 3 --max-attempts 20

One independent conversation per function; the model only ever writes its own
numbered candidate files. Everything is logged under
out/rig/runs/<ts>/<addr>/ as transcript.jsonl + attempt_NNN.cpp + summary.json.

Stop conditions per function:
  * promote succeeded
  * attempts exhausted
  * 4 consecutive attempts with no improvement in fuzzy_pct  -> park
  * 3 consecutive compile failures                           -> park
"""

from __future__ import annotations

import argparse
import json
import re
import sys
import threading
import time
import urllib.error
import urllib.request
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
from typing import Dict, List, Optional

sys.path.insert(0, str(Path(__file__).resolve().parent))

import rigcommon as rc
import lock as locklib
import park as parklib
from compile_diff import compile_diff
from get_context import get_context
from list_candidates import list_candidates
from promote import promote

PROMPT_PATH = rc.ROOT / "docs" / "rig" / "AGENT_PROMPT.md"

TOOLS = [
    {
        "type": "function",
        "function": {
            "name": "get_context",
            "description": "Everything known about the target function: disassembly, "
                           "Ghidra output, m2c draft, callee prototypes, class layouts, "
                           "nearest matched source, candidate skeleton.",
            "parameters": {"type": "object", "properties": {}, "required": []},
        },
    },
    {
        "type": "function",
        "function": {
            "name": "compile_diff",
            "description": "Write a candidate C++ file and score it: compile with the "
                           "repo flags, link at the real address, byte-compare against "
                           "the original, and return an instruction-level diff.",
            "parameters": {
                "type": "object",
                "properties": {
                    "source": {
                        "type": "string",
                        "description": "The complete contents of the candidate .cpp file.",
                    },
                    "hypothesis": {
                        "type": "string",
                        "description": "The one thing this attempt changes and why.",
                    },
                },
                "required": ["source"],
            },
        },
    },
    {
        "type": "function",
        "function": {
            "name": "promote",
            "description": "Land the last byte-exact candidate in the repo and run the "
                           "full build. Only call this when compile_diff said exact.",
            "parameters": {
                "type": "object",
                "properties": {
                    "dest": {
                        "type": "string",
                        "description": "Destination translation unit, e.g. src/tozawa/select.cpp",
                    }
                },
                "required": ["dest"],
            },
        },
    },
    {
        "type": "function",
        "function": {
            "name": "permute",
            "description": "When the diff shows the right instructions in the wrong order "
                           "(stores/loads to different globals or members), try every "
                           "ordering of the statements on lines first..last (1-based, at most "
                           "7 statements) of your last attempt. Returns exact=true with the "
                           "winning file when an ordering matches; then compile_diff that file's "
                           "contents and promote. Costs ~80 ms per ordering.",
            "parameters": {
                "type": "object",
                "properties": {
                    "attempt": {"type": "integer", "description": "attempt number to permute (default: last)"},
                    "first_line": {"type": "integer"},
                    "last_line": {"type": "integer"},
                },
                "required": ["first_line", "last_line"],
            },
        },
    },
    {
        "type": "function",
        "function": {
            "name": "park",
            "description": "Give up on this function, honestly, and record why.",
            "parameters": {
                "type": "object",
                "properties": {
                    "reason": {"type": "string"},
                    "hypothesis": {"type": "string"},
                },
                "required": ["reason"],
            },
        },
    },
]


# ---------------------------------------------------------------- endpoint


class Endpoint:
    def __init__(self, base: str, model: str, timeout: float = 1800.0,
                 temperature: float = 0.2, max_tokens: int = 12288,
                 think: bool = True):
        self.url = base.rstrip("/") + "/chat/completions"
        self.model = model
        self.timeout = timeout
        self.temperature = temperature
        self.max_tokens = max_tokens
        self.think = think

    def chat(self, messages: List[dict], tools: List[dict]) -> dict:
        payload = {
            "model": self.model,
            "messages": messages,
            "temperature": self.temperature,
            "max_tokens": self.max_tokens,
        }
        if tools:
            payload["tools"] = tools
            payload["tool_choice"] = "auto"
        if not self.think:
            # vLLM / Qwen3 chat template switch; ignored by servers that do not know it
            payload["chat_template_kwargs"] = {"enable_thinking": False}
        req = urllib.request.Request(
            self.url,
            data=json.dumps(payload).encode(),
            headers={"Content-Type": "application/json"},
            method="POST",
        )
        with urllib.request.urlopen(req, timeout=self.timeout) as r:
            return json.loads(r.read().decode())


# ---------------------------------------------------------------- one function


def suggest_dest(ctx: dict) -> str:
    existing = ctx.get("existing_class_header") or {}
    if existing.get("tu"):
        return existing["tu"]
    decl = ctx.get("decl_file") or ""
    if decl:
        stem = Path(decl.replace("\\", "/")).stem
        for p in sorted((rc.ROOT / "src").rglob(f"{stem}.cpp")):
            return p.relative_to(rc.ROOT).as_posix()
        # mirror the original directory when we can recognise it
        parts = decl.replace("\\", "/").split("/")
        if len(parts) >= 2:
            d = rc.ROOT / "src" / parts[-2]
            if d.is_dir():
                return f"src/{parts[-2]}/{stem}.cpp"
    return "src/anon/rig_matches.cpp"


def strip_fences(text: str) -> str:
    m = re.search(r"```(?:cpp|c\+\+|c)?\n(.*?)```", text, re.S)
    return m.group(1) if m else text


class FunctionRun:
    def __init__(self, ep: Endpoint, addr: str, log_dir: Path, max_attempts: int,
                 system_prompt: str, dry_promote: bool = False, brief: bool = False,
                 bench: bool = False):
        self.ep = ep
        self.bench = bench
        self.addr = addr
        self.dir = log_dir
        self.dir.mkdir(parents=True, exist_ok=True)
        self.max_attempts = max_attempts
        self.system_prompt = system_prompt
        self.dry_promote = dry_promote
        self.brief = brief
        self.transcript = self.dir / "transcript.jsonl"
        self.attempts = 0
        self.best = 0.0
        self.no_improve = 0
        self.compile_fails = 0
        self.last_exact_src: Optional[Path] = None
        self.tokens = {"prompt": 0, "completion": 0}
        self.result = "unfinished"
        self.ctx: dict = {}
        self.park_reason = ""
        self.length_cutoffs = 0

    def log(self, kind: str, data) -> None:
        with self.transcript.open("a") as f:
            f.write(json.dumps({"ts": time.time(), "kind": kind, "data": data}) + "\n")

    # -- tool implementations -------------------------------------------------

    def t_get_context(self, _args: dict) -> dict:
        if not self.ctx:
            self.ctx = get_context(self.addr, brief=self.brief)
        c = dict(self.ctx)
        c.pop("files", None)
        return c

    def t_compile_diff(self, args: dict) -> dict:
        src = strip_fences(args.get("source") or "")
        if not src.strip():
            return {"ok": False, "error": "source was empty"}
        self.attempts += 1
        path = self.dir / f"attempt_{self.attempts:03d}.cpp"
        path.write_text(src)
        res = compile_diff(self.addr, path)
        res["attempt"] = self.attempts
        res["hypothesis"] = args.get("hypothesis", "")
        self.log("attempt", {"n": self.attempts, "file": path.name,
                             "hypothesis": res["hypothesis"],
                             "exact": res.get("exact"), "fuzzy": res.get("fuzzy_pct"),
                             "compile_errors": (res.get("compile_errors") or [])[:6],
                             "link_errors": (res.get("link_errors") or [])[:4],
                             "diff_classes": (res.get("diff_classes") or {}).get("counts")})
        if res.get("compile_errors") or res.get("link_errors"):
            self.compile_fails += 1
        else:
            self.compile_fails = 0
        if res.get("exact"):
            self.last_exact_src = path
            self.best = 100.0
            self.no_improve = 0
        else:
            f = float(res.get("fuzzy_pct") or 0.0)
            if f > self.best + 1e-9:
                self.best = f
                self.no_improve = 0
            else:
                self.no_improve += 1
        res["attempts_left"] = self.max_attempts - self.attempts
        res["best_fuzzy_so_far"] = self.best
        return res

    def t_promote(self, args: dict) -> dict:
        if self.last_exact_src is None:
            return {"ok": False, "error": "no byte-exact candidate yet; "
                                          "compile_diff must return exact first"}
        if self.bench:
            self.result = "matched"
            self.log("bench_exact", {"attempt": self.attempts})
            return {"ok": True, "promoted": False, "bench": True,
                    "note": "bench mode: byte-exact result recorded; nothing is written to the repo. You are done."}
        dest = args.get("dest") or suggest_dest(self.ctx)
        res = promote(self.addr, self.last_exact_src, dest, dry_run=self.dry_promote)
        self.log("promote", res)
        if res.get("ok"):
            self.result = "matched"
        return res

    def t_permute(self, args: dict) -> dict:
        from permute import permute as _permute
        n = int(args.get("attempt") or self.attempts)
        path = self.dir / f"attempt_{n:03d}.cpp"
        if not path.exists():
            return {"ok": False, "error": f"no attempt_{n:03d}.cpp yet -- compile_diff a candidate first"}
        try:
            res = _permute(self.addr, path, int(args["first_line"]), int(args["last_line"]))
        except (KeyError, ValueError) as e:
            return {"ok": False, "error": f"bad arguments: {e}"}
        self.log("permute", {"attempt": n, "first": args.get("first_line"), "last": args.get("last_line"),
                             "exact": res.get("exact"), "tried": res.get("tried"), "best": res.get("best_fuzzy")})
        if res.get("ok") and res.get("file"):
            res["source"] = Path(res["file"]).read_text()
            res["note"] = (res.get("note") or "") + " The winning file's full text is in `source`: " \
                          "call compile_diff with it unchanged as your next attempt."
        return res

    def t_park(self, args: dict) -> dict:
        self.park_reason = args.get("reason", "model parked without a reason")
        res = parklib.park(self.addr, self.park_reason, self.best,
                           args.get("hypothesis", ""), self.attempts)
        self.result = "parked"
        return res

    # -- loop -----------------------------------------------------------------

    def run(self) -> dict:
        t0 = time.time()
        target = rc.resolve(self.addr)
        user = (
            f"Match the function at 0x{target.addr:08x} "
            f"(layout row size {target.size} bytes, symbol to define: {target.symbol}).\n"
            "Start by calling get_context. Then iterate with compile_diff until exact, "
            "then promote. Park if you get stuck."
        )
        messages = [
            {"role": "system", "content": self.system_prompt},
            {"role": "user", "content": user},
        ]
        self.log("start", {"addr": self.addr, "size": target.size,
                           "symbol": target.symbol, "model": self.ep.model})

        handlers = {
            "get_context": self.t_get_context,
            "compile_diff": self.t_compile_diff,
            "promote": self.t_promote,
            "permute": self.t_permute,
            "park": self.t_park,
        }

        while True:
            if self.attempts >= self.max_attempts and self.result == "unfinished":
                self.t_park({"reason": f"attempt budget ({self.max_attempts}) exhausted",
                             "hypothesis": "ran out of attempts"})
                break
            if self.no_improve >= 4 and self.result == "unfinished":
                self.t_park({"reason": "4 consecutive attempts without improving fuzzy_pct",
                             "hypothesis": "stuck on the same codegen difference"})
                break
            if self.compile_fails >= 3 and self.result == "unfinished":
                self.t_park({"reason": "3 consecutive candidates failed to compile or link",
                             "hypothesis": "model cannot produce a compiling candidate"})
                break
            if self.result != "unfinished":
                break

            try:
                resp = self.ep.chat(messages, TOOLS)
            except (urllib.error.URLError, TimeoutError, OSError) as e:
                self.result = "endpoint_error"
                self.log("error", str(e))
                break
            usage = resp.get("usage") or {}
            self.tokens["prompt"] += int(usage.get("prompt_tokens") or 0)
            self.tokens["completion"] += int(usage.get("completion_tokens") or 0)
            choices = resp.get("choices") or []
            if not choices:
                self.result = "endpoint_error"
                self.log("error", resp)
                break
            msg = choices[0].get("message") or {}
            finish = choices[0].get("finish_reason")
            reasoning = msg.get("reasoning_content") or msg.get("reasoning") or ""
            messages.append({k: v for k, v in msg.items()
                             if k in ("role", "content", "tool_calls")})
            self.log("assistant", {"content": (msg.get("content") or "")[:4000],
                                   "reasoning_chars": len(reasoning),
                                   "reasoning_tail": reasoning[-600:],
                                   "finish_reason": finish,
                                   "completion_tokens": usage.get("completion_tokens"),
                                   "tool_calls": [tc.get("function", {}).get("name")
                                                  for tc in (msg.get("tool_calls") or [])]})

            calls = msg.get("tool_calls") or []
            if finish == "length" and not calls:
                # the model spent the whole budget thinking; ask for the action directly
                self.length_cutoffs += 1
                messages.append({
                    "role": "user",
                    "content": "Your reply was cut off by the token limit before you "
                               "called a tool. Do not re-derive everything: state the one "
                               "hypothesis in two sentences and call compile_diff with the "
                               "full candidate file now (or promote/park).",
                })
                if self.length_cutoffs >= 3:
                    self.t_park({"reason": "3 replies cut off by max_tokens without a tool call",
                                 "hypothesis": "model reasoning exceeds the token budget"})
                    break
                continue
            if not calls:
                # no tool call: nudge once, then treat as a dead conversation
                messages.append({
                    "role": "user",
                    "content": "Call a tool. Either compile_diff with a full candidate "
                               "file, promote if the last attempt was exact, or park.",
                })
                if len([m for m in messages if m.get("role") == "user"]) > 4:
                    self.t_park({"reason": "model stopped calling tools",
                                 "hypothesis": "conversation stalled"})
                    break
                continue

            for tc in calls:
                fn = (tc.get("function") or {}).get("name", "")
                raw = (tc.get("function") or {}).get("arguments") or "{}"
                try:
                    fargs = json.loads(raw) if isinstance(raw, str) else raw
                except json.JSONDecodeError:
                    fargs = {}
                handler = handlers.get(fn)
                out = handler(fargs) if handler else {"ok": False, "error": f"no tool {fn}"}
                messages.append({
                    "role": "tool",
                    "tool_call_id": tc.get("id", ""),
                    "content": json.dumps(out)[:60000],
                })
                if self.result != "unfinished":
                    break

        import hashlib
        summary = {
            "prompt_sha": hashlib.sha256(self.system_prompt.encode()).hexdigest()[:12],
            "bench": self.bench,
            "addr": self.addr,
            "symbol": target.symbol,
            "size": target.size,
            "result": self.result,
            "attempts": self.attempts,
            "best_fuzzy": self.best,
            "exact": self.result == "matched",
            "park_reason": self.park_reason,
            "tokens": self.tokens,
            "wall_s": round(time.time() - t0, 1),
            "model": self.ep.model,
        }
        (self.dir / "summary.json").write_text(json.dumps(summary, indent=1) + "\n")
        self.log("summary", summary)
        return summary


# ---------------------------------------------------------------- fan-out

_promote_lock = threading.Lock()


def run_one(ep: Endpoint, addr: str, run_dir: Path, max_attempts: int,
            system_prompt: str, bench: bool = False) -> dict:
    got = locklib.acquire(rc.resolve(addr).addr, owner="driver")
    if not got.get("acquired"):
        return {"addr": addr, "result": "locked", "attempts": 0, "best_fuzzy": 0.0,
                "exact": False, "tokens": {"prompt": 0, "completion": 0}, "wall_s": 0.0}
    try:
        fr = FunctionRun(ep, addr, run_dir / addr.replace("0x", ""), max_attempts,
                         system_prompt, bench=bench)
        # promote touches shared repo files and runs make: serialise it
        orig = fr.t_promote

        def serialised(args):
            with _promote_lock:
                return orig(args)

        fr.t_promote = serialised  # type: ignore[method-assign]
        return fr.run()
    finally:
        locklib.release(rc.resolve(addr).addr)


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--endpoint", default="http://spark-e3f4.local:8000/v1")
    ap.add_argument("--model", default="qwen3.8-27b")
    ap.add_argument("--addr", action="append", default=[],
                    help="explicit target (repeatable)")
    ap.add_argument("--pick", action="store_true", help="pick targets with list_candidates")
    ap.add_argument("--queue", help="take targets top-down from a scheduler.py queue.tsv "
                                    "(skips locked / parked / already-matched rows)")
    ap.add_argument("--min-size", type=int, default=80)
    ap.add_argument("--max-size", type=int, default=500)
    ap.add_argument("--namespace")
    ap.add_argument("--count", type=int, default=6)
    ap.add_argument("--max-attempts", type=int, default=25)
    ap.add_argument("--parallel", type=int, default=1)
    ap.add_argument("--log-dir")
    ap.add_argument("--temperature", type=float, default=0.2)
    ap.add_argument("--bench", action="store_true",
                    help="held-out bench: targets may already be matched; exact is recorded, "
                         "nothing is promoted")
    ap.add_argument("--prompt", help="system prompt file (default docs/rig/AGENT_PROMPT.md)")
    ap.add_argument("--no-catalogue", action="store_true",
                    help="do not append docs/codegen-3.2.md to the system prompt")
    ap.add_argument("--no-think", action="store_true",
                    help="send chat_template_kwargs.enable_thinking=false (Qwen3 on vLLM)")
    ap.add_argument("--max-tokens", type=int, default=12288)
    args = ap.parse_args()

    targets = list(args.addr)
    if args.queue:
        held = set()
        for lk in locklib.list_locks().get("locks", []):
            try:
                if locklib._alive(int(lk.get("pid") or 0)):
                    held.add(int(str(lk.get("addr")), 16))
            except (TypeError, ValueError):
                pass
        status = rc.layout_status()
        from list_candidates import parked_addrs
        parked = parked_addrs()
        with open(args.queue) as qf:
            for line in qf:
                parts = line.rstrip("\n").split("\t")
                if not parts or parts[0] == "addr" or not parts[0].startswith("0x"):
                    continue
                a = int(parts[0], 16)
                # the scheduler already applied the park rules (a parked row is
                # listed only when a twin matched since) -- the queue is authoritative
                if a in held:
                    continue
                if not args.bench and status.get(a, ("asm", ""))[0] != "asm":
                    continue
                targets.append(parts[0])
                if len(targets) >= args.count:
                    break
    if args.pick or (not targets and not args.queue):
        # skip rows another live driver holds (locks of dead pids are ignored)
        held = set()
        for lk in locklib.list_locks().get("locks", []):
            try:
                if locklib._alive(int(lk.get("pid") or 0)):
                    held.add(int(str(lk.get("addr")), 16))
            except (TypeError, ValueError):
                pass
        for c in list_candidates(min_size=args.min_size, max_size=args.max_size,
                                 named_only=True, namespace=args.namespace,
                                 exclude_vu0=True, limit=args.count + len(held),
                                 sort="confidence"):
            if int(c["addr"], 16) in held:
                continue
            targets.append(c["addr"])
            if len(targets) >= args.count:
                break
    if not targets:
        rc.die("no targets")

    run_dir = Path(args.log_dir) if args.log_dir else (
        rc.RIG_OUT / "runs" / time.strftime("%Y%m%d-%H%M%S")
    )
    run_dir.mkdir(parents=True, exist_ok=True)
    system_prompt = (Path(args.prompt) if args.prompt else PROMPT_PATH).read_text()
    catalogue = rc.ROOT / "docs" / "codegen-3.2.md"
    if catalogue.exists() and not args.no_catalogue:
        system_prompt += ("\n\n---\n# Idiom catalogue (docs/codegen-3.2.md) -- confirmed ee-gcc 3.2 "
                          "codegen facts; check your diff against these before guessing\n\n"
                          + catalogue.read_text())
    ep = Endpoint(args.endpoint, args.model, temperature=args.temperature,
                  max_tokens=args.max_tokens, think=not args.no_think)

    t0 = time.time()
    if args.parallel > 1:
        with ThreadPoolExecutor(max_workers=args.parallel) as pool:
            results = list(pool.map(
                lambda a: run_one(ep, a, run_dir, args.max_attempts, system_prompt, args.bench),
                targets))
    else:
        results = [run_one(ep, a, run_dir, args.max_attempts, system_prompt, args.bench)
                   for a in targets]

    out = {
        "ok": True,
        "run_dir": str(run_dir),
        "model": args.model,
        "endpoint": args.endpoint,
        "wall_s": round(time.time() - t0, 1),
        "matched": sum(1 for r in results if r.get("exact")),
        "results": results,
    }
    (run_dir / "summary.json").write_text(json.dumps(out, indent=1) + "\n")
    rc.json_out(out)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
