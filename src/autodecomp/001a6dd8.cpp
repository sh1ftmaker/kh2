// coverage: addr=0x001a6dd8 symbol=func_001a6dd8 size=176 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:76.04;m2c:near:63.69
#include "common/types.h"

extern "C" u32 D_01c6cb78 asm("D_01c6cb78");
extern "C" u32 D_01c6cb7c asm("D_01c6cb7c");
extern "C" u32 func_00102c48(u32, u32, u32, u32) asm("func_00102c48");
extern "C" u32 func_001b8680(u32, u32, u32, u32, u32) asm("func_001b8680");

// 0x001a6dd8 func_001a6dd8
u32 func_001a6dd8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_001a6dd8");
u32 func_001a6dd8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 t5;
    u32 v0;
    if (((s32)(*(u32*)((a0 + 4))) == 0)) {
        *(u32*)((a0 + 4)) = func_001b8680(*(u32*)(a0), a4, a2, a3, a4);
    }
    *(u32*)(&D_01c6cb78) = a1;
    *(u32*)(&D_01c6cb7c) = *(u32*)(a2);
    t5 = ((u32)&D_01c6cb78 + 4);
    *(u32*)((t5 + 4)) = *(u32*)((a2 + 4));
    *(u32*)((t5 + 8)) = *(u32*)((a2 + 8));
    *(u32*)((t5 + 0xc)) = *(u32*)((a2 + 0xc));
    *(u32*)((t5 + 0x10)) = *(u32*)((a2 + 0x10));
    v0 = func_00102c48(1, 0x3a98, a3, 0x1000);
    *(u32*)((v0 + 4)) = a0;
    return v0;
}
