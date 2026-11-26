// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_002cb890(u32, u32, u32) asm("func_002cb890");

// 0x002cb7c8 func_002cb7c8
u32 func_002cb7c8(u32 a0, u32 a1, u32 a2) asm("func_002cb7c8");
u32 func_002cb7c8(u32 a0, u32 a1, u32 a2) {
    *(Q16*)(a0) = *(Q16*)(func_002cb890(a1, a2, a2));
    return a0;
}
