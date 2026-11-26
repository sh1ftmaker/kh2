// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016b010(u32, u32) asm("func_0016b010");

// 0x00171930 func_00171930
u32 func_00171930(u32 a0) asm("_ZN2YS17trap_obj_wish_dirEP8BD_VALUE");
u32 func_00171930(u32 a0) {
    Q16 loc_0;
    loc_0 = *(Q16*)(*(u32*)((a0 + 4)));
    return func_0016b010(*(u32*)((*(u32*)(a0) + 4)), (u32)&loc_0);
}
