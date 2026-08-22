// coverage: addr=0x00153100 symbol=func_00153100 size=64 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.38;m2c:near:93.35;e3:near:85.76
#include "common/types.h"

extern "C" u32 D_0034a6f0 asm("D_0034a6f0");

// 0x00153100 func_00153100
void func_00153100() asm("func_00153100");
void func_00153100() {
    if (((s32)(*(u32*)(&D_0034a6f0)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0034a6f0)) + 0x10))))(*(u32*)(&D_0034a6f0));
        *(u32*)(&D_0034a6f0) = 0;
    }
    return;
}
