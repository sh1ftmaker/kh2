#!/usr/bin/env python3
"""README visuals, badges and status text, drawn from site/data/summary.json.

write_all(summary, roadmap) writes:
  site/badges/progress-light.svg, progress-dark.svg   the overview card in the README
  site/data/badge-code.json, badge-functions.json, badge-elf.json
  site/data/badge-structural.json                     only when structural progress is measured
  README.md, CLAUDE.md   the text between <!-- status:start --> and <!-- status:end -->, and
                         the badges and overview card between <!-- assets:start --> and
                         <!-- assets:end --> (a file or marker that is missing is skipped)

No build is needed: tools/site_data.py calls this after measuring, and
tools/readme_refresh.py (CI) calls it on the committed data.
"""

import json
import re
from html import escape
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
DATA = ROOT / "site/data"
BADGES = ROOT / "site/badges"
STATUS_FILES = ("README.md", "CLAUDE.md")
OUTPUTS = ["site/data", "site/badges", *STATUS_FILES]

HUE = {"green": "#3aae5c", "red": "#ef5b52", "blue": "#3d9cf0", "purple": "#c35ee6", "gold": "#d29a2e",
       "leaf": "#4aa75c", "crimson": "#c52607", "rose": "#a96087", "azure": "#508ae1", "teal": "#00a8a1",
       "violet": "#8c55b4", "cyan": "#269ac2", "olive": "#608c3d", "coral": "#d9773f", "slate": "#8a92b8"}
THEMES = {
    "light": {"bg": "#ffffff", "ink": "#1b1f3a", "ink2": "#4a4f73", "ink3": "#7b80a3", "track": "#e6e8f4", "line": "#d5d8ea"},
    "dark": {"bg": "#0b0d1a", "ink": "#eceefb", "ink2": "#b4b9d8", "ink3": "#7c82a8", "track": "#1c2142", "line": "#2a2f55"},
}


def pct(a, b):
    if not b:
        return "–"
    x = 100 * a / b
    if x == 0:
        return "0 %"
    if x >= 100:
        return "100 %"
    return f"{x:.2f} %" if x < 10 else f"{x:.1f} %"


def num(n):
    return f"{n:,}"


def kib(b):
    return f"{b / 1024:.0f} KiB" if b < 1048576 else f"{b / 1048576:.2f} MiB"


