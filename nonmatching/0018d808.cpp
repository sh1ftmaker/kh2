// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016c028(u32, u32) asm("func_0016c028");

// 0x0018d808 func_0018d808
u32 func_0018d808(u32 a0, u32 a1) asm("_ZN2YS6ATTACK7get_posEv");
u32 func_0018d808(u32 a0, u32 a1) {
    *(Q16*)(a0) = *(Q16*)(func_0016c028(*(u32*)((a1 + 8)), a1));
    return a0;
}
