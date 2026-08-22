// coverage: addr=0x001c6ea0 symbol=func_001c6ea0 size=68 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:86.32;m2c:near:60.29
#include "common/types.h"

extern "C" u32 D_00351d38 asm("D_00351d38");
extern "C" u32 func_001c23a8(u32, u32, u32, u32, u32, u32, u32) asm("func_001c23a8");

// 0x001c6ea0 func_001c6ea0
u32 func_001c6ea0(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_001c6ea0");
u32 func_001c6ea0(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 v0;
    v0 = func_001c23a8(a0, a1, 0, 1, 0, a3, a2);
    *(u32*)(a0) = (u32)&D_00351d38;
    return v0;
}
