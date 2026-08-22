// coverage: addr=0x00242088 symbol=func_00242088 size=68 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:99.94
#include "common/types.h"

extern "C" u32 func_001064a8(u32) asm("func_001064a8");

// 0x00242088 func_00242088
u32 func_00242088(u32 a0) asm("func_00242088");
u32 func_00242088(u32 a0) {
    u32 s1;
    u32 s0;
    u32 v0_0;
    s1 = 0xff;
    s0 = *(u32*)((a0 + 4));
    do {
        v0_0 = func_001064a8(0xffffffff);
        *(u32*)((s0 + ((s1 - 0xff) * -4))) = v0_0;
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return v0_0;
}
