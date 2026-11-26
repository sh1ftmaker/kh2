// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00189228 func_00189228
void func_00189228(u32 a0, u32 a1) asm("_ZN2YS14SAVERAM_BATTLE11inc_rccountEi");
void func_00189228(u32 a0, u32 a1) {
    if (((u32)((*(u16*)(((((a1 << 1) + a0) + 0x1450) + 8)) & 0xffff)) < (u32)(0x3e7))) {
        *(u16*)(((((a1 << 1) + a0) + 0x1450) + 8)) = (*(u16*)(((((a1 << 1) + a0) + 0x1450) + 8)) + 1);
    }
    return;
}
