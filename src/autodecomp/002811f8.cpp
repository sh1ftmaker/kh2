// coverage: addr=0x002811f8 symbol=func_002811f8 size=60 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:45.56;m2c:compile:0.0
#include "common/types.h"


// 0x002811f8 func_002811f8
u32 func_002811f8(u32 a0, u32 a1) asm("func_002811f8");
u32 func_002811f8(u32 a0, u32 a1) {
    u32 t5;
    u32 t7;
    t5 = 0;
    if (((s32)(*(u32*)(a0)) > 0)) {
        t7 = *(s16*)((a0 + 4));
        do {
            if ((*(s16*)(((a0 + (t5 * 0x14)) + 4)) == a1)) {
                break;
            }
            t5 = (t5 + 1);
            t7 = ((s32)(t5) < (s32)(*(u32*)(a0)));
        } while ((t7 != 0));
    }
    return (((s32)(t5) < (s32)(*(u32*)(a0))) ? t5 : 0xffffffff);
}
