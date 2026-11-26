# Building without Docker (native toolchain mode)

The default build runs the ee-gcc 3.2-040921 toolchain inside a Docker image.
On hosts without Docker (or without permission to use it) you can run the same
32-bit Linux binaries directly. Requirements: x86_64 Linux with 32-bit glibc
(`libc6:i386` on Debian/Ubuntu), `curl`, `bubblewrap`, `patchelf` (system package or `pip install patchelf`),
`objdiff-cli`, python3, make.

```sh
# 1-4. extract the compiler, patch its loader, make the shim dir, fetch objdiff-cli
#      (the archive is not in this repository; sha256 12519aff...0b80c)
tools/setup_toolchain.sh <path>/ee-gcc3.2-040921-full.tar.gz ~/ps2
source ~/ps2/env.sh      # KH2_NATIVE=1, PS2_TOOLCHAIN, KH2_OBJDIFF_DIR, shim on PATH

# 5. build / verify / report
make            # == make verify -> MATCHED!
make objdiff-report
python3 tools/quality.py
```

How it works: `KH2_NATIVE=1` makes the Makefile run its container commands through
`tools/sandbox.sh` instead of `docker run`. The script uses bubblewrap to give the
build the same layout the container has (the repository at `/work`, the compiler at
`/opt/ps2/gcc`, `as`/`ld` and `objdiff-cli` on `PATH`) with no network and no access
to the rest of the host. `tools/setup_toolchain.sh` also fetches the two older
compilers the Sony SDK code needs into `tools/compilers/`. Docker mode is unchanged.
