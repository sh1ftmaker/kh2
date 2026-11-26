# Building without Docker (native toolchain mode)

The default build runs the ee-gcc 3.2-040921 toolchain inside a Docker image.
On hosts without Docker (or without permission to use it) you can run the same
32-bit Linux binaries directly. Requirements: x86_64 Linux with 32-bit glibc
(`libc6:i386` on Debian/Ubuntu), `curl`, `patchelf` (system package or `pip install patchelf`),
`objdiff-cli`, python3, make.

```sh
# 1-4. extract the compiler, patch its loader, make the shim dir, fetch objdiff-cli
#      (the archive is not in this repository; sha256 12519aff...0b80c)
tools/setup_toolchain.sh <path>/ee-gcc3.2-040921-full.tar.gz ~/ps2
source ~/ps2/env.sh      # KH2_NATIVE=1, PS2_TOOLCHAIN, KH2_OBJDIFF_DIR, shim on PATH

# 5. build / verify / report
python3 tools/build_elf.py objects
make            # == make verify -> MATCHED!
make objdiff-report
python3 tools/progress_bytes.py
```

How it works: `KH2_NATIVE=1` makes the Makefile call `inner-all` directly instead of
`docker run`, and `tools/common.py::ps2_shell` runs the same command strings locally,
rewriting the container paths (`/opt/ps2/gcc` -> `$PS2_TOOLCHAIN`, `/work` -> repo root).
Generated scripts (`out/objdiff/build_units.sh`) are written with the active prefix.
Docker mode is unchanged.
