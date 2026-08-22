// coverage: addr=0x001ca988 symbol=func_001ca988 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:85.0;m2c:near:37.67
#include "common/types.h"

extern "C" u32 func_001c6fa8(u32, u32) asm("func_001c6fa8");

// 0x001ca988 func_001ca988
u32 func_001ca988(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("func_001ca988");
u32 func_001ca988(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    u32 v0;
    v0 = func_001c6fa8(a0, a1);
    *(u32*)((a0 + 0x54)) = a5;
    *(u32*)((a0 + 0x58)) = 0;
    return v0;
}
