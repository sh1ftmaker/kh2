// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f634 asm("D_0035f634");

// 0x002b16d8 func_002b16d8
u32 func_002b16d8() asm("func_002b16d8");
u32 func_002b16d8() {
    u32 t6;
    u32 t5;
    u32 t4;
    u32 v0;
    t6 = *(u32*)(&D_0035f634);
    t5 = *(u32*)((t6 + 0x5afc));
    t4 = *(u32*)((t6 + 0x55fc));
    if ((t4 == 0x7e)) {
        v0 = ((u32)((t5 ^ 0x81)) < (u32)(1));
    } else {
        v0 = 0;
    }
    return v0;
}
