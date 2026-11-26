// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0033caf0 asm("D_0033caf0");
extern "C" u32 D_0033caf4 asm("D_0033caf4");
extern "C" u32 D_003712d0 asm("D_003712d0");
extern "C" u32 func_00105c30() asm("func_00105c30");
extern "C" u32 func_00242e48() asm("func_00242e48");

// 0x00232348 func_00232348
u32 func_00232348() asm("func_00232348");
u32 func_00232348() {
    u32 t7;
    u32 t7_0;
    if ((func_00105c30() == 8)) {
        t7 = ((s32)(func_00242e48()) == 0) ? *(u32*)(&D_0033caf0) : (u32)&D_003712d0;
        t7_0 = t7;
    } else {
        t7_0 = *(u32*)(&D_0033caf4);
    }
    return t7_0;
}
