// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002e9b58(u32, u32, u32) asm("func_002e9b58");

// 0x002e9c98 func_002e9c98
u32 func_002e9c98(u32 a0, u32 a1) asm("_ZN2Ts15TARGET_SEARCHER3addEPN2YS6TARGETE");
u32 func_002e9c98(u32 a0, u32 a1) {
    return func_002e9b58(a0, *(u32*)(a1), *(u32*)((a1 + 4)));
}