def card(summary, theme):
    """One SVG: the headline, then a bar per area of the game code, the SDK, and the size bins."""
    c, t = THEMES[theme], summary["totals"]
    game = next(r for r in summary["regions"] if r["id"] == "game")
    sdk = summary["libraries"]
    weighted = t.get("code_weighted")
    W, pad, row = 880, 24, 26
    left, barx, barw = pad, 230, 420
    rows = [(l["n"], HUE.get(l.get("hue"), HUE["gold"]), l) for l in game["libs"]]
    rows.append((sdk["n"], HUE["gold"], sdk))
    bins = summary["bins"]
    head = 118
    H = head + 34 + row * len(rows) + 46 + row * len(bins) + pad
    o = [f'<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 {W} {H}" width="{W}" height="{H}" role="img" '
         f'aria-label="Kingdom Hearts II Final Mix decompilation: {pct(t["code_matched"], t["code"])} of the code matched">',
         f'<rect width="{W}" height="{H}" rx="14" fill="{c["bg"]}" stroke="{c["line"]}"/>',
         '<g font-family="ui-sans-serif,system-ui,-apple-system,Segoe UI,sans-serif">']
    o.append(f'<text x="{pad}" y="38" font-size="13" font-weight="600" letter-spacing="1.6" fill="{c["ink3"]}">'
             f'KINGDOM HEARTS II FINAL MIX · PLAYSTATION 2 · SLPM_666.75</text>')
    big = pct(weighted, t["code"]) if weighted is not None else pct(t["code_matched"], t["code"])
    label = "structural progress" if weighted is not None else "of the code matched"
    o.append(f'<text x="{pad}" y="84" font-size="40" font-weight="700" fill="{c["ink"]}">{big}</text>')
    sub = (f'{label} · {num(t["code_matched"])} of {num(t["code"])} bytes matched · '
           f'{num(t["fns_matched"])} of {num(t["fns"])} functions')
    o.append(f'<text x="{pad + 190}" y="84" font-size="14" fill="{c["ink2"]}">{escape(sub)}</text>')
    full = W - 2 * pad
    o.append(f'<rect x="{pad}" y="98" width="{full}" height="10" rx="5" fill="{c["track"]}"/>')
    if weighted is not None:
        o.append(f'<rect x="{pad}" y="98" width="{full * weighted / t["code"]:.1f}" height="10" rx="5" fill="{HUE["gold"]}" opacity="0.4"/>')
    o.append(f'<rect x="{pad}" y="98" width="{max(4, full * t["code_matched"] / t["code"]):.1f}" height="10" rx="5" fill="{HUE["green"]}"/>')

    def section(y, title):
        o.append(f'<text x="{pad}" y="{y}" font-size="12" font-weight="600" letter-spacing="1.4" fill="{c["ink3"]}">{title}</text>')

    def bar_row(y, name, col, rec, a="cm", b="c", fa="fm", fb="f"):
        o.append(f'<rect x="{left}" y="{y - 9}" width="9" height="9" fill="{col}" transform="rotate(45 {left + 4.5} {y - 4.5})"/>')
        o.append(f'<text x="{left + 20}" y="{y}" font-size="13" fill="{c["ink"]}">{escape(name)}</text>')
        o.append(f'<rect x="{barx}" y="{y - 9}" width="{barw}" height="8" rx="4" fill="{c["track"]}"/>')
        if rec.get("wm") and rec["wm"] > rec[a]:
            o.append(f'<rect x="{barx}" y="{y - 9}" width="{barw * rec["wm"] / rec[b]:.1f}" height="8" rx="4" fill="{col}" opacity="0.4"/>')
        if rec[a]:
            o.append(f'<rect x="{barx}" y="{y - 9}" width="{max(3, barw * rec[a] / rec[b]):.1f}" height="8" rx="4" fill="{col}"/>')
        o.append(f'<text x="{barx + barw + 14}" y="{y}" font-size="13" font-weight="600" fill="{c["ink"]}">{pct(rec[a], rec[b])}</text>')
        o.append(f'<text x="{W - pad}" y="{y}" font-size="12" text-anchor="end" fill="{c["ink3"]}">'
                 f'{num(rec[fa])} / {num(rec[fb])} fn · {kib(rec[b])}</text>')

    y = head + 22
    section(y, "BY SOURCE DIRECTORY OF THE ORIGINAL TREE")
    y += 12
    for name, col, rec in rows:
        y += row
        bar_row(y, name, col, rec)
    y += 40
    section(y, "BY FUNCTION SIZE")
    y += 12
    for b in bins:
        y += row
        bar_row(y, b["label"], HUE["blue"], b)
    o.append("</g></svg>")
    return "\n".join(o) + "\n"


def badge(label, message, color):
    return {"schemaVersion": 1, "label": label, "message": message, "color": color, "labelColor": "161a34"}


def status_text(summary):
    t = summary["totals"]
    day = summary["generated"][:10]
    game = next(r for r in summary["regions"] if r["id"] == "game")
    sdk = summary["libraries"]
    s = (f"Status ({day}, written by `tools/site_data.py`): {num(t['fns_matched'])} of {num(t['fns'])} functions, "
         f"{num(t['code_matched'])} of {num(t['code'])} bytes of code matched ({pct(t['code_matched'], t['code'])})")
    if t.get("code_weighted") is not None:
        s += (f"; structural progress {pct(t['code_weighted'], t['code'])} ({num(t['code_weighted'])} bytes, matched code "
              f"plus partial credit for {num(t['fns_structural'] - t['fns_matched'])} structurally matched functions)")
    if t.get("fns_written") is not None:
        s += (f"; {num(t['fns_written'])} functions are written ({pct(t['code_written'], t['code'])} of the code), "
              f"{pct(t['code_weighted_all'], t['code'])} counting each by how closely it matches")
    s += ". By function size: " + ", ".join(f"{b['label']} {pct(b['cm'], b['c'])}" for b in summary["bins"]) + ". "
    s += (f"Game code {num(game['fm'])} / {num(game['f'])} functions ({pct(game['cm'], game['c'])} of its bytes; "
          + ", ".join(f"{l['n']} {pct(l['cm'], l['c'])}" for l in game["libs"]) + "); "
          f"{sdk['n']} {num(sdk['fm'])} / {num(sdk['f'])} functions ({pct(sdk['cm'], sdk['c'])}). ")
    s += (f"{num(t['files_complete'])} of {num(t['files'])} files in the file map have every function matched. "
          "The five overlays are not started. ")
    s += {True: "`make` ends in MATCHED!.", False: "`make` does NOT end in MATCHED!.",
          None: "The whole-ELF compare was not run for this snapshot."}[t.get("elf_ok")]
    return s


