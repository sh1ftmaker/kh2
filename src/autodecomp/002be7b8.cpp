// coverage: addr=0x002be7b8 symbol=func_002be7b8 size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:77.0;m2c:near:74.44
#include "common/types.h"

extern "C" u32 D_00361810 asm("D_00361810");
extern "C" u32 func_00185ed8(u32, u32, u32, u32) asm("func_00185ed8");

// 0x002be7b8 func_002be7b8
u32 func_002be7b8(u32 a0, u32 a1, u32 a2) asm("func_002be7b8");
u32 func_002be7b8(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    v0 = func_00185ed8(a0, a1, 4, a2);
    *(u32*)(a0) = (u32)&D_00361810;
    *(u32*)((a0 + 0x588)) = (*(u32*)((a0 + 0x588)) | 0x40000000);
    return v0;
}
