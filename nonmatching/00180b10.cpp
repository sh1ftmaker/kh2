// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00198580(u32, u32) asm("func_00198580");

// 0x00180b10 func_00180b10
u32 func_00180b10(u32 a0, u32 a1) asm("func_00180b10");
u32 func_00180b10(u32 a0, u32 a1) {
    u32 s0;
    u32 t5;
    u32 t6;
    u32 t5_0;
    u32 t5_1;
    u32 t7;
    u32 s0_2;
    u32 s0_3;
    u32 v0;
    u32 s0_4;
    s0 = 0xffffffff;
    t5 = 0;
    t6 = (a0 + 0x100);
    do {
        if ((*(u32*)((t6 + 8)) == 0)) {
            t5_0 = (t5 + 1);
            s0 = t5;
            t5 = t5_0;
            t7 = ((s32)(t5_0) < (s32)(8));
        } else {
            if ((*(u32*)((t6 + 0xc)) == a1)) {
                return;
            }
            t5_1 = (t5 + 1);
            t5 = t5_1;
            t7 = ((s32)(t5_1) < (s32)(8));
        }
        t6 = (t6 + 8);
    } while (((s32)(t7) != 0));
    s0_2 = (s0 << 3);
    s0_3 = (s0_2 + a0);
    v0 = func_00198580(*(u32*)((a0 + 8)), a1);
    s0_4 = (s0_3 + 0x100);
    *(u32*)((s0_4 + 8)) = v0;
    *(u32*)((s0_4 + 0xc)) = a1;
    return v0;
}
