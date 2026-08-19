# Building without Docker (native toolchain mode)

The default build runs the ee-gcc 3.2-040921 toolchain inside a Docker image.
On hosts without Docker (or without permission to use it) you can run the same
32-bit Linux binaries directly. Requirements: x86_64 Linux with 32-bit glibc
(`libc6:i386` on Debian/Ubuntu), `patchelf` (system package or `pip install patchelf`),
`objdiff-cli`, python3, make.

```sh
# 1. extract the toolchain (from git-lfs) somewhere writable
git lfs pull
mkdir -p ~/ps2 && tar -xzf docker/ps2/ee-gcc3.2-040921-full.tar.gz -C ~/ps2   # -> ~/ps2/gcc

# 2. point the binaries at the host's 32-bit loader
for b in ~/ps2/gcc/bin/* ~/ps2/gcc/ee/bin/* ~/ps2/gcc/lib/gcc-lib/ee/3.2-ee-040921/*; do
  [ -f "$b" ] && patchelf --print-interpreter "$b" >/dev/null 2>&1 && \
    patchelf --set-interpreter /lib/ld-linux.so.2 "$b"
done

# 3. a shim dir with ONLY the ee-* tools plus `as`/`ld` aliases
#    (gcc/bin also ships an ancient 32-bit make/diff/cmp — never put gcc/bin itself on PATH)
mkdir -p ~/ps2/gcc/shim
for f in ~/ps2/gcc/bin/ee-*; do ln -sf "$f" ~/ps2/gcc/shim/; done
ln -sf ~/ps2/gcc/bin/ee-as ~/ps2/gcc/shim/as
ln -sf ~/ps2/gcc/bin/ee-ld ~/ps2/gcc/shim/ld

# 4. objdiff-cli (pinned to the version the Docker image uses)
mkdir -p ~/ps2/objdiff && wget -O ~/ps2/objdiff/objdiff-cli \
  https://github.com/encounter/objdiff/releases/download/v3.7.0/objdiff-cli-linux-x86_64 && chmod +x ~/ps2/objdiff/objdiff-cli

# 5. build / verify / report
export KH2_NATIVE=1 PS2_TOOLCHAIN=~/ps2/gcc KH2_OBJDIFF_DIR=~/ps2/objdiff
make            # == make verify -> MATCHED!
make objdiff-report
python3 tools/progress_bytes.py
```

How it works: `KH2_NATIVE=1` makes the Makefile call `inner-all` directly instead of
`docker run`, and `tools/common.py::ps2_shell` runs the same command strings locally,
rewriting the container paths (`/opt/ps2/gcc` -> `$PS2_TOOLCHAIN`, `/work` -> repo root).
Generated scripts (`out/objdiff/build_units.sh`) are written with the active prefix.
Docker mode is unchanged.
