// coverage: addr=0x002ba6f0 symbol=func_002ba6f0 size=212 class=branchy source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:96.13;ghidra:near:75.24;m2c:near:40.62
#include "common/types.h"

extern "C" u32 D_01e2a410 asm("D_01e2a410");
extern "C" u32 func_002bccd8(u32, u32, u32, u32, u32, u32) asm("func_002bccd8");
extern "C" void func_002baf48(u32, u32, u32, u32, u32, u32) asm("func_002baf48");
extern "C" void func_002bce10(u32, u32) asm("func_002bce10");

// 0x002ba6f0 func_002ba6f0
u32 func_002ba6f0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("func_002ba6f0");
u32 func_002ba6f0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    *(u32*)(a5) = 0xffffffff;
    u32 loc_0;
    loc_0 = 0xffffffff;
    if (((s32)(func_002bccd8((u32)&D_01e2a410, a0, a1, a3, a5, (u32)&loc_0)) != 0)) {
        func_002baf48(*(u32*)(a5), 0, a1, a2, 0, 0);
        if (((s32)(a3) != 0)) {
            func_002baf48(*(u32*)(a5), 1, a3, a4, 0, 0);
        }
        func_002bce10((u32)&D_01e2a410, *(u32*)(a5));
    }
    return loc_0;
}
