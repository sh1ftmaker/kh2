// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f4dc asm("D_0035f4dc");
extern "C" u32 D_0035f4e0 asm("D_0035f4e0");

// 0x00292af0 func_00292af0
void func_00292af0(u32 a0) asm("func_00292af0");
void func_00292af0(u32 a0) {
    u32 t5;
    u32 t7;
    u32 t6;
    if (((s32)(*(s16*)(&D_0035f4e0)) > 0)) {
        t5 = 0;
        t7 = *(u16*)(*(u32*)(&D_0035f4dc));
        t6 = *(u32*)(&D_0035f4dc);
        do {
            if ((*(u16*)((t6 + (t5 * 4))) == a0)) {
                return;
            }
            t5 = (t5 + 1);
            t7 = ((s32)(t5) < (s32)(*(s16*)(&D_0035f4e0)));
        } while ((t7 != 0));
        return;
    } else {
        return;
    }
}
