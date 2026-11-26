// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002b6708(u32, u32, u32, u32, u32) asm("func_002b6708");

// 0x002b6f28 func_002b6f28
u32 func_002b6f28(u32 a0, u32 a1, u32 a2) asm("func_002b6f28");
u32 func_002b6f28(u32 a0, u32 a1, u32 a2) {
    u32 loc_0;
    *(u32*)((u32)&loc_0) = a0;
    *(u32*)(((u32)&loc_0 + 4)) = a1;
    *(u32*)(((u32)&loc_0 + 8)) = a2;
    return func_002b6708(4, 0xe, *(u32*)((u32)&loc_0), *(u32*)(((u32)&loc_0 + 4)), *(u32*)(((u32)&loc_0 + 8)));
}
