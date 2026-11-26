// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001b1be0(u32, u32, u32, u32, u32) asm("func_001b1be0");

// 0x001b1bb8 func_001b1bb8
u32 func_001b1bb8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_001b1bb8");
u32 func_001b1bb8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    *(u8*)((a0 + 0x14)) = a1;
    *(u8*)(((a0 + 0x14) + 1)) = a2;
    *(u8*)(((a0 + 0x14) + 2)) = a3;
    *(u8*)(((a0 + 0x14) + 3)) = a4;
    return func_001b1be0(a0, a1, a2, a3, a4);
}
