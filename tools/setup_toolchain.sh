#!/usr/bin/env bash
# Set up the native (Docker-less) ee-gcc 3.2-040921 toolchain.
#
#   tools/setup_toolchain.sh <ee-gcc3.2-040921-full.tar.gz> [dest-dir]
#
# The compiler archive is not in this repository. Its sha256 is
# 12519affc1fe38130b44fc6bcea98557a95e799a46c66337bb436652a8f0b80c.
# Needs: x86_64 Linux with 32-bit glibc (libc6:i386), patchelf, curl, bubblewrap.
# Writes <dest>/gcc, <dest>/objdiff and <dest>/env.sh; then `source <dest>/env.sh`.
set -euo pipefail

ARCHIVE="${1:?usage: setup_toolchain.sh <ee-gcc3.2-040921-full.tar.gz> [dest-dir]}"
DEST="$(mkdir -p "${2:-$HOME/ps2}" && cd "${2:-$HOME/ps2}" && pwd)"
SHA=12519affc1fe38130b44fc6bcea98557a95e799a46c66337bb436652a8f0b80c
OBJDIFF_VERSION=v3.7.0

echo "$SHA  $ARCHIVE" | sha256sum -c - >/dev/null || { echo "error: $ARCHIVE is not the expected archive" >&2; exit 1; }
command -v patchelf >/dev/null || { echo "error: patchelf is required" >&2; exit 1; }

tar -xzf "$ARCHIVE" -C "$DEST"                      # -> $DEST/gcc
for b in "$DEST"/gcc/bin/* "$DEST"/gcc/ee/bin/* "$DEST"/gcc/lib/gcc-lib/ee/3.2-ee-040921/*; do
  [ -f "$b" ] && patchelf --print-interpreter "$b" >/dev/null 2>&1 && \
    patchelf --set-interpreter /lib/ld-linux.so.2 "$b"
done

# Only the ee-* tools plus as/ld go on PATH: gcc/bin also ships an ancient
# 32-bit make/diff/cmp that must never shadow the system ones.
mkdir -p "$DEST/gcc/shim"
for f in "$DEST"/gcc/bin/ee-*; do ln -sf "$f" "$DEST/gcc/shim/"; done
ln -sf "$DEST/gcc/bin/ee-as" "$DEST/gcc/shim/as"
ln -sf "$DEST/gcc/bin/ee-ld" "$DEST/gcc/shim/ld"

mkdir -p "$DEST/objdiff"
[ -x "$DEST/objdiff/objdiff-cli" ] || {
  curl -L --fail -o "$DEST/objdiff/objdiff-cli" \
    "https://github.com/encounter/objdiff/releases/download/$OBJDIFF_VERSION/objdiff-cli-linux-x86_64"
  chmod +x "$DEST/objdiff/objdiff-cli"
}

# The Sony SDK libraries were built with older compilers; the build expects them in tools/compilers/.
REPO="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
for c in ee-gcc2.9-991111 ee-gcc2.96; do
  if [ ! -x "$REPO/tools/compilers/$c/bin/ee-gcc" ]; then
    mkdir -p "$REPO/tools/compilers/$c"
    curl -sSL --fail "https://github.com/decompme/compilers/releases/download/compilers/$c.tar.xz" \
      | tar xJ -C "$REPO/tools/compilers/$c"
    chmod +x "$REPO/tools/compilers/$c"/bin/* || true
  fi
done

cat > "$DEST/env.sh" <<ENV
export KH2_NATIVE=1
export PS2_TOOLCHAIN=$DEST/gcc
export KH2_OBJDIFF_DIR=$DEST/objdiff
export PATH=\$PS2_TOOLCHAIN/shim:\$KH2_OBJDIFF_DIR:\$PATH
ENV
echo "done: source $DEST/env.sh, then make"