def write_status(summary):
    text, assets = status_text(summary), assets_markdown(summary)
    for name in STATUS_FILES:
        p = ROOT / name
        if not p.exists():
            continue
        src = p.read_text()
        new = fill(fill(src, "status", text), "assets", assets)
        if new != src:
            p.write_text(new)


SITE = "https://sh1ftmaker.github.io/kh2/"
REPO = "https://github.com/sh1ftmaker/kh2"


def assets_markdown(summary):
    """The README's generated block: badges that resolve from the published site, and the overview card."""
    t = summary["totals"]
    enc = SITE.replace(":", "%3A").replace("/", "%2F")
    def shield(alt, name):
        return (f'  <a href="{SITE}"><img alt="{alt}" src="https://img.shields.io/endpoint?url={enc}data%2F{name}.json'
                f'&style=flat-square"></a>')
    rows = []
    if t.get("code_weighted") is not None:
        rows.append(shield("Structural progress", "badge-structural"))
    rows += [shield("Matched code", "badge-code"), shield("Functions matched", "badge-functions"),
             shield("SLPM_666.75 rebuilt byte-identical", "badge-elf"),
             f'  <a href="{REPO}/actions/workflows/pages.yml"><img alt="Pages" src="https://img.shields.io/github/actions/'
             f'workflow/status/sh1ftmaker/kh2/pages.yml?branch=matching&style=flat-square&label=site"></a>']
    alt = (f"Progress overview: {pct(t['code_matched'], t['code'])} of the code matched, with a bar for each "
           "source directory of the original tree, the SDK, and each function-size band")
    return ('<p align="center">\n' + "\n".join(rows) + '\n</p>\n\n'
            f'<a href="{SITE}">\n<picture>\n'
            '  <source media="(prefers-color-scheme: dark)" srcset="site/badges/progress-dark.svg">\n'
            '  <source media="(prefers-color-scheme: light)" srcset="site/badges/progress-light.svg">\n'
            f'  <img src="site/badges/progress-light.svg" width="100%" alt="{alt}">\n'
            '</picture>\n</a>')


def fill(src, tag, text):
    pat = re.compile(rf"(<!-- {tag}:start -->)(.*?)(<!-- {tag}:end -->)", re.S)
    return pat.sub(lambda m: f"{m.group(1)}\n{text}\n{m.group(3)}", src) if pat.search(src) else src


def write_all(summary, roadmap=None):
    BADGES.mkdir(parents=True, exist_ok=True)
    DATA.mkdir(parents=True, exist_ok=True)
    t = summary["totals"]
    for theme in THEMES:
        (BADGES / f"progress-{theme}.svg").write_text(card(summary, theme))
    out = {
        "badge-code.json": badge("matched code", pct(t["code_matched"], t["code"]), "3aae5c"),
        "badge-functions.json": badge("functions", f"{num(t['fns_matched'])} / {num(t['fns'])}", "ef5b52"),
        "badge-elf.json": badge(summary.get("target", "ELF"),
                                {True: "byte-identical", False: "MISMATCH", None: "not verified"}[t.get("elf_ok")],
                                {True: "3d9cf0", False: "c52607", None: "7c82a8"}[t.get("elf_ok")]),
    }
    stale = DATA / "badge-structural.json"
    if t.get("code_weighted") is not None:
        out["badge-structural.json"] = badge("structural progress", pct(t["code_weighted"], t["code"]), "d29a2e")
    elif stale.exists():
        stale.unlink()
    for name, b in out.items():
        (DATA / name).write_text(json.dumps(b) + "\n")
    write_status(summary)


if __name__ == "__main__":
    write_all(json.loads((DATA / "summary.json").read_text()))
