// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002ba3e8(u32, u32) asm("func_002ba3e8");

// 0x002ba3b8 func_002ba3b8
u32 func_002ba3b8(u32 a0, u32 a1) asm("_ZN5SOUND5setSeENS_11SE_SET_BANKEiiiiPFvPvES1_");
u32 func_002ba3b8(u32 a0, u32 a1) {
    u8 frame[16];
    *(u32*)((u32)frame) = 0xffffffff;
    return func_002ba3e8(a0, a1);
}
