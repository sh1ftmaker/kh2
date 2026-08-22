// coverage: addr=0x00293f78 symbol=func_00293f78 size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:near:99.23;m2c:near:92.0
#include "common/types.h"

extern "C" u32 D_0035f570 asm("D_0035f570");

// 0x00293f78 func_00293f78
void func_00293f78(u32 a0) asm("func_00293f78");
void func_00293f78(u32 a0) {
    if (((s32)(a0) != 0)) {
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f570)) + 4))))(*(u32*)(&D_0035f570), a0);
    }
    return;
}
