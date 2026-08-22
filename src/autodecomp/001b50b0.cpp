// coverage: addr=0x001b50b0 symbol=func_001b50b0 size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:63.09
#include "common/types.h"

extern "C" u32 func_001802d8(u32, u32, u32, u32, u32, u32) asm("func_001802d8");

// 0x001b50b0 func_001b50b0
u32 func_001b50b0(u32 a0, u32 a1, u32 a2) asm("func_001b50b0");
u32 func_001b50b0(u32 a0, u32 a1, u32 a2) {
    return func_001802d8(0, *(u32*)((a0 + 8)), a0 + 0x18, a1, a2, a0 + 0x3c);
}
