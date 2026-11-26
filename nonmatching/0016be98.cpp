// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016bc20(u32, u32, u32) asm("func_0016bc20");
extern "C" void func_0018a818(u32, u32, u32) asm("func_0018a818");

// 0x0016be98 func_0016be98
u32 func_0016be98(u32 a0, u32 a1) asm("func_0016be98");
u32 func_0016be98(u32 a0, u32 a1) {
    u8 frame[32];
    u32 v0;
    *(u32*)(((u32)frame + 0xc)) = 0;
    v0 = func_0016bc20(a1, 1, 0xffffffff);
    if (((s32)(v0) != 0)) {
        func_0018a818((u32)frame, a1, v0);
        *(Q16*)(a0) = *(Q16*)(((u32)frame + 0x10));
    } else {
        *(Q16*)(a0) = *(Q16*)((a1 + 0x540));
    }
    return a0;
}
