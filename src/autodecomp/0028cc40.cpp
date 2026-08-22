// coverage: addr=0x0028cc40 symbol=func_0028cc40 size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:near:99.23;m2c:near:92.0
#include "common/types.h"

extern "C" u32 D_0035f3f8 asm("D_0035f3f8");

// 0x0028cc40 func_0028cc40
void func_0028cc40(u32 a0) asm("func_0028cc40");
void func_0028cc40(u32 a0) {
    if (((s32)(a0) != 0)) {
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f3f8)) + 4))))(*(u32*)(&D_0035f3f8), a0);
    }
    return;
}
