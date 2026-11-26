// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x0023e788 func_0023e788
u32 func_0023e788(u32 a0, u32 a1, u32 a2) asm("_ZN2Tz7MenuObj6GetRotEi");
u32 func_0023e788(u32 a0, u32 a1, u32 a2) {
    u32 a1_0;
    a1_0 = (a1 + (*(u8*)(((a2 + a1) + 0xb64)) * 0x140));
    *(Q16*)(a0) = *(Q16*)((a1_0 + 0x660));
    return a0;
}
