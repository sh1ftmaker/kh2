// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016abf8(u32, u32, u32, u32) asm("func_0016abf8");
extern "C" u32 func_001dc5f8(u32) asm("func_001dc5f8");

// 0x0016ac80 func_0016ac80
u32 func_0016ac80(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_0016ac80");
u32 func_0016ac80(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 v0;
    u32 v0_0;
    v0 = func_0016abf8(a0, a1, a3, a4);
    if (((s32)(v0) != 0)) {
        v0_0 = func_001dc5f8(v0);
        if ((v0_0 != a2)) {
            *(Q16*)(v0_0) = *(Q16*)(a2);
        }
    }
    return v0;
}
