#!/usr/bin/env python3
"""Write the progress website's data (site/data/) from the build state.

Inputs (all local; CI can't build the game, so this runs before each commit):
  out/generated/layout_status.tsv  per-function mode (cxx = matched from source), written
                                   by `tools/build_elf.py objects` (read through
                                   tools/progress_bytes.py, the same numbers `make` users see)
  layout.tsv                       every function of the main ELF with its size
  functions.tsv                    the symbol registry (names)
  data/tu_map.tsv                  the file map: each function's original source file,
                                   reconstructed from the E3 2014 debug build, with a confidence
  data/sdk_ranges.tsv              address ranges of Sony SDK, libc and crt0 code
  data/overlays.tsv                the five code overlays in OVL.IMG (image sizes; not built yet)
  docs/roadmap.yml                 phases and milestones (hand-maintained statuses)
  `make`                           must end in MATCHED! (the whole-ELF byte compare)

Every function of SLPM_666.75 is placed in region -> area/library -> file, so the
totals are the whole main ELF.

Outputs:
  site/data/summary.json       totals, size bins, source directories, overlays, regions
  site/data/lib/<id>.json      functions per file of one area (loaded on demand)
  site/data/history.json       one entry per commit (appended or replaced)
  site/data/roadmap.json       docs/roadmap.yml with each milestone's live progress
  site/data/badge-*.json       shields.io endpoint badges for the README
  site/badges/*.svg            README visuals (tools/readme_assets.py)
  README.md, CLAUDE.md         the text between <!-- status:start --> and <!-- status:end -->

The whole ELF is built from source and byte-identical. tools/quality.py says what each
function is made of; "matched" here means decompiled to C/C++ (plain, or with vector-unit
assembly the original also needed). `fns_built`/`code_built` count everything built from source,
including functions that still use other assembly, register pins or .s files.
`fns_named`/`code_named` count functions with a real name in functions.tsv.

Only names, addresses, sizes and match flags are written: never bytes, asm or
data contents of the game.

Usage: python3 tools/site_data.py [--subject "<commit subject>"] [--stage] [--no-verify]

--stage runs `git add` on everything above, so a merge commit carries the site
data, the README visuals and the status text together.
"""

import argparse
import bisect
import csv
import datetime
import hashlib
import json
import os
import re
import subprocess
import sys
from collections import Counter, defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import progress_bytes  # noqa: E402  (load(), BINS: the one definition of "matched")
import readme_assets  # noqa: E402

ROOT = Path(__file__).resolve().parent.parent
OUT = ROOT / "site/data"
ROADMAP = ROOT / "docs/roadmap.yml"
TARGET = "SLPM_666.75"
TARGET_SHA256 = "d869ce4b8edd61cb978c4ff9ede595fe4d7d7b21cbb96a145275217120d8bc87"
LANE_SCORES = ROOT / "nonmatching/SCORES.tsv"

