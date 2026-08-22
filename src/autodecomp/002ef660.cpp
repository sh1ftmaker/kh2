// coverage: addr=0x002ef660 symbol=func_002ef660 size=80 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:66.09;ghidra:near:61.09
#include "common/types.h"

extern "C" u32 func_0023a918(u32, u32) asm("func_0023a918");

// 0x002ef660 func_002ef660
u32 func_002ef660(u32 a0, u32 a1) asm("func_002ef660");
u32 func_002ef660(u32 a0, u32 a1) {
    u32 v0;
    v0 = func_0023a918(a1 + 0x1d4, a1 + 0x1d4);
    *(u8*)(a0) = v0;
    *(u8*)((a0 + 1)) = (v0 >> 8);
    *(u8*)((a0 + 2)) = (v0 >> 0x10);
    *(u8*)((a0 + 3)) = (v0 >> 0x18);
    return a0;
}
