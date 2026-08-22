// coverage: addr=0x00293350 symbol=func_00293350 size=104 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.54;m2c:near:83.92
#include "common/types.h"

extern "C" u32 D_002933b8 asm("D_002933b8");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");
extern "C" u32 func_00103eb0(u32, u32, u32) asm("func_00103eb0");

// 0x00293350 func_00293350
u32 func_00293350(u32 a0, u32 a1, u32 a2) asm("func_00293350");
u32 func_00293350(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    v0 = func_00102818(*(u32*)((func_00103eb0(a0, a1, a2) + 4)), 0, 0x222e0, (u32)&D_002933b8, 0x1000);
    *(u32*)((v0 + 4)) = a0;
    *(u32*)((v0 + 8)) = a1;
    *(u32*)((v0 + 0xc)) = a2;
    return v0;
}