# The game's own code, by the directory of the original source tree each file sat in
# (C:/hd25/kingdom2/<dir>/...). key, directories, name, hue, short label.
# The directories are named after the programmers who owned them (Japanese surnames), so the
# site shows what each one holds, in English, with the directory beside it. The descriptions
# are read off the file names the E3 debug build gives (data/tu_map.tsv).
AREAS = [
    ("tozawa", ["tozawa"], "Menus & Jiminy's Journal", "azure", "menus"),
    ("yasui", ["yasui"], "Core gameplay", "crimson", "gameplay"),
    ("harata", ["harata"], "Camera, maps & HUD", "leaf", "camera & HUD"),
    ("naka", ["naka"], "Party members & models", "violet", "party & models"),
    ("taito", ["taito"], "Minigames", "teal", "minigames"),
    ("worldmap", ["worldmap"], "World map", "rose", "world map"),
    ("sasa", ["sasa"], "Cutscenes & musical", "cyan", "cutscenes"),
    ("rikeda", ["rikeda"], "Effects & particles", "olive", "effects"),
    ("smaller", None, "Smaller directories", "coral", "smaller"),
    ("unplaced", ["unknown"], "Not placed yet", "slate", "unplaced"),
]
AREA_ABOUT = {
    "tozawa": "The pause menu (items, equipment, abilities, party, save and load, config), Jiminy's Journal, "
              "the per-world special menus, the memory card screens.",
    "yasui": "The game's main library: objects and their movement, the player and party, actions and attacks, "
             "battle, commands and limits, missions, messages and windows, items, events.",
    "harata": "Cameras, map loading and map collision, lights and fades, sprites, and the on-screen display: "
              "command menu, HP gauges, radar, lock-on, information pop-ups.",
    "naka": "The party members and summons (Donald, Riku, Simba, Peter Pan, Genie, Stitch, Chicken Little and "
            "others), their behaviour, plus model drawing, animation and matrix maths.",
    "taito": "Minigames, among them the 100 Acre Wood ones (honey, the storm, jumping), with their players, "
             "objects and paths.",
    "worldmap": "The world map: landing on worlds, cameras, the Gummi Ship on the map, warps, menus.",
    "sasa": "The cutscene (event) system: cameras, motion, sound, messages, layout. Also the Atlantica "
            "musical rhythm game.",
    "rikeda": "Visual effects: the particle system, screen shake, effect playback.",
}
SMALLER_ABOUT = {"ishi": "2D sprites and screen layouts", "sugi": "assorted actions (skateboard and others)",
                 "ohori": "sound", "riCommon": "particle parts", "common": "game modes", "menu": "menu widgets",
                 "libyw": "scroll bar", "libgumi": "Gummi Ship", "pa": "unidentified"}
# Parts of file names that are abbreviations, Japanese words or the game's two-letter world codes.
GLOSSARY = {
    "cmenu": "pause menu", "jm": "Jiminy's Journal", "smenu": "world-specific menu", "mg": "minigame",
    "hachimitsu": "honey (Japanese)", "oarashi": "big storm (Japanese)", "gimobj": "gimmick object",
    "gumi": "Gummi Ship", "gumimenu": "Gummi Ship menu", "gumibattle": "Gummi Ship battle",
    "wm": "world map", "se": "sound effects", "bgm": "background music", "mcard": "memory card",
    "saveram": "save data", "munnydraw": "munny display", "synthe": "item synthesis", "btlobj": "battle object",
    "obj": "object", "bg": "background", "npc": "non-player character", "exp": "experience points",
    "stat": "status", "gra": "graphics", "seq": "sequence", "musical": "Atlantica musical",
    "libys": "gameplay library", "libdk": "camera, map and HUD library", "libkn": "party and model library",
    "libppp2": "particle library", "libssl": "sound library",
    "he": "Olympus Coliseum", "heco": "Olympus Coliseum", "tt": "Twilight Town", "ttpt": "Twilight Town",
    "mu": "Land of Dragons", "lm": "Atlantica", "hb": "Hollow Bastion", "tr": "Space Paranoids",
    "po": "100 Acre Wood", "al": "Agrabah", "eh": "The World That Never Was", "ca": "Port Royal",
    "cana": "Port Royal", "nm": "Halloween Town", "lk": "Pride Lands", "bb": "Beast's Castle",
    "dc": "Disney Castle", "wi": "Timeless River",
}


def english_hint(path):
    """English for the abbreviations in a file's path, or '' when there are none."""
    seen, out = set(), []
    for tok in re.split(r"[_/.]", path.rsplit(".", 1)[0]):
        if tok in GLOSSARY and tok not in seen:
            seen.add(tok)
            out.append(f"{tok} = {GLOSSARY[tok]}")
    return "; ".join(out)


AREA_OF_DIR = {d: k for k, dirs, *_ in AREAS if dirs for d in dirs}
SDK_LIBS = {  # library label in data/sdk_ranges.tsv -> name on the site
    "libkernel/libc/libmc": "SDK 3.0 block",
    "libkernel": "libkernel",
    "libc": "libc",
    "crt0": "crt0",
}
BIN_KEYS = ["lt80", "80-199", "200-999", "ge1k"]  # roadmap selectors bin:<key>, in progress_bytes.BINS order
BIN_LABELS = ["under 80 B", "80–199 B", "200–999 B", "1 KB and more"]
# where matched source currently sits: src/<dir> -> label
SRC_LABELS = {"anon": "unsorted (src/anon)", "autodecomp": "machine-lifted (src/autodecomp)"}


