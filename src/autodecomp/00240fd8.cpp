// coverage: addr=0x00240fd8 symbol=func_00240fd8 size=44 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:84.23;m2c:near:63.0
#include "common/types.h"

extern "C" u32 D_0035ec94 asm("D_0035ec94");

// 0x00240fd8 func_00240fd8
void func_00240fd8(u32 a0, u32 a1) asm("func_00240fd8");
void func_00240fd8(u32 a0, u32 a1) {
    if (((s32)(a0) < 0)) {
        a0 = *(s8*)((*(u32*)(&D_0035ec94) + 1));
    }
    *(u32*)((((a0 << 5) + *(u32*)(&D_0035ec94)) + 8)) = (*(u32*)((((a0 << 5) + *(u32*)(&D_0035ec94)) + 8)) | a1);
    return;
}
