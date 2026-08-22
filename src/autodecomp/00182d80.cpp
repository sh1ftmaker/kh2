// coverage: addr=0x00182d80 symbol=_Z16u_call0_00182d80v size=108 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:96.32;e3:near:39.98
#include "common/types.h"

extern "C" u32 D_0034ed00 asm("D_0034ed00");
extern "C" u32 D_01c60588 asm("D_01c60588");
extern "C" void func_001827a8(u32) asm("func_001827a8");
extern "C" void func_001828b8(u32) asm("func_001828b8");

// 0x00182d80 u_call0_00182d80()
void lift_00182d80() asm("_Z16u_call0_00182d80v");
void lift_00182d80() {
    u32 s1;
    u32 s0;
    s1 = (*(u32*)(&D_0034ed00) + -1);
    if (((s32)(s1) >= 0)) {
        s0 = ((s1 * 0xc) + (u32)&D_01c60588);
        do {
            if ((s0 != 0)) {
                func_001828b8(s0);
                func_001827a8(s0);
            }
            s0 = (s0 + -0xc);
            s1 = (s1 + -1);
        } while (((s32)(s1) >= 0));
    }
    return;
}