def git(*args):
    return subprocess.run(["git", *args], cwd=ROOT, capture_output=True, text=True).stdout.strip()


def slug(text):
    return re.sub(r"[^a-z0-9]+", "-", text.lower()).strip("-")


def read_tsv(path):
    with path.open() as f:
        return list(csv.DictReader((l for l in f if not l.startswith("#")), delimiter="\t"))


def registry_names():
    """addr -> symbol from functions.tsv; a real name wins over a placeholder."""
    names = {}
    placeholder = re.compile(r"^(func_|FUN_|_Z\d+func_|_Z\d+wtarget_|_Z\d+u_call|wtarget_|thunk_)")
    for line in (ROOT / "functions.tsv").read_text().splitlines():
        if not line or line.startswith("#"):
            continue
        parts = line.split("\t")
        if len(parts) < 2:
            continue
        try:
            addr = int(parts[1], 16)
        except ValueError:
            continue
        if addr not in names or (placeholder.match(names[addr]) and not placeholder.match(parts[0])):
            names[addr] = parts[0]
    return names


def demangle(names):
    """Itanium C++ names -> readable, in one c++filt call; unchanged if c++filt is missing."""
    uniq = sorted({n for n in names if n.startswith("_Z")})
    if not uniq:
        return {}
    try:
        r = subprocess.run(["c++filt"], input="\n".join(uniq) + "\n", capture_output=True, text=True, check=True)
    except (OSError, subprocess.CalledProcessError):
        return {}
    out = r.stdout.splitlines()
    return dict(zip(uniq, out)) if len(out) == len(uniq) else {}


def verify_elf():
    """True when `make` ends in MATCHED! (None if the toolchain isn't set up here)."""
    env = dict(os.environ)
    try:
        r = subprocess.run(["make"], cwd=ROOT, capture_output=True, text=True, env=env, timeout=1800)
    except (OSError, subprocess.TimeoutExpired):
        return None
    return r.returncode == 0 and "MATCHED!" in r.stdout


def build():
    """Every function as a record, and the files/areas they sit in."""
    if not progress_bytes.STATUS.exists():
        raise SystemExit(f"{progress_bytes.STATUS} missing: run `python3 tools/build_elf.py objects && make` first")
    rows = progress_bytes.load()
    tu = {int(r["addr"], 16): r for r in read_tsv(ROOT / "data/tu_map.tsv")}
    spans, subs = [], []
    for r in read_tsv(ROOT / "data/sdk_ranges.tsv"):
        rec = (int(r["lo"], 16), int(r["hi"], 16), r["library"])
        (spans if r["kind"] == "span" else subs).append(rec)
    spans.sort()
    span_lo = [s[0] for s in spans]
    names = registry_names()
    # What each built function is made of (tools/quality.py). Every row is built from source and
    # the ELF is byte-identical; "matched" on the site means decompiled to C/C++ (kinds cpp and
    # vu0-asm). The rest is built too but still uses assembly or a register pin.
    import quality
    qual = {int(q["addr"], 16): q for q in quality.load()}
    structural = {}
    lane = {a: 99.0 for a, q in qual.items() if q["kind"] not in quality.CLEAN}
    fns = []
    for r in rows:
        addr, size = int(r["addr"], 16), int(r["size"])
        built = r["mode"].strip().lower() == "cxx"
        q = qual.get(addr)
        done = built and bool(q) and q["kind"] in quality.CLEAN
        t = tu.get(addr)
        name = names.get(addr) or (t["symbol"] if t else f"func_{addr:08x}")
        src = ""
        if done and r.get("source"):
            p = Path(r["source"]).parts
            src = p[1] if len(p) > 1 and p[0] == "src" else p[0]
        i = bisect.bisect_right(span_lo, addr) - 1
        sdk = spans[i][2] if i >= 0 and addr < spans[i][1] else None
        if sdk:
            region, group = "sdk", SDK_LIBS.get(sdk, sdk)
            path = f"sdk/{spans[i][0]:08x}-{spans[i][1]:08x}"
            fname, conf, ev = f"{spans[i][0]:08X}–{spans[i][1]:08X}", "", ""
        else:
            region = "game"
            tpath = t["tu"] if t else f"unknown/tu_{addr:08x}.cpp"
            top = tpath.split("/")[0]
            group = AREA_OF_DIR.get(top, "smaller")
            path, fname = tpath, tpath.rsplit("/", 1)[-1]
            conf, ev = (t["confidence"], t["evidence"]) if t else ("low", "no-anchor")
        w = 0.0
        if not done and addr in structural:
            w = size * max(0.0, min(100.0, structural[addr])) / 100
        fns.append({"addr": addr, "size": size, "done": done, "name": name, "src": src, "region": region,
                    "group": group, "path": path, "file": fname, "conf": conf, "ev": ev, "w": w,
                    "structural": addr in structural and not done,
                    "lane": 0.0 if done else lane.get(addr, 0.0),
                    "kind": q["kind"] if q else "", "named": bool(q and q["named"])})
    dm = demangle([f["name"] for f in fns])
    for f in fns:
        f["name"] = dm.get(f["name"], f["name"])
    return fns


