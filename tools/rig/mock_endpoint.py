#!/usr/bin/env python3
"""mock_endpoint.py — a tiny OpenAI-compatible server that replays a scripted
tool-call sequence, so driver.py can be exercised without a live model.

  python3 tools/rig/mock_endpoint.py --port 8765 --script script.json

The script is a list of assistant turns; each turn is either
  {"tool": "<name>", "args": {...}}   -> emitted as one tool_call
  {"content": "..."}                  -> emitted as plain text
Turns are consumed in order, per conversation (keyed by the first user message).
When the script runs out the server parks.
"""

from __future__ import annotations

import argparse
import json
import threading
from http.server import BaseHTTPRequestHandler, HTTPServer

SCRIPT: list = []
STATE: dict = {}
LOCK = threading.Lock()


class Handler(BaseHTTPRequestHandler):
    def log_message(self, *a):  # quiet
        pass

    def do_GET(self):
        self._json({"data": [{"id": "mock-model", "object": "model"}]})

    def do_POST(self):
        n = int(self.headers.get("Content-Length", 0))
        req = json.loads(self.rfile.read(n) or b"{}")
        key = ""
        for m in req.get("messages", []):
            if m.get("role") == "user":
                key = m.get("content", "")[:80]
                break
        with LOCK:
            i = STATE.get(key, 0)
            STATE[key] = i + 1
        turn = SCRIPT[i] if i < len(SCRIPT) else {
            "tool": "park",
            "args": {"reason": "mock script exhausted", "hypothesis": "n/a"},
        }
        if "tool" in turn:
            msg = {
                "role": "assistant",
                "content": turn.get("content", ""),
                "tool_calls": [{
                    "id": f"call_{i}",
                    "type": "function",
                    "function": {"name": turn["tool"],
                                 "arguments": json.dumps(turn.get("args", {}))},
                }],
            }
        else:
            msg = {"role": "assistant", "content": turn.get("content", "")}
        self._json({
            "id": "mock",
            "object": "chat.completion",
            "choices": [{"index": 0, "message": msg, "finish_reason": "tool_calls"}],
            "usage": {"prompt_tokens": 100, "completion_tokens": 50, "total_tokens": 150},
        })

    def _json(self, obj):
        body = json.dumps(obj).encode()
        self.send_response(200)
        self.send_header("Content-Type", "application/json")
        self.send_header("Content-Length", str(len(body)))
        self.end_headers()
        self.wfile.write(body)


def main() -> int:
    global SCRIPT
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--port", type=int, default=8765)
    ap.add_argument("--script", required=True)
    args = ap.parse_args()
    SCRIPT = json.loads(open(args.script).read())
    HTTPServer(("127.0.0.1", args.port), Handler).serve_forever()
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
