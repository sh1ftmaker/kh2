// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x001b2520 func_001b2520
void func_001b2520(u32 a0, u32 a1) asm("func_001b2520");
void func_001b2520(u32 a0, u32 a1) {
    if (((*(u32*)((a0 + 0x14)) + (*(u32*)((a0 + 8)) << 4)) != a1)) {
        *(Q16*)((*(u32*)((a0 + 0x14)) + (*(u32*)((a0 + 8)) << 4))) = *(Q16*)(a1);
    }
    *(u32*)((a0 + 4)) = (((s32)((*(u32*)((a0 + 8)) + 1)) < (s32)(*(u32*)((a0 + 4)))) ? *(u32*)((a0 + 4)) : (*(u32*)((a0 + 8)) + 1));
    *(u32*)((a0 + 8)) = ((s32)((*(u32*)((a0 + 8)) + 1)) % (s32)(*(u32*)(a0)));
    return;
}