def area_desc(key, recs):
    """A factual one-liner: the sub-libraries and file count the file map gives this area."""
    subs = Counter()
    for r in recs:
        p = r["path"].split("/")
        if len(p) > 2:
            subs[p[1]] += r["c"]
    dirs = sorted({r["path"].split("/")[0] for r in recs})
    if key == "unplaced":
        return ("Code the file map could not place in an original source file yet: no anchor from the "
                "E3 debug build nearby. Grouped into provisional files by address.")
    if key == "smaller":
        return ("The smaller source directories together: "
                + ", ".join(f"{d} ({SMALLER_ABOUT[d]})" if d in SMALLER_ABOUT else d for d in dirs) + ".")
    return (f"{AREA_ABOUT[key]} Source directory {key}/, named after its programmer.")


def write(fns, subject, elf_ok):
    OUT.mkdir(parents=True, exist_ok=True)
    (OUT / "lib").mkdir(exist_ok=True)
    for old in (OUT / "lib").glob("*.json"):
        old.unlink()

    has_w = False
    files = defaultdict(lambda: {"fns": [], "c": 0, "cm": 0, "w": 0.0, "f": 0, "fm": 0, "conf": Counter(), "ev": Counter()})
    for f in fns:
        rec = files[(f["region"], f["group"], f["path"])]
        rec["name"], rec["path"] = f["file"], f["path"]
        rec["fns"].append([f["name"], f["addr"], f["size"], 100 if f["done"] else int(f["lane"])] + ([round(f["w"])] if f["w"] else []))
        rec["c"] += f["size"]; rec["f"] += 1
        if f["done"]:
            rec["cm"] += f["size"]; rec["fm"] += 1
        rec["w"] += f["w"]
        if f["conf"]:
            rec["conf"][f["conf"]] += 1
            for e in f["ev"].split(","):
                rec["ev"][e.split(":")[0]] += 1

    def lib_record(rid, lid, name, recs, extra=None):
        recs.sort(key=lambda r: min(x[1] for x in r["fns"]))
        detail, evidence, out_files = {}, {}, []
        for i, r in enumerate(recs):
            r["fns"].sort(key=lambda x: x[1])
            detail[str(i)] = r["fns"]
            status = "M" if r["fm"] == r["f"] else "N" if r["fm"] else "U"
            row = {"n": r["name"], "p": r["path"], "a": r["fns"][0][1], "s": status,
                   "c": r["c"], "cm": r["cm"], "f": r["f"], "fm": r["fm"]}
            hint = english_hint(r["path"]) if rid == "game" else ""
            if hint:
                row["e"] = hint
            if r["w"] > 0:
                row["wm"] = round(r["cm"] + r["w"])
            if r["conf"]:
                conf = r["conf"].most_common(1)[0][0]
                if conf == "low":
                    row["u"] = 1  # placed in this file on thin evidence
                evidence[str(i)] = [conf, ", ".join(k for k, _ in r["ev"].most_common(3) if k)]
            out_files.append(row)
        lib_json = {"id": lid, "files": detail}
        if evidence:
            lib_json["ev"] = evidence
        (OUT / "lib" / f"{lid}.json").write_text(json.dumps(lib_json, separators=(",", ":")))
        out = {"id": lid, "n": name, "c": sum(r["c"] for r in recs), "cm": sum(r["cm"] for r in recs),
               "f": sum(r["f"] for r in recs), "fm": sum(r["fm"] for r in recs), "files": out_files}
        if has_w:
            out["wm"] = round(sum(r["cm"] + r["w"] for r in recs))
        out.update(extra or {})
        return out

    by_group = defaultdict(list)
    for (rid, group, _), rec in files.items():
        by_group[(rid, group)].append(rec)

    game_libs = []
    for key, _dirs, name, hue, short in AREAS:
        recs = by_group.get(("game", key))
        if recs:
            game_libs.append(lib_record("game", f"game-{key}", name, recs,
                                        {"key": key, "hue": hue, "short": short, "desc": area_desc(key, recs)}))
    sdk_libs = [lib_record("sdk", f"sdk-{slug(g)}", g, recs)
                for (rid, g), recs in by_group.items() if rid == "sdk"]
    sdk_libs.sort(key=lambda l: -l["c"])

    def region(rid, name, desc, libs):
        tot = {k: sum(l[k] for l in libs) for k in ("c", "cm", "f", "fm")}
        if has_w:
            tot["wm"] = sum(l["wm"] for l in libs)
        return {"id": rid, "n": name, "desc": desc, **tot, "libs": libs}

    regions = [
        region("game", "Game code", "Square's own code: everything in the main ELF that is not Sony SDK or C runtime", game_libs),
        region("sdk", "SDK & runtime", "Sony's PS2 SDK 3.0 libraries, libc and crt0 linked into the ELF", sdk_libs),
    ]

    code, code_m = sum(f["size"] for f in fns), sum(f["size"] for f in fns if f["done"])
    all_files = [fl for r in regions for l in r["libs"] for fl in l["files"]]
    totals = {
        "code": code, "code_matched": code_m,
        "fns": len(fns), "fns_matched": sum(1 for f in fns if f["done"]),
        "files": len(all_files),
        "files_complete": sum(1 for f in all_files if f["s"] == "M"),
        "files_started": sum(1 for f in all_files if f["s"] != "U"),
        "files_unconfirmed": sum(1 for f in all_files if f.get("u")),
        "elf_ok": elf_ok,
    }
    if True:
        totals["fns_built"] = sum(1 for f in fns if f["kind"])
        totals["code_built"] = sum(f["size"] for f in fns if f["kind"])
        totals["fns_named"] = sum(1 for f in fns if f["named"])
        totals["code_named"] = sum(f["size"] for f in fns if f["named"])
        totals["kinds"] = {k: {"fns": sum(1 for f in fns if f["kind"] == k),
                               "code": sum(f["size"] for f in fns if f["kind"] == k)}
                           for k in ("cpp", "vu0-asm", "reg-pin", "inline-asm", "asm-unit", "asm-file")}
    if sum(r["c"] for r in regions) != code:
        raise SystemExit("regions do not add up to the function table")

    bins = []
    for (lo, hi, _), key, label in zip(progress_bytes.BINS, BIN_KEYS, BIN_LABELS):
        sel = [f for f in fns if lo <= f["size"] < hi]
        bins.append({"key": key, "label": label, "f": len(sel), "fm": sum(1 for f in sel if f["done"]),
                     "c": sum(f["size"] for f in sel), "cm": sum(f["size"] for f in sel if f["done"])})

    srcdirs = defaultdict(lambda: [0, 0])
    for f in fns:
        if f["done"]:
            srcdirs[f["src"] or "?"][0] += 1
            srcdirs[f["src"] or "?"][1] += f["size"]
    srcdirs = [{"dir": d, "label": SRC_LABELS.get(d, f"src/{d}"), "f": v[0], "c": v[1],
                "kind": "unsorted" if d == "anon" else "lifted" if d == "autodecomp" else "named"}
               for d, v in sorted(srcdirs.items(), key=lambda kv: -kv[1][1])]

    overlays = [{"n": r["name"], "image": int(r["image_bytes"]), "started": False}
                for r in read_tsv(ROOT / "data/overlays.tsv")]

    now = datetime.datetime.now(datetime.timezone.utc).replace(microsecond=0).isoformat()
    base = git("rev-parse", "HEAD")
    sdk = regions[1]
    summary = {
        "generated": now, "base": base, "target": TARGET, "sha256": TARGET_SHA256,
        "totals": totals, "bins": bins, "srcdirs": srcdirs, "overlays": overlays, "regions": regions,
        "libraries": {"n": "SDK & runtime", "regions": ["sdk"],
                      **{k: sdk[k] for k in ("c", "cm", "f", "fm") }, **({"wm": sdk["wm"]} if has_w else {}),
                      "units": sum(len(l["files"]) for l in sdk["libs"]),
                      "matching": sum(1 for l in sdk["libs"] for f in l["files"] if f["s"] == "M")},
    }
    (OUT / "summary.json").write_text(json.dumps(summary, separators=(",", ":")))

    # history: one entry per commit this was generated on
    hist_path = OUT / "history.json"
    hist = json.loads(hist_path.read_text()) if hist_path.exists() else []
    entry = {"base": base, "date": now, "subject": subject or "",
             "code": code_m, "code_total": code, "fns": totals["fns_matched"], "fns_total": totals["fns"],
             "regions": {r["id"]: [r["cm"], r["c"], r["fm"], r["f"]] for r in regions}}
    if has_w:
        entry["code_weighted"] = totals["code_weighted"]
    hist = [e for e in hist if e.get("base") != base] + [entry]
    hist_path.write_text(json.dumps(hist, separators=(",", ":")))

    rm = roadmap(summary, now)
    (OUT / "roadmap.json").write_text(json.dumps(rm, separators=(",", ":")))
    readme_assets.write_all(summary, rm)
    return summary


