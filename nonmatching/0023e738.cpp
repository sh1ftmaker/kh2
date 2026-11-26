// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x0023e738 func_0023e738
void func_0023e738(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2Tz7MenuObj12SetAdjustPosEiss");
void func_0023e738(u32 a0, u32 a1, u32 a2, u32 a3) {
    *(u16*)((((a1 << 1) + a0) + 0xb70)) = ((s32)((a2 << 0x10)) >> 0x10);
    *(u16*)(((((a1 << 1) + a0) + 0xb70) + 8)) = ((s32)((a3 << 0x10)) >> 0x10);
}
