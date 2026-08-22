// coverage: addr=0x00174858 symbol=func_00174858 size=68 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:63.06
#include "common/types.h"

extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32) asm("func_001de168");

// 0x00174858 func_00174858
u32 func_00174858(u32 a0) asm("func_00174858");
u32 func_00174858(u32 a0) {
    u32 v0;
    v0 = func_001de168(*(u32*)(a0), *(u32*)((a0 + 4)), *(u32*)((a0 + 0xc)), 1, *(u32*)((a0 + 0x10)), *(u32*)((*(u32*)((a0 + 8)) + 4)));
    *(u32*)(a0) = v0;
    return v0;
}
