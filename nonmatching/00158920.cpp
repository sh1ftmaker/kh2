// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0034a9a0 asm("D_0034a9a0");

// 0x00158920 func_00158920
void func_00158920(u32 a0) asm("func_00158920");
void func_00158920(u32 a0) {
    if ((a0 != (u32)&D_0034a9a0)) {
        *(Q16*)((u32)&D_0034a9a0) = *(Q16*)(a0);
    }
    return;
}
