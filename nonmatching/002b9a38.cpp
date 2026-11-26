// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002b6708(u32, u32, u32) asm("func_002b6708");

// 0x002b9a38 func_002b9a38
u32 func_002b9a38(u32 a0) asm("func_002b9a38");
u32 func_002b9a38(u32 a0) {
    u8 frame[16];
    *(u32*)((u32)frame) = a0;
    return func_002b6708(2, 0x35, *(u32*)((u32)frame));
}
