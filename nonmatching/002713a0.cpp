// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00373a98 asm("D_00373a98");
extern "C" u32 D_00373aa0 asm("D_00373aa0");

// 0x002713a0 func_002713a0
void func_002713a0(u32 a0, u32 a1, u32 a2) asm("func_002713a0");
void func_002713a0(u32 a0, u32 a1, u32 a2) {
    u32 t7;
    if (((s32)(a0) == 0)) {
        t7 = (u32)&D_00373a98;
    } else {
        t7 = (u32)&D_00373aa0;
    }
    *(u32*)(a1) = t7;
    *(u32*)(a2) = 3;
    return;
}
