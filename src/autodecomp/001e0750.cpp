// coverage: addr=0x001e0750 symbol=_Z16wtarget_001e0750jjjj size=116 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:0.0
#include "common/types.h"

extern "C" u32 D_00352b60 asm("D_00352b60");
extern "C" u32 func_001e03d0(u32) asm("func_001e03d0");
extern "C" void func_001e03b0(u32, u32) asm("func_001e03b0");

// 0x001e0750 wtarget_001e0750(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001e0750(u32 a0, u32 a1) asm("_Z16wtarget_001e0750jjjj");
void lift_001e0750(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_001e03b0((u32)&D_00352b60, a1);
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            func_001e03d0((u32)&D_00352b60);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
