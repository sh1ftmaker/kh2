// coverage: addr=0x001e2998 symbol=func_001e2998 size=72 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:91.47
#include "common/types.h"

extern "C" u32 D_00352bd0 asm("D_00352bd0");
extern "C" void func_00105110(u32) asm("func_00105110");
extern "C" void func_001e2898(u32) asm("func_001e2898");

// 0x001e2998 func_001e2998
void func_001e2998() asm("func_001e2998");
void func_001e2998() {
    u32 s0;
    if (((s32)(*(u32*)(&D_00352bd0)) != 0)) {
        s0 = *(u32*)(&D_00352bd0);
        func_001e2898(*(u32*)(&D_00352bd0));
        func_00105110(s0);
    }
    *(u32*)(&D_00352bd0) = 0;
    return;
}
