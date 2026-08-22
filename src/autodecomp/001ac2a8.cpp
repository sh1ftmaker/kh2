// coverage: addr=0x001ac2a8 symbol=_Z16wtarget_001ac2a8jjjj size=100 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:98.6;ghidra:near:76.83
#include "common/types.h"

extern "C" void func_00239bf8(u32, u32, u32, u32) asm("func_00239bf8");

// 0x001ac2a8 wtarget_001ac2a8(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001ac2a8(u32 a0, u32 a1, u32 a2, u32 a3) asm("_Z16wtarget_001ac2a8jjjj");
void lift_001ac2a8(u32 a0, u32 a1, u32 a2, u32 a3) {
    if (((s32)(a1) != 0)) {
        func_00239bf8(a0 + 0xc, a1 + 1, a2, a3);
    }
    *(u32*)(a0) = a1;
    *(u32*)((a0 + 4)) = a2;
    *(u32*)((a0 + 8)) = a3;
    return;
}
