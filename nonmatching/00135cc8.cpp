// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00135cc8 func_00135cc8
void func_00135cc8(u32 a0, u32 a1, u32 a2) asm("func_00135cc8");
void func_00135cc8(u32 a0, u32 a1, u32 a2) {
    u32 t5;
    u32 t6;
    u32 t7;
    t5 = *(u32*)((a0 + 0xc));
    if (((s32)(t5) > 0)) {
        t6 = 0;
        do {
            t7 = *(u32*)((a0 + 0x10));
            if ((t7 == a1)) {
                *(u32*)((a0 + 0x10)) = a2;
                return;
            }
            a0 = (a0 + 4);
            t6 = (t6 + 1);
        } while (((s32)(((s32)(t6) < (s32)(t5))) != 0));
        return;
    } else {
        return;
    }
}
