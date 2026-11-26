// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001e0cc8(u32) asm("func_001e0cc8");
extern "C" u32 func_001e0ce8(u32) asm("func_001e0ce8");

// 0x001e0de8 func_001e0de8
u32 func_001e0de8(u32 a0) asm("func_001e0de8");
u32 func_001e0de8(u32 a0) {
    u32 v0;
    u32 v0_0;
    v0 = func_001e0cc8(a0);
    if ((a0 != v0)) {
        *(Q16*)(a0) = *(Q16*)(v0);
    }
    *(u32*)((a0 + 0xc)) = 0;
    v0_0 = func_001e0ce8(a0);
    if (((a0 + 0x10) != v0_0)) {
        *(Q16*)((a0 + 0x10)) = *(Q16*)(v0_0);
    }
    return v0_0;
}
