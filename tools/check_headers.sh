#!/usr/bin/env bash
# Sweep every header under src/ and verify it compiles standalone
# (i.e. `#include "<header>"` alone forms a valid translation unit).
#
# Usage: tools/check_headers.sh
#
# Requires the PS2 ee-gcc toolchain on PATH (see env.sh) and must be run
# from the repository root.
set -u

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT" || exit 1

CXX="${PS2_TOOLCHAIN:?PS2_TOOLCHAIN not set - did you source env.sh?}/bin/ee-g++"
FLAGS="-O2 -g0 -x c++ -fno-exceptions -fno-rtti -fpermissive -ffunction-sections -I src"

TMPDIR="$(mktemp -d)"
trap 'rm -rf "$TMPDIR"' EXIT

broken=0
total=0

while IFS= read -r hdr; do
    total=$((total + 1))
    rel="${hdr#src/}"
    tu="$TMPDIR/t.cpp"
    printf '#include "%s"\n' "$rel" > "$tu"
    err="$("$CXX" $FLAGS -fsyntax-only "$tu" 2>&1)"
    status=$?
    if [ $status -ne 0 ]; then
        broken=$((broken + 1))
        # This old ee-gcc doesn't print "error:"/"warning:" tags uniformly;
        # drop the noise (pragma-once warnings, "In file included from"
        # context lines) and take the first remaining diagnostic line.
        firstline="$(printf '%s\n' "$err" \
            | grep -v 'pragma once is obsolete' \
            | grep -v '^In file included from' \
            | grep -v '^ *from ' \
            | head -1)"
        echo "BROKEN $rel: $firstline"
    fi
done < <(find src -type f \( -name '*.hpp' -o -name '*.h' \) | sort)

echo "----"
echo "$broken/$total headers broken"

if [ "$broken" -ne 0 ]; then
    exit 1
fi
exit 0
