#!/usr/bin/env python3
"""pages.py — generate the public status page (GitHub Pages) from repo state.

    python3 tools/rig/pages.py            # writes out/pages/index.html
    python3 tools/rig/pages.py --push     # + push to the gh-pages branch of fork

Data sources: layout status (functions/bytes %), docs/rig/BENCH.md (prompt-
evolution history), out/rig/rounds/*/ (campaign rounds), out/rig/arena/*/
results.tsv (model arena). Everything is optional — missing sources render as
"no data yet".
"""
from __future__ import annotations

import argparse
import html
import json
import subprocess
import sys
import tempfile
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rigcommon as rc  # noqa: E402

OUT = rc.RIG_OUT / "pages"
REMOTE = "https://github.com/sh1ftmaker/kh2.git"

BINS = [("&lt;80 B", 0, 79), ("80–199 B", 80, 199), ("200–999 B", 200, 999), ("≥1 KB", 1000, 1 << 30)]


def esc(s) -> str:
    return html.escape(str(s))


def progress():
    st = rc.layout_status()
    rows = list(rc.layout())
    done_f = done_b = tot_b = 0
    per = {lab: [0, 0, 0, 0] for lab, *_ in BINS}
    for row in rows:
        mode, _ = st.get(row.addr, ("asm", ""))
        tot_b += row.size
        for lab, lo, hi in BINS:
            if lo <= row.size <= hi:
                per[lab][1] += 1
                per[lab][3] += row.size
                if mode == "cxx":
                    per[lab][0] += 1
                    per[lab][2] += row.size
        if mode == "cxx":
            done_f += 1
            done_b += row.size
    return {"fns": done_f, "fns_total": len(rows), "bytes": done_b, "bytes_total": tot_b, "bins": per}


def bench_rows():
    p = rc.ROOT / "docs" / "rig" / "BENCH.md"
    out = []
    if p.exists():
        for line in p.read_text().splitlines():
            if line.startswith("|") and "prompt sha" not in line and "---" not in line:
                cells = [c.strip() for c in line.strip("|").split("|")]
                if len(cells) >= 6:
                    out.append(cells)
    return out


def campaign_rows():
    out = []
    for d in sorted((rc.RIG_OUT / "rounds").glob("c*-r*")):
        matched = parked = 0
        for sp in d.glob("*/summary.json"):
            s = json.loads(sp.read_text())
            matched += s.get("result") == "matched"
            parked += s.get("result") != "matched"
        if matched or parked:
            out.append((d.name, matched, parked))
    return out


def arena_rows():
    out = {}
    for d in sorted((rc.RIG_OUT / "arena").glob("*/results.tsv")):
        rows = []
        for ln in d.read_text().splitlines()[1:]:
            p = ln.split("\t")
            if len(p) >= 7:
                rows.append(p)
        out[d.parent.name] = rows
    return out


def bar(pct: float) -> str:
    return (f'<div class="bar"><div class="fill" style="width:{min(pct,100):.2f}%"></div>'
            f'<span>{pct:.2f} %</span></div>')


