// coverage: addr=0x00242368 symbol=func_00242368 size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:near:99.23;m2c:near:92.0
#include "common/types.h"

extern "C" u32 D_0035ecbc asm("D_0035ecbc");

// 0x00242368 func_00242368
void func_00242368(u32 a0) asm("func_00242368");
void func_00242368(u32 a0) {
    if (((s32)(a0) != 0)) {
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ecbc)) + 4))))(*(u32*)(&D_0035ecbc), a0);
    }
    return;
}
