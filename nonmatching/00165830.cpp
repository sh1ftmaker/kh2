// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_00142940(u32, u32) asm("func_00142940");

// 0x00165830 func_00165830
u32 func_00165830(u32 a0, u32 a1) asm("func_00165830");
u32 func_00165830(u32 a0, u32 a1) {
    Q16 loc_0;
    Q16 loc_10;
    Q16 loc_20;
    Q16 loc_30;
    loc_0 = *(Q16*)(a1);
    loc_10 = *(Q16*)((a1 + 0x10));
    loc_20 = *(Q16*)((a1 + 0x20));
    loc_30 = *(Q16*)((a1 + 0x30));
    return func_00142940(*(u32*)((a0 + 4)), (u32)&loc_0);
}
