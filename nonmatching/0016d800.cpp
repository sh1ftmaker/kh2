// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0017d348(u32, u32, u32, f32) asm("func_0017d348");

// 0x0016d800 func_0016d800
u32 func_0016d800(u32 a0) asm("func_0016d800");
u32 func_0016d800(u32 a0) {
    u8 frame[16];
    u32 s0;
    u32 v0;
    s0 = *(u32*)(a0);
    v0 = func_0017d348((u32)frame, *(u32*)(a0), *(u32*)((a0 + 4)), *(f32*)((a0 + 8)));
    if ((s0 != (u32)frame)) {
        *(Q16*)(s0) = *(Q16*)((u32)frame);
    }
    return v0;
}
