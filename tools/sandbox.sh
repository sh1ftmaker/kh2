#!/usr/bin/env bash
# Run a command in a no-network sandbox laid out like the project's build
# container: the repository at /work, ee-gcc 3.2 at /opt/ps2/gcc, `as`/`ld`
# and objdiff-cli on PATH. Used by the Makefile when KH2_NATIVE=1 (no Docker).
#
#   PS2_TOOLCHAIN     extracted ee-gcc 3.2-040921 (tools/setup_toolchain.sh)
#   KH2_OBJDIFF_DIR   directory holding objdiff-cli
#
# The sandbox sees /usr read-only, this repository read-write, and nothing
# else of the host: no home directory, no network.
set -euo pipefail
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
: "${PS2_TOOLCHAIN:?source the toolchain env.sh first (tools/setup_toolchain.sh)}"
: "${KH2_OBJDIFF_DIR:?source the toolchain env.sh first (tools/setup_toolchain.sh)}"
command -v bwrap >/dev/null || { echo "error: bubblewrap (bwrap) is required for KH2_NATIVE=1" >&2; exit 1; }
[ $# -gt 0 ] || set -- bash
# A symlinked SLPM_666.75 must resolve inside the sandbox too: expose its target read-only at
# the same path.
EXTRA=()
if [ -L "$ROOT/SLPM_666.75" ]; then
  SLPM_REAL="$(readlink -f "$ROOT/SLPM_666.75")"
  EXTRA=(--ro-bind "$SLPM_REAL" "$SLPM_REAL")
fi
exec bwrap --unshare-all --die-with-parent --new-session \
  --ro-bind /usr /usr --symlink usr/bin /bin --symlink usr/lib /lib --symlink usr/lib /lib64 --symlink usr/bin /sbin \
  --ro-bind-try /etc/ld.so.cache /etc/ld.so.cache --ro-bind-try /etc/passwd /etc/passwd \
  --ro-bind-try /usr/lib32 /lib32 \
  --tmpfs /usr/local/bin \
  --symlink /opt/ps2/gcc/bin/ee-as /usr/local/bin/as --symlink /opt/ps2/gcc/bin/ee-ld /usr/local/bin/ld \
  --ro-bind "$KH2_OBJDIFF_DIR/objdiff-cli" /usr/local/bin/objdiff-cli \
  --ro-bind "$PS2_TOOLCHAIN" /opt/ps2/gcc \
  --bind "$ROOT" /work "${EXTRA[@]}" --tmpfs /tmp --proc /proc --dev /dev --tmpfs /home \
  --setenv PATH /usr/local/bin:/usr/bin --setenv HOME /tmp --setenv PS2_TOOLCHAIN /opt/ps2/gcc \
  --chdir /work "$@"
