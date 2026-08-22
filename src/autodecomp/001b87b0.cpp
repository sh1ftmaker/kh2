// coverage: addr=0x001b87b0 symbol=_Z16u_tail0_001b87b0v size=76 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:78.16;m2c:near:78.11
#include "common/types.h"

extern "C" u32 D_0032fb68 asm("D_0032fb68");
extern "C" u32 func_001b8da0() asm("func_001b8da0");
extern "C" void func_001b8838(u32) asm("func_001b8838");

// 0x001b87b0 u_tail0_001b87b0()
u32 lift_001b87b0() asm("_Z16u_tail0_001b87b0v");
u32 lift_001b87b0() {
    u32 t5;
    u32 t7;
    u32 t6;
    t5 = 7;
    t7 = (u32)&D_0032fb68;
    t6 = (u32)&D_0032fb68;
    do {
        *(u32*)((t6 + ((t5 - 7) * -4))) = 0;
        t5 = (t5 + -1);
    } while (((s32)(t5) >= 0));
    *(u8*)((t7 + 0x11f)) = 0;
    func_001b8838(0);
    return func_001b8da0();
}
