// coverage: addr=0x00294550 symbol=func_00294550 size=80 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.5;m2c:near:83.43
#include "common/types.h"

extern "C" u32 D_0035f57c asm("D_0035f57c");
extern "C" u32 D_0035f580 asm("D_0035f580");
extern "C" u32 D_0035f581 asm("D_0035f581");

// 0x00294550 func_00294550
void func_00294550() asm("func_00294550");
void func_00294550() {
    *(u8*)(&D_0035f580) = 0;
    *(u8*)(&D_0035f581) = 0;
    if (((s32)(*(u32*)(&D_0035f57c)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f57c)) + 4))))(*(u32*)(&D_0035f57c));
        *(u32*)(&D_0035f57c) = 0;
    }
    return;
}
