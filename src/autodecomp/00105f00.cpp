// coverage: addr=0x00105f00 symbol=func_00105f00 size=128 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:75.64;ghidra:near:61.33
#include "common/types.h"

extern "C" u32 D_0033cbb8 asm("D_0033cbb8");
extern "C" u32 func_002ff3fc(u32) asm("func_002ff3fc");
extern "C" u32 func_002ff538(u32, u32, u32) asm("func_002ff538");

// 0x00105f00 func_00105f00
u32 func_00105f00(u32 a0) asm("func_00105f00");
u32 func_00105f00(u32 a0) {
    u32 s0;
    u32 s1;
    if ((func_002ff3fc(a0) == 2)) {
        s0 = 0;
        s1 = (u32)&D_0033cbb8;
        do {
            if (((s32)(func_002ff538(a0, *(u32*)((s1 + (s0 * 4))), 2)) == 0)) {
                return s0;
            }
            s0 = (s0 + 1);
        } while (((s32)(s0) < (s32)(0x13)));
    }
    return 0;
}
