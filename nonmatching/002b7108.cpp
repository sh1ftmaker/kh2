// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002b6708(u32, u32, u32) asm("func_002b6708");

// 0x002b7108 func_002b7108(void*)
u32 lift_002b7108(u32 a0) asm("_Z13func_002b7108Pv");
u32 lift_002b7108(u32 a0) {
    u8 frame[16];
    *(u32*)((u32)frame) = a0;
    return func_002b6708(2, 0x12, *(u32*)((u32)frame));
}
