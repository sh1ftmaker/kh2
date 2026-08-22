#!/usr/bin/env bash
# fetch_e3.sh -- install the large E3-context assets (out/e3pilot/raw, cand,
# out/names/src, out/e3pilot/hdr_ps2) that tools/rig/get_context.py reads via
# $KH2_E3_DATA. The small assets (predictions.tsv, map_functions.tsv, ...)
# ship in the repo under data/e3/ and need no fetch step.
#
# Usage:
#   tools/rig/fetch_e3.sh <url-or-local-path-to-tarball> [dest-dir]
#
#   tools/rig/fetch_e3.sh https://example.com/e3-context-2026-08-22.tar.zst
#   tools/rig/fetch_e3.sh /data/agent-tom/kh2/e3-dist/e3-context-2026-08-22.tar.zst
#
# The tarball must ship next to a SHA256SUMS file (same directory, for a local
# path; same URL directory, for a remote one) listing the tarball's checksum --
# fetch_e3.sh refuses to extract without a verified match.
#
# dest-dir defaults to $KH2_E3_DATA, or ~/.cache/kh2-e3 if that is unset --
# the same default get_context.py itself falls back to, so a plain
#   tools/rig/fetch_e3.sh <tarball>
# followed by using the rig with no extra environment just works.
#
# See docs/rig/E3_CAMPAIGN.md for what the E3 context is and how to refresh it.
set -euo pipefail

SRC="${1:?usage: fetch_e3.sh <url-or-local-path-to-tarball> [dest-dir]}"
DEST="${2:-${KH2_E3_DATA:-$HOME/.cache/kh2-e3}}"

WORK="$(mktemp -d)"
trap 'rm -rf "$WORK"' EXIT

is_url() { [[ "$1" =~ ^https?:// ]]; }

TARBALL="$WORK/$(basename "$SRC")"
SUMS="$WORK/SHA256SUMS"

if is_url "$SRC"; then
    SUMS_URL="$(dirname "$SRC")/SHA256SUMS"
    echo "fetching $SRC" >&2
    curl -fSL -o "$TARBALL" "$SRC"
    echo "fetching $SUMS_URL" >&2
    curl -fSL -o "$SUMS" "$SUMS_URL"
else
    SRC_DIR="$(cd "$(dirname "$SRC")" && pwd)"
    SRC="$SRC_DIR/$(basename "$SRC")"
    [[ -f "$SRC" ]] || { echo "error: no such file: $SRC" >&2; exit 1; }
    [[ -f "$SRC_DIR/SHA256SUMS" ]] || { echo "error: no SHA256SUMS next to $SRC" >&2; exit 1; }
    cp "$SRC" "$TARBALL"
    cp "$SRC_DIR/SHA256SUMS" "$SUMS"
fi

BASE="$(basename "$TARBALL")"
if ! grep -q "  *${BASE}\$" "$SUMS"; then
    echo "error: SHA256SUMS has no entry for $BASE" >&2
    exit 1
fi
echo "verifying checksum" >&2
( cd "$WORK" && grep "  *${BASE}\$" SHA256SUMS | sha256sum -c - )

mkdir -p "$DEST"
echo "extracting to $DEST" >&2
case "$BASE" in
    *.tar.zst) tar --zstd -xf "$TARBALL" -C "$DEST" ;;
    *.tar.gz|*.tgz) tar -xzf "$TARBALL" -C "$DEST" ;;
    *.tar) tar -xf "$TARBALL" -C "$DEST" ;;
    *) echo "error: unrecognized tarball extension: $BASE" >&2; exit 1 ;;
esac

echo "done. KH2_E3_DATA=$DEST" >&2
echo "$DEST"
