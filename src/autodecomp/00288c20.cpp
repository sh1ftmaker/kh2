// coverage: addr=0x00288c20 symbol=func_00288c20 size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:near:99.23;m2c:near:92.0;e3:near:38.46
#include "common/types.h"

extern "C" u32 D_0035f34c asm("D_0035f34c");

// 0x00288c20 func_00288c20
void func_00288c20(u32 a0) asm("func_00288c20");
void func_00288c20(u32 a0) {
    if (((s32)(a0) != 0)) {
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f34c)) + 4))))(*(u32*)(&D_0035f34c), a0);
    }
    return;
}