STATUSES = ("done", "active", "next", "later")
MEASURES = {"code": "of the code matched", "fns": "of the functions matched"}


def roadmap(summary, now):
    """docs/roadmap.yml plus live progress.

    Selectors (`covers`, `measure.of`): `main`, `bin:lt80|80-199|200-999|ge1k`,
    `area:<dir>` and `overlays`. `main` and an `area:` that the file map knows
    (an original source directory, e.g. area:tozawa) resolve to treemap ids; an
    `area:` naming a directory under src/ that holds matched code today
    (area:anon, area:autodecomp), a `bin:` and `overlays` have no tile, so they
    become a text tag. `overlays` has no data yet and gives no measure. Unknown
    selectors and statuses stop the run, so a typo can't silently show 0 %."""
    import yaml  # PyYAML; only needed here
    rm = yaml.safe_load(ROADMAP.read_text())
    t = summary["totals"]
    game = next(r for r in summary["regions"] if r["id"] == "game")
    areas = {}
    for l in game["libs"]:
        areas[l["key"]] = l
    area_dirs = {d: k for k, dirs, *_ in AREAS if dirs for d in dirs}
    listed = {p["p"].split("/")[0]: "smaller" for l in game["libs"] if l["key"] == "smaller" for p in l["files"]}
    bins = {b["key"]: b for b in summary["bins"]}
    srcdirs = {s["dir"]: s for s in summary["srcdirs"]}

    def resolve(sel):
        """selector -> (treemap id or None, tag text or None, {c, cm, f, fm} or None)"""
        if sel == "main":
            return "", None, {"c": t["code"], "cm": t["code_matched"], "f": t["fns"], "fm": t["fns_matched"]}
        if sel == "overlays":
            return None, "the five overlays", None
        kind, _, arg = sel.partition(":")
        if kind == "bin" and arg in bins:
            return None, f"functions of {bins[arg]['label']}", bins[arg]
        if kind == "area":
            key = area_dirs.get(arg) or listed.get(arg)
            if key == "smaller" and arg != "smaller":
                key = None  # one directory inside the "smaller" group has no tile of its own
            if arg in areas:
                key = arg
            if key:
                return f"game/game-{key}", None, areas[key]
            if arg in srcdirs:  # matched code sitting in src/<arg> today
                s = srcdirs[arg]
                return None, f"src/{arg}", {"c": s["c"], "cm": s["c"], "f": s["f"], "fm": s["f"]}
        raise SystemExit(f"docs/roadmap.yml: unknown selector {sel!r} (main, overlays, "
                         f"bin:{'|'.join(bins)}, area:<{'|'.join(sorted(set(areas) | set(srcdirs)))}>)")

    def measure(kind, sels):
        if kind not in MEASURES:
            raise SystemExit(f"docs/roadmap.yml: unknown measure kind {kind!r} ({', '.join(MEASURES)})")
        recs = [resolve(s)[2] for s in sels]
        if not recs or any(r is None for r in recs):
            return None  # nothing measurable yet (the overlays)
        a, b = ("cm", "c") if kind == "code" else ("fm", "f")
        return {"done": sum(r[a] for r in recs), "total": sum(r[b] for r in recs)}

    owners = defaultdict(list)
    phases = []
    for ph in rm["phases"]:
        if ph["status"] not in STATUSES:
            raise SystemExit(f"docs/roadmap.yml: phase {ph['id']}: status {ph['status']!r}")
        ms_out = []
        for ms in ph["milestones"]:
            if ms["status"] not in STATUSES:
                raise SystemExit(f"docs/roadmap.yml: {ms['id']}: status {ms['status']!r}")
            res = [resolve(c) for c in ms.get("covers") or []]
            covers = [r[0] for r in res if r[0] is not None]
            for c in covers:
                owners[c].append(ms["id"])
            out = {"id": ms["id"], "title": ms["title"], "desc": ms["desc"], "status": ms["status"], "covers": covers}
            tags = [r[1] for r in res if r[1]]
            if tags:
                out["tags"] = tags
            if ms.get("measure"):
                kind = ms["measure"]["kind"]
                m = measure(kind, ms["measure"].get("of") or ms.get("covers") or [])
                if m:
                    out["measure"] = {"kind": kind, "label": MEASURES[kind], **m}
            if ms.get("landed"):
                out["landed"] = ms["landed"]
            ms_out.append(out)
        phases.append({"id": ph["id"], "title": ph["title"], "summary": ph.get("summary", ""), "hue": ph.get("hue", "gold"),
                       "status": ph["status"], "milestones": ms_out, **({"focus": True} if ph.get("focus") else {})})
    return {"generated": now, "policies": rm.get("policies", []), "phases": phases, "owners": owners}


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--subject", default="", help="subject line of the commit these files go into")
    ap.add_argument("--stage", action="store_true", help="git add every file this writes")
    ap.add_argument("--no-verify", action="store_true",
                    help="don't run `make`; the ELF check is then recorded as not run")
    args = ap.parse_args()
    elf_ok = None if args.no_verify else verify_elf()
    if elf_ok is False:
        raise SystemExit("`make` did not end in MATCHED!: fix the build before publishing numbers")
    s = write(build(), args.subject, elf_ok)
    t = s["totals"]
    sizes = sum(p.stat().st_size for p in OUT.rglob("*.json"))
    print(f"site/data: {t['fns_matched']}/{t['fns']} functions, {t['code_matched']}/{t['code']} bytes "
          f"({100 * t['code_matched'] / t['code']:.2f} %), {t['files']} files, "
          f"ELF {'MATCHED' if elf_ok else 'not verified'}, {sizes // 1024} KiB")
    if args.stage:
        r = subprocess.run(["git", "add", "--", *readme_assets.OUTPUTS], cwd=ROOT, capture_output=True, text=True)
        if r.returncode != 0:
            raise SystemExit(f"git add failed:\n{r.stderr}")


if __name__ == "__main__":
    main()
