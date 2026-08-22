// coverage: addr=0x002cebc8 symbol=func_002cebc8 size=64 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:94.06;ghidra:near:74.69;e3:near:70.0
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");

// 0x002cebc8 func_002cebc8
u32 func_002cebc8(u32 a0) asm("func_002cebc8");
u32 func_002cebc8(u32 a0) {
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u32*)(&D_00361f60)) != 0)) {
        v0 = ((u32(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_00361f60)) + 0x10))))(*(u32*)(&D_00361f60), a0);
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    return v0_0;
}
