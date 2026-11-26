// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002b78ec(u32) asm("func_002b78ec");

// 0x002b8a70 func_002b8a70
u32 func_002b8a70(u32 a0) asm("func_002b8a70");
u32 func_002b8a70(u32 a0) {
    u32 loc_0;
    u32 v0;
    *(u32*)((u32)&loc_0) = a0;
    v0 = func_002b78ec(*(u32*)((u32)&loc_0) + 0x8000);
    *(u32*)((*(u32*)((u32)&loc_0) + 0x48000)) = 0;
    return v0;
}
