// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00305a50(u32, u32) asm("func_00305a50");

// 0x00311050 func_00311050
u32 func_00311050(u32 a0, u32 a1) asm("func_00311050");
u32 func_00311050(u32 a0, u32 a1) {
    u8 frame[16];
    *(u32*)((u32)frame) = a0;
    *(u32*)(((u32)frame + 4)) = ((s32)((a1 << 0x18)) >> 0x18);
    return func_00305a50(3, (u32)frame);
}
