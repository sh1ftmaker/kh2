// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0017d050(u32, u32) asm("func_0017d050");
extern "C" u32 func_001dc648(u32) asm("func_001dc648");

// 0x0016e240 func_0016e240
u32 func_0016e240(u32 a0) asm("_ZN2YS19trap_effect_set_dirEP8BD_VALUE");
u32 func_0016e240(u32 a0) {
    u8 frame[16];
    u32 s1;
    u32 v0;
    s1 = func_001dc648(*(u32*)(a0));
    v0 = func_0017d050((u32)frame, *(u32*)((a0 + 4)));
    if ((s1 != (u32)frame)) {
        *(Q16*)(s1) = *(Q16*)((u32)frame);
    }
    return v0;
}
