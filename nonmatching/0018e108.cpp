// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0034eef0 asm("D_0034eef0");
extern "C" u32 D_0034ef00 asm("D_0034ef00");

// 0x0018e108 func_0018e108
void func_0018e108(u32 a0, u32 a1) asm("_ZN2YS6ATTACK13SetHitmarkPosERKN2kn7FVectorES4_");
void func_0018e108(u32 a0, u32 a1) {
    if ((a0 != (u32)&D_0034eef0)) {
        *(Q16*)((u32)&D_0034eef0) = *(Q16*)(a0);
    }
    if ((a1 != (u32)&D_0034ef00)) {
        *(Q16*)((u32)&D_0034ef00) = *(Q16*)(a1);
    }
    return;
}
