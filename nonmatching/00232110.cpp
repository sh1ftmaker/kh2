// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035de14 asm("D_0035de14");
extern "C" u32 D_0035de15 asm("D_0035de15");

// 0x00232110 func_00232110
void func_00232110(u32 a0) asm("func_00232110");
void func_00232110(u32 a0) {
    u32 t6;
    *(u8*)(&D_0035de14) = 1;
    t6 = *(s16*)((a0 + 6));
    if (((s32)(t6) != 0)) {
        if ((t6 != 1)) {
            return;
        } else {
            *(u8*)(&D_0035de15) = t6;
            return;
        }
    } else {
        *(u8*)(&D_0035de15) = 0;
        return;
    }
}
