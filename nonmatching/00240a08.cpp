// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ec90 asm("D_0035ec90");
extern "C" u32 func_00105870(u32) asm("func_00105870");
extern "C" u32 func_002409b8(u32) asm("func_002409b8");

// 0x00240a08 func_00240a08
u32 func_00240a08(u32 a0) asm("func_00240a08");
u32 func_00240a08(u32 a0) {
    u32 a0_0;
    u32 a0_1;
    if (((s32)(a0) == 0)) {
        a0 = *(u32*)(&D_0035ec90);
    }
    if ((func_002409b8(a0) == *(u32*)((a0 + 8)))) {
        a0_0 = (*(u32*)(a0) == func_00105870(0)) ? ((u32)((*(u32*)((a0 + 4)) ^ 0x3a)) < (u32)(1)) : 0;
        a0_1 = a0_0;
    } else {
        a0_1 = 0;
    }
    return a0_1;
}
