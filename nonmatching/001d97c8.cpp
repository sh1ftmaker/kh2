// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032fafe asm("D_0032fafe");

// 0x001d97c8 func_001d97c8
void func_001d97c8() asm("_ZN2YS13BATTLE_REPORT20IncrementFriendRecovEv");
void func_001d97c8() {
    if (((u32)((*(u16*)(((u32)&D_0032fafe + 2)) & 0xffff)) < (u32)(0x3e7))) {
        *(u16*)(((u32)&D_0032fafe + 2)) = (*(u16*)(((u32)&D_0032fafe + 2)) + 1);
    }
    return;
}
