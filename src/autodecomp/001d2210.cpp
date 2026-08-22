// coverage: addr=0x001d2210 symbol=_Z16u_call4_001d2210jjjj size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:83.85;m2c:near:83.85
#include "common/types.h"


// 0x001d2210 u_call4_001d2210(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001d2210(u32 a0) asm("_Z16u_call4_001d2210jjjj");
void lift_001d2210(u32 a0) {
    if (((s32)((*(u32*)((a0 + 0xc)) & 4)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 8))))(a0);
    }
    return;
}
