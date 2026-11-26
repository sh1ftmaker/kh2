#!/usr/bin/env python3
"""try_unit.py: does my edit of one source file still compile to the same object?

  python3 tools/try_unit.py src/anon/unit_0023e5d0.cpp            # same / which functions differ
  python3 tools/try_unit.py src/anon/unit_0023e5d0.cpp --show func_0023e5d0
                                                                  # assembly diff of one function

Compiles the committed version (git HEAD) and the working file with the build's own command
for that file (out/cmds.txt, written by tools/attribute.py) and compares the two objects:
every loaded section, relocation and symbol. "same" means the linked game cannot change.
It takes about a second, touches nothing in out/build, and several can run at once, so use
it instead of `make` while working on a file. Needs the toolchain env.sh sourced.
"""
import difflib
import os
import shlex
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))


def inside(src, show, flags):
    from attribute import bodies
    from detrick import sections
    cmd = next((ln for ln in (ROOT / "out/cmds.txt").read_text().splitlines()
                if " -c -o " in ln and ln.split()[-1] == src), None)
    if not cmd:
        sys.exit(f"{src}: no compile command in out/cmds.txt (run tools/attribute.py)")
    path = ROOT / src
    ref = Path(os.environ["TRY_UNIT_REF"]).read_bytes()
    tmp_src = path.with_name(f"zztu_{os.getpid()}{path.suffix}")
    tmp_out = ROOT / "out" / f"zztu_{os.getpid()}"
    argv = shlex.split(cmd)
    ref_argv = list(argv)
    if flags is not None:                         # try other switches for the working file only
        keep = argv[:argv.index("-fno-function-sections") + 1] if "-fno-function-sections" in argv else argv[:-4]
        argv = keep + flags + argv[-4:]

    def build(body, args, mode):
        tmp_src.write_bytes(body)
        a = list(args)
        a[a.index("-c")] = mode
        a[a.index("-o") + 1] = str(tmp_out)
        a[-1] = str(tmp_src)
        tmp_out.unlink(missing_ok=True)
        r = subprocess.run(a, cwd=ROOT, capture_output=True, text=True)
        if r.returncode or not tmp_out.exists():
            return None, r.stderr.replace(tmp_src.name, path.name)
        return (sections(tmp_out) if mode == "-c" else bodies(tmp_out.read_text(errors="replace"))), ""

    try:
        want, err = build(ref, ref_argv, "-c")
        if want is None:
            sys.exit("the committed version does not compile:\n" + err[-2000:])
        got, err = build(path.read_bytes(), argv, "-c")
        if got is None:
            print("compile error:\n" + err[-3000:])
            return 2
        a, _ = build(ref, ref_argv, "-S")
        b, _ = build(path.read_bytes(), argv, "-S")
        differ = sorted(k for k in a if b.get(k) != a[k])
        if show:
            if show not in a or show not in b:
                sys.exit(f"{show}: not a function of this file; it has: {' '.join(sorted(a))[:1500]}")
            d = list(difflib.unified_diff(a[show].split("\n"), b[show].split("\n"), "target", "yours", lineterm="", n=3))
            print("\n".join(d) if d else f"{show}: same assembly")
        if got == want:
            print("same")
            return 0
        print(f"differs: {len(differ)} function(s): {' '.join(differ)[:1500]}" if differ
              else "differs outside function bodies (data, symbols or relocations)")
        return 1
    finally:
        tmp_src.unlink(missing_ok=True)
        tmp_out.unlink(missing_ok=True)


def main():
    args = sys.argv[1:]
    if not args or args[0] in ("-h", "--help"):
        sys.exit(__doc__)
    if args[0] == "--inside":
        show = args[args.index("--show") + 1] if "--show" in args else None
        flags = shlex.split(args[args.index("--flags") + 1]) if "--flags" in args else None
        sys.exit(inside(args[1], show, flags))
    src = os.path.relpath(os.path.abspath(args[0]), ROOT)
    r = subprocess.run(["git", "show", f"HEAD:{src}"], cwd=ROOT, capture_output=True)   # git is not in the sandbox
    if r.returncode:
        sys.exit(f"{src}: not in git HEAD")
    ref = ROOT / "out" / f"zztu_ref_{os.getpid()}"
    ref.write_bytes(r.stdout)
    try:
        rc = subprocess.run([str(ROOT / "tools/sandbox.sh"), "python3", "tools/try_unit.py", "--inside", src] + args[1:],
                            cwd=ROOT, env=dict(os.environ, TRY_UNIT_REF=f"/work/out/{ref.name}")).returncode
    finally:
        ref.unlink(missing_ok=True)
    sys.exit(rc)


if __name__ == "__main__":
    main()
