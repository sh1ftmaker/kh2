// coverage: addr=0x002ba5d0 symbol=func_002ba5d0 size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:63.64
#include "common/types.h"

extern "C" u32 func_002baf48(u32, u32, u32, u32, u32, u32) asm("func_002baf48");

// 0x002ba5d0 func_002ba5d0
u32 func_002ba5d0(u32 a0, u32 a1) asm("func_002ba5d0");
u32 func_002ba5d0(u32 a0, u32 a1) {
    return func_002baf48(0xa, 1, a0, a1, 0, 0);
}
