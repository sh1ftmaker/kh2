// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_004f3800 asm("D_004f3800");

// 0x0015cea0 func_0015cea0
u32 func_0015cea0(u32 a0) asm("func_0015cea0");
u32 func_0015cea0(u32 a0) {
    *(Q16*)(a0) = *(Q16*)((u32)&D_004f3800);
    return a0;
}
