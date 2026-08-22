// coverage: addr=0x0023f8c8 symbol=_Z16u_call4_0023f8c8jjjj size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.38;m2c:near:95.38
#include "common/types.h"

extern "C" void func_0023fad0(u32) asm("func_0023fad0");

// 0x0023f8c8 u_call4_0023f8c8(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_0023f8c8(u32 a0) asm("_Z16u_call4_0023f8c8jjjj");
void lift_0023f8c8(u32 a0) {
    if (((s32)(*(u8*)((a0 + 0x18))) != 0)) {
        func_0023fad0(a0);
    }
    *(u32*)((a0 + 4)) = 0;
    return;
}
