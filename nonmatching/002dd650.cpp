// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002dd650 func_002dd650
u32 func_002dd650(u32 a0) asm("func_002dd650");
u32 func_002dd650(u32 a0) {
    u32 t7;
    u32 t5;
    u32 t3;
    u32 t5_0;
    u32 t4;
    u32 t7_1;
    u32 a0_2;
    u32 t7_3;
    t7 = *(u8*)(((a0 + 0x8000) + 0x90));
    t5 = ((s32)(t7) == 0) ? ((u32)(0) < (u32)(*(u8*)(((a0 + 0x8000) + 0x6c)))) : 2;
    t3 = *(u32*)((((t5 << 2) + a0) + 0x74));
    t5_0 = *(u32*)((t3 + 8));
    if (((s32)(t5_0) > 0)) {
        t4 = 0;
        t7_1 = *(s16*)((t3 + 0x10));
        do {
            a0_2 = *(u32*)(((a0 + 0x8000) + 0x74));
            t7_3 = *(s16*)(((t3 + (t4 * 0x20)) + 0x10));
            if (((s32)(((s32)(t7_3) < (s32)(a0_2))) == 0)) {
                return ((t3 + (t4 * 0x20)) + 0x10);
            }
            t4 = (t4 + 1);
            t7_1 = ((s32)(t4) < (s32)(t5_0));
        } while ((t7_1 != 0));
    }
    return ((t3 + (t5_0 << 5)) + -0x10);
}
