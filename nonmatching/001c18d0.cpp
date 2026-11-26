// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001c18d0 func_001c18d0
u32 func_001c18d0(u32 a0) asm("_ZN2YS10MASSEFFECT4execEv");
u32 func_001c18d0(u32 a0) {
    u32 t7;
    u32 t7_0;
    u32 t7_1;
    if (((s32)(((u32(*)(u32))(*(u32*)((a0 + 0x10))))(a0)) != 0)) {
        if (((s32)(*(u32*)((a0 + 0x20))) != 0)) {
            if ((*(u32*)((*(u32*)((a0 + 0x1c)) + 4)) != 0)) {
                t7 = (*(u32*)((*(u32*)((a0 + 0x1c)) + 4)) != 1) ? 0 : *(u8*)((*(u32*)((a0 + 0x20)) + 0xd));
                t7_0 = t7;
            } else {
                t7_0 = *(u8*)((*(u32*)((a0 + 0x20)) + 0xf));
            }
            *(u8*)((a0 + 0x17)) = t7_0;
        }
        t7_1 = 1;
    } else {
        t7_1 = 0;
    }
    return t7_1;
}
