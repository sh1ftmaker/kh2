// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x0016ffc8 func_0016ffc8
u32 func_0016ffc8(u32 a0) asm("func_0016ffc8");
u32 func_0016ffc8(u32 a0) {
    u32 t5;
    u32 t7;
    u32 a0_0;
    u32 t7_1;
    u32 t6;
    u32 t7_2;
    t5 = *(u32*)((a0 + 0x28));
    if (((s32)(t5) < 0)) {
        t7 = *(u8*)(a0);
        if (((s32)(t7) == 0)) {
            a0_0 = *(u32*)((a0 + 0x38));
            t7_1 = (a0_0 + -0x8fc);
            t6 = (a0_0 + -0x96a);
            if (((s32)(((u32)(t7_1) < (u32)(0x64))) == 0)) {
                if (((s32)(((u32)(t6) < (u32)(0xa))) == 0)) {
                    t7_2 = (a0_0 + -0x974);
                    if (((u32)(t7_2) >= (u32)(0xa))) {
                        a0_0 = t5;
                    }
                }
            }
            t5 = a0_0;
        }
    }
    return t5;
}
