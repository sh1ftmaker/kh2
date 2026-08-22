// coverage: addr=0x002ba2e8 symbol=_ZN5SOUND12systemSePlayEii size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;corpus:near:97.9;m2c:near:80.0
#include "common/types.h"

extern "C" u32 func_002b726c(u32, u32, u32, u32, u32) asm("func_002b726c");

// 0x002ba2e8 SOUND::systemSePlay(int, int)
u32 lift_002ba2e8(u32 a0, u32 a1) asm("_ZN5SOUND12systemSePlayEii");
u32 lift_002ba2e8(u32 a0, u32 a1) {
    return func_002b726c(2, a0, a1, 0x3fff, 0x40);
}
