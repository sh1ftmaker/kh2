// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00305a50(u32, u32, u16) asm("func_00305a50");

// 0x00311100 func_00311100
u32 func_00311100(u32 a0, u32 a1, u16 a2) asm("func_00311100");
u32 func_00311100(u32 a0, u32 a1, u16 a2) {
    u8 frame[16];
    *(u32*)((u32)frame) = a0;
    *(u32*)(((u32)frame + 4)) = a1;
    *(u32*)(((u32)frame + 8)) = a2;
    return func_00305a50(0xfffffffb, (u32)frame, a2);
}