def build() -> str:
    pr = progress()
    fpct = 100.0 * pr["fns"] / pr["fns_total"]
    bpct = 100.0 * pr["bytes"] / pr["bytes_total"]
    sha = subprocess.run(["git", "rev-parse", "--short", "HEAD"], cwd=rc.ROOT,
                         capture_output=True, text=True).stdout.strip()
    when = time.strftime("%Y-%m-%d %H:%M UTC", time.gmtime())

    bins_html = "".join(
        f"<tr><td>{lab}</td><td>{v[0]:,}/{v[1]:,}</td><td>{v[2]:,}/{v[3]:,}</td>"
        f"<td>{bar(100.0 * v[2] / v[3] if v[3] else 0)}</td></tr>"
        for lab, v in pr["bins"].items())

    bench_html = "".join(
        f"<tr><td>{esc(r[0])}</td><td><code>{esc(r[1])}</code></td><td>{esc(r[2])}</td>"
        f"<td><b>{esc(r[3].strip('*'))}</b></td><td>{esc(r[4])}</td></tr>"
        for r in bench_rows()) or '<tr><td colspan="5">no data yet</td></tr>'

    camp_html = "".join(
        f"<tr><td>{esc(n)}</td><td>{m}</td><td>{p}</td></tr>"
        for n, m, p in campaign_rows()) or '<tr><td colspan="3">no data yet</td></tr>'

    arena = arena_rows()
    targets_p = rc.RIG_OUT / "arena" / "targets.tsv"
    n_targets = max(0, len(targets_p.read_text().splitlines()) - 1) if targets_p.exists() else 0
    arena_html = ""
    for model, rows in arena.items():
        exact = sum(1 for r in rows if r[3] in ("1", "True", "true"))
        fz = sorted(float(r[4] or 0) for r in rows)
        med = fz[len(fz) // 2] if fz else 0
        arena_html += (f"<tr><td><b>{esc(model)}</b></td><td>{exact}/{len(rows)}</td>"
                       f"<td>{med:.1f} %</td><td>{sum(int(float(r[5] or 0)) for r in rows)}</td></tr>")
    if not arena_html:
        arena_html = f'<tr><td colspan="4">arena running on {n_targets} shared targets — results land here</td></tr>'

    return f"""<!doctype html><html lang="en"><head><meta charset="utf-8">
<meta name="viewport" content="width=device-width,initial-scale=1">
<title>KH2FM Decompilation Status</title>
<style>
:root {{ --bg:#0f1115; --card:#181b22; --text:#d7dae0; --dim:#8b93a1; --acc:#7aa2f7; --good:#9ece6a; }}
@media (prefers-color-scheme: light) {{ :root {{ --bg:#f5f6f8; --card:#ffffff; --text:#1a1d23; --dim:#5b6472; --acc:#2b5fd9; --good:#3f8f29; }} }}
* {{ box-sizing:border-box; margin:0 }}
body {{ background:var(--bg); color:var(--text); font:15px/1.55 ui-sans-serif,system-ui,sans-serif; padding:2rem 1rem; }}
main {{ max-width:900px; margin:0 auto; display:grid; gap:1.2rem }}
h1 {{ font-size:1.5rem }} h2 {{ font-size:1.05rem; margin-bottom:.6rem; color:var(--acc) }}
.card {{ background:var(--card); border-radius:10px; padding:1.1rem 1.3rem; overflow-x:auto }}
.head {{ display:flex; justify-content:space-between; flex-wrap:wrap; gap:.5rem; align-items:baseline }}
.dim {{ color:var(--dim); font-size:.85rem }}
.big {{ font-size:2.1rem; font-weight:700; font-variant-numeric:tabular-nums }}
table {{ border-collapse:collapse; width:100%; font-variant-numeric:tabular-nums }}
td,th {{ text-align:left; padding:.35rem .7rem .35rem 0; border-bottom:1px solid color-mix(in srgb,var(--dim) 25%,transparent); font-size:.9rem }}
th {{ color:var(--dim); font-weight:600; font-size:.78rem; text-transform:uppercase; letter-spacing:.04em }}
.bar {{ position:relative; background:color-mix(in srgb,var(--dim) 20%,transparent); border-radius:4px; height:1.1rem; min-width:140px }}
.fill {{ background:var(--good); height:100%; border-radius:4px }}
.bar span {{ position:absolute; inset:0; font-size:.75rem; display:flex; align-items:center; padding-left:.4rem }}
code {{ font-size:.85em }}
</style></head><body><main>
<div class="head"><h1>KH2FM Decompilation</h1>
<span class="dim">sh1ftmaker/kh2 · {sha} · generated {when}</span></div>

<div class="card"><h2>Progress</h2>
<div style="display:flex;gap:3rem;flex-wrap:wrap">
<div><div class="big">{bpct:.2f} %</div><div class="dim">by bytes (honest headline) — {pr['bytes']:,} / {pr['bytes_total']:,}</div></div>
<div><div class="big">{fpct:.1f} %</div><div class="dim">by functions — {pr['fns']:,} / {pr['fns_total']:,}</div></div>
</div>
<table style="margin-top:1rem"><thead><tr><th>size bin</th><th>functions</th><th>bytes</th><th>bytes done</th></tr></thead>
<tbody>{bins_html}</tbody></table></div>

<div class="card"><h2>Model arena — {n_targets} shared targets, byte-exact scoring</h2>
<table><thead><tr><th>model</th><th>exact</th><th>median best-match</th><th>total attempts</th></tr></thead>
<tbody>{arena_html}</tbody></table>
<p class="dim" style="margin-top:.5rem">Same functions, same playbook, same 8-attempt budget, scored by the mini-link
byte-exact verifier. Qwen3.8-27B runs the 24/7 campaign below; anchors carry its scores in
<code>out/rig/arena/targets.tsv</code>.</p></div>

<div class="card"><h2>Held-out bench — prompt evolution history (gate: never regress)</h2>
<table><thead><tr><th>when</th><th>prompt</th><th>change</th><th>re-match rate</th><th>by bin</th></tr></thead>
<tbody>{bench_html}</tbody></table></div>

<div class="card"><h2>Qwen campaign rounds (24 workers on the DGX Spark)</h2>
<table><thead><tr><th>round</th><th>matched</th><th>parked</th></tr></thead>
<tbody>{camp_html}</tbody></table></div>

<p class="dim">An independent continuation of the KH2FM matching decompilation. Byte-exact only:
a function counts when its compiled bytes equal the original SLPM_666.75 ELF.</p>
</main></body></html>"""


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--push", action="store_true")
    args = ap.parse_args()
    OUT.mkdir(parents=True, exist_ok=True)
    (OUT / "index.html").write_text(build())
    print(f"wrote {OUT / 'index.html'}")
    if args.push:
        with tempfile.TemporaryDirectory() as td:
            subprocess.run(["git", "init", "-q", "-b", "gh-pages"], cwd=td, check=True)
            (Path(td) / "index.html").write_text((OUT / "index.html").read_text())
            (Path(td) / ".nojekyll").write_text("")
            subprocess.run(["git", "add", "-A"], cwd=td, check=True)
            subprocess.run(["git", "-c", "user.name=sh1ftmaker",
                            "-c", "user.email=shiftmaker@gmail.com",
                            "commit", "-q", "-m", "pages: status update"], cwd=td, check=True)
            subprocess.run(["git", "push", "-q", "--force", REMOTE, "gh-pages"], cwd=td, check=True)
            print("pushed gh-pages")
    return 0


if __name__ == "__main__":
    sys.exit(main())
