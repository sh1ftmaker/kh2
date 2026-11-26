// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2fe48 asm("D_01e2fe48");
extern "C" u32 func_002f4f60(u32) asm("func_002f4f60");

// 0x002f5e20 func_002f5e20
u32 func_002f5e20(u32 a0) asm("func_002f5e20");
u32 func_002f5e20(u32 a0) {
    u32 v0;
    v0 = func_002f4f60(a0);
    if (((s32)(v0) >= 0)) {
        *(u32*)(((a0 * 0x334) + (u32)&D_01e2fe48)) = 0;
        *(u32*)((((u32)&D_01e2fe48 + (a0 * 0x334)) + 4)) = 0;
        *(u32*)((((u32)&D_01e2fe48 + (a0 * 0x334)) + 0xc)) = 0;
        v0 = 1;
    }
    return v0;
}
