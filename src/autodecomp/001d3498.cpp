// coverage: addr=0x001d3498 symbol=func_001d3498 size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:98.31
#include "common/types.h"


// 0x001d3498 func_001d3498
u32 func_001d3498(u32 a0, u32 a1) asm("func_001d3498");
u32 func_001d3498(u32 a0, u32 a1) {
    u32 v0;
    v0 = ((s32)(a1) == 0) ? (a0 + 8) : ((a1 ^ ((a0 + (*(u32*)((a0 + 4)) * 0x60)) + -0x58)) ? (a1 + 0x60) : 0);
    return v0;
}
