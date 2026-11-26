# Kingdom Hearts II Final Mix decompilation

A decompilation of *Kingdom Hearts II Final Mix* for the PlayStation 2 (Japan,
`SLPM_666.75`). The whole main executable builds from source with Sony's
`ee-gcc 3.2-040921` and is byte-for-byte identical to the original. The work
now is turning that source into readable C++: real names, real types, the
original file structure, and no assembly where C++ will do.

**Progress site: <https://sh1ftmaker.github.io/kh2/>**

<!-- assets:start -->
<p align="center">
  <a href="https://sh1ftmaker.github.io/kh2/"><img alt="Decompiled to C/C++" src="https://img.shields.io/endpoint?url=https%3A%2F%2Fsh1ftmaker.github.io%2Fkh2%2Fdata%2Fbadge-code.json&style=flat-square"></a>
  <a href="https://sh1ftmaker.github.io/kh2/"><img alt="Functions matched" src="https://img.shields.io/endpoint?url=https%3A%2F%2Fsh1ftmaker.github.io%2Fkh2%2Fdata%2Fbadge-functions.json&style=flat-square"></a>
  <a href="https://sh1ftmaker.github.io/kh2/"><img alt="SLPM_666.75 rebuilt byte-identical" src="https://img.shields.io/endpoint?url=https%3A%2F%2Fsh1ftmaker.github.io%2Fkh2%2Fdata%2Fbadge-elf.json&style=flat-square"></a>
  <a href="https://github.com/sh1ftmaker/kh2/actions/workflows/pages.yml"><img alt="Pages" src="https://img.shields.io/github/actions/workflow/status/sh1ftmaker/kh2/pages.yml?branch=matching&style=flat-square&label=site"></a>
</p>

<a href="https://sh1ftmaker.github.io/kh2/">
<picture>
  <source media="(prefers-color-scheme: dark)" srcset="site/badges/progress-dark.svg">
  <source media="(prefers-color-scheme: light)" srcset="site/badges/progress-light.svg">
  <img src="site/badges/progress-light.svg" width="100%" alt="Progress overview: 67.8 % of the code decompiled, with a bar for each source directory of the original tree, the SDK, and each function-size band">
</picture>
</a>
<!-- assets:end -->

<!-- status:start -->
Status (2026-11-26, written by `tools/site_data.py`): 9,401 of 11,509 functions, 1,366,776 of 2,015,044 bytes of code decompiled to C/C++ (67.8 %); all 11,509 are built from source and the executable is byte-identical, but 2,108 still use assembly or a register pin; 3,536 functions (33.0 % of the code) carry a real name. By function size: under 80 B 86.7 %, 80–199 B 83.7 %, 200–999 B 68.1 %, 1 KB and more 40.2 %. Game code 9,103 / 10,879 functions (68.5 % of its bytes; Menus & Jiminy's Journal 90.1 %, Core gameplay 69.0 %, Camera, maps & HUD 70.4 %, Party members & models 45.4 %, Minigames 43.9 %, World map 80.8 %, Cutscenes & musical 74.3 %, Effects & particles 44.0 %, Smaller directories 69.3 %, Not placed yet 52.4 %); SDK & runtime 298 / 630 functions (58.4 %). 348 of 668 files in the file map have every function matched. The five overlays are not started. `make` ends in MATCHED!.
<!-- status:end -->

This repository contains no game data. You need your own copy of the game to
build it.

## What the numbers mean

- **Built from source, byte-identical**: all of the main executable. This is
  the floor, checked on every change.
- **Decompiled to C/C++** is the headline: the share of code that is plain C
  or C++. Functions that are still assembly files, contain inline CPU
  assembly or pin a register are built and identical, but not counted.
- **Named**: functions with a real name. Names come from the developers'
  own debug symbols in the 2014 PS3 E3 build, never from a model's guess;
  each carries a confidence tier (`notes/e3/README.md`).

## Building

```sh
isoinfo -i "<your iso>" -x '/SLPM_666.75;1' > SLPM_666.75
# sha256 d869ce4b8edd61cb978c4ff9ede595fe4d7d7b21cbb96a145275217120d8bc87

tools/setup_toolchain.sh <path>/ee-gcc3.2-040921-full.tar.gz ~/ps2
source ~/ps2/env.sh
make                           # ends in MATCHED!
python3 tools/quality.py       # what the source is made of
```

Needs x86_64 Linux with 32-bit glibc, `patchelf`, `bubblewrap`, `python3` and
`make`; the build runs in a no-network sandbox. The compiler archive is not
distributed here. Docker works too, as upstream
([docs/native-toolchain.md](docs/native-toolchain.md)).

## How the project works

Modelled on the [Four Swords Adventures decompilation](https://github.com/sh1ftmaker/fsa):

- One rule book for people and AI agents alike: [CLAUDE.md](CLAUDE.md),
  [AGENTS.md](AGENTS.md), [docs/RULES_CARD.md](docs/RULES_CARD.md).
- No fakematches: no inline asm, register pins or code shaped only to steer
  the compiler. Names need evidence; unproven names keep their address.
- A reviewer that never saw the author's reasoning judges every hand-written
  submission ([docs/REVIEW_BRIEF.md](docs/REVIEW_BRIEF.md)).
- The build never stops being byte-identical; a rewrite that does not match
  yet waits in `nonmatching/`.
- The plan is [docs/PLAN.md](docs/PLAN.md); the site's roadmap is
  [docs/roadmap.yml](docs/roadmap.yml).

Tools worth knowing: `tools/quality.py` (what each function is made of),
`tools/rename_fn.py` (rename a function everywhere, with rollback),
`tools/gate.py` (the mechanical submission gate), `tools/rig/get_context.py`
(everything known about one function). [docs/codegen-3.2.md](docs/codegen-3.2.md)
records what this compiler does.

## Symbols and file layout

Names, class layouts and the original file layout come from the debug
information in the E3 2014 PS3 kiosk demo of the HD remaster: 25,356
functions and 5,859 types, of which about 7,600 functions are mapped to
their PS2 counterparts with a graded confidence (`data/e3`). The HD build
changed many class layouts, so its headers are a starting point that is
checked against the PS2 code, not copied.

The five code overlays in `OVL.IMG` (gumi ship battle and menu, shop, title,
movie) are not built yet.

## Contributing

See [CONTRIBUTING.md](CONTRIBUTING.md). AI-assisted work is welcome under the
same rules as any other.

## Credits and license

- [GovanifY's kh2](https://github.com/GovanifY/kh2) ("dasein") is the origin:
  the matching build system, the first 4,680 matched functions and the header
  skeletons.
- [zcroker's fork](https://github.com/zcroker/kh2) took the build to every
  function of the main executable. This project adopted that source as its
  base in November 2026.
- This project adds the names from the PS3 debug build, the original file
  map, the rules and gate, and the progress site.

MIT license, see [LICENSE](LICENSE).

Kingdom Hearts is a trademark of its owners. This project is not affiliated
with or endorsed by them, and is non-commercial.
