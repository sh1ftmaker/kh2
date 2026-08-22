// coverage: addr=0x00299550 symbol=func_00299550 size=80 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.5;m2c:near:83.43
#include "common/types.h"

extern "C" u32 D_0035f5a4 asm("D_0035f5a4");
extern "C" u32 D_0035f5a8 asm("D_0035f5a8");
extern "C" u32 D_0035f5a9 asm("D_0035f5a9");

// 0x00299550 func_00299550
void func_00299550() asm("func_00299550");
void func_00299550() {
    *(u8*)(&D_0035f5a8) = 0;
    *(u8*)(&D_0035f5a9) = 0;
    if (((s32)(*(u32*)(&D_0035f5a4)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f5a4)) + 4))))(*(u32*)(&D_0035f5a4));
        *(u32*)(&D_0035f5a4) = 0;
    }
    return;
}
