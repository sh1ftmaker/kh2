// coverage: addr=0x002908f0 symbol=_Z16u_call4_002908f0jjjj size=76 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:96.84;m2c:near:96.84
#include "common/types.h"

extern "C" void func_00106450(u32) asm("func_00106450");
extern "C" void func_00290a60(u32) asm("func_00290a60");

// 0x002908f0 u_call4_002908f0(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_002908f0(u32 a0) asm("_Z16u_call4_002908f0jjjj");
void lift_002908f0(u32 a0) {
    if (((s32)(*(u8*)((a0 + 0x10))) != 0)) {
        func_00290a60(a0);
    }
    *(u32*)((a0 + 4)) = 0;
    if (((s32)(*(u32*)((a0 + 0x14))) != 0)) {
        func_00106450(*(u32*)((a0 + 0x14)));
        *(u32*)((a0 + 0x14)) = 0;
    }
    return;
}
