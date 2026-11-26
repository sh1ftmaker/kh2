// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001b58f0(u32, u32, u32, u32) asm("func_001b58f0");
extern "C" u32 func_001dc5f8(u32) asm("func_001dc5f8");

// 0x0018fe80 func_0018fe80
void func_0018fe80(u32 a0) asm("_ZN2YS27trap_limit_effect_start_posEP8BD_VALUE");
void func_0018fe80(u32 a0) {
    u32 v0;
    u32 v0_0;
    v0 = func_001b58f0(*(u32*)(a0), *(u32*)((a0 + 4)), *(u32*)((a0 + 0xc)), 0);
    if (((s32)(v0) != 0)) {
        v0_0 = func_001dc5f8(v0);
        if ((v0_0 != *(u32*)((a0 + 8)))) {
            *(Q16*)(v0_0) = *(Q16*)(*(u32*)((a0 + 8)));
        }
    }
    *(u32*)(a0) = v0;
    return;
}
