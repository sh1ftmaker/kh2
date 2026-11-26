// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_002e9fe0(u32, u32, u32) asm("func_002e9fe0");

// 0x002e8038 func_002e8038
u32 func_002e8038(u32 a0) asm("_ZN2Ts31trap_target_searcher_search_objEP8BD_VALUE");
u32 func_002e8038(u32 a0) {
    Q16 loc_0;
    loc_0 = *(Q16*)(*(u32*)((a0 + 8)));
    return func_002e9fe0(*(u32*)(a0), *(u32*)((*(u32*)((a0 + 4)) + 4)), (u32)&loc_0);
}
