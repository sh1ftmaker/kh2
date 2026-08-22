// coverage: addr=0x002c5238 symbol=func_002c5238 size=92 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:39.74;e3:near:22.35
#include "common/types.h"


// 0x002c5238 func_002c5238
u32 func_002c5238(u32 a0, u32 a1, u32 a2) asm("func_002c5238");
u32 func_002c5238(u32 a0, u32 a1, u32 a2) {
    u32 a1_0;
    u32 t3;
    u32 t5;
    a1_0 = (a1 + -1);
    t3 = 0;
    t5 = (((a1 + -1) << 2) + a2);
    do {
        if ((a0 == 0)) {
            *(u32*)(t5) = 0;
        } else {
            *(u32*)(t5) = ((s32)(a0) % 0xa);
            a0 = ((s32)(a0) / 0xa);
            t3 = (t3 + 1);
        }
        a1_0 = (a1_0 + -1);
        t5 = (t5 + -4);
    } while (((s32)(a1_0) >= 0));
    return (t3 ? t3 : 1);
}
