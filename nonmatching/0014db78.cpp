// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001666d0(u32, u32, u32, u32, u32, u32) asm("func_001666d0");

// 0x0014db78 func_0014db78
u32 func_0014db78(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("func_0014db78");
u32 func_0014db78(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    u32 v0;
    v0 = func_001666d0(a0, a1 & 0xffff, a2, a3 & 0xffff, a4 & 0xffff, a5);
    *(u32*)((a0 + 0x1d0)) = a6;
    *(u16*)((a0 + 0x1d4)) = (a5 & 0xffff);
    return v0;
}
