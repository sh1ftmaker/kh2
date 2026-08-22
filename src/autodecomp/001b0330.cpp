// coverage: addr=0x001b0330 symbol=_Z16u_call4_001b0330jjjj size=64 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:94.12
#include "common/types.h"

extern "C" u32 func_001b0320(u32) asm("func_001b0320");
extern "C" u32 func_002bc358(u32, u32) asm("func_002bc358");

// 0x001b0330 u_call4_001b0330(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_001b0330(u32 a0) asm("_Z16u_call4_001b0330jjjj");
u32 lift_001b0330(u32 a0) {
    u32 v0;
    u32 v0_0;
    v0 = func_001b0320(a0);
    if (((s32)(v0) != 0)) {
        v0_0 = func_002bc358(*(u32*)((a0 + 0x10)), 0);
        *(u32*)((a0 + 0x10)) = 0;
        v0 = v0_0;
    }
    *(u32*)((a0 + 8)) = 0xffffffff;
    return v0;
}
