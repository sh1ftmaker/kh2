#!/usr/bin/env python3
"""Redraw the README visuals, badges and status text from committed data.

The measurements in site/data/summary.json need a local build against the
original SLPM_666.75, so only tools/site_data.py makes them. This script needs
no build: it reads the committed summary, rebuilds roadmap.json from
docs/roadmap.yml, and rewrites the generated README parts.
.github/workflows/pages.yml runs it on every push, so a hand edit to the
roadmap still ends up on the site.
"""

import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import readme_assets  # noqa: E402
import site_data  # noqa: E402


def main():
    summary = json.loads((site_data.OUT / "summary.json").read_text())
    rm = site_data.roadmap(summary, summary["generated"])
    (site_data.OUT / "roadmap.json").write_text(json.dumps(rm, separators=(",", ":")))
    readme_assets.write_all(summary, rm)


if __name__ == "__main__":
    main()
