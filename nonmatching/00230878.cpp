// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035dce8 asm("D_0035dce8");

// 0x00230878 func_00230878
void func_00230878(u32 a0) asm("func_00230878");
void func_00230878(u32 a0) {
    u32 t4;
    u32 t6;
    t4 = 0;
    t6 = *(u32*)(&D_0035dce8);
    do {
        if (((s32)(*(u32*)(((t4 << 3) + *(u32*)(&D_0035dce8)))) != 0)) {
            if ((*(s16*)((*(u32*)(((t4 << 3) + *(u32*)(&D_0035dce8))) + 4)) == *(s16*)((a0 + 4)))) {
                *(u32*)((((t4 << 3) + *(u32*)(&D_0035dce8)) + 4)) = a0;
                return;
            }
        }
        t4 = (t4 + 1);
        t6 = ((s32)(t4) < (s32)(0x40));
    } while ((t6 != 0));
    return;
}
