// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_01c5f480 asm("D_01c5f480");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");

// 0x00171418 func_00171418
u32 func_00171418(u32 a0) asm("_ZN2YS12trap_obj_posEP8BD_VALUE");
u32 func_00171418(u32 a0) {
    u32 v0;
    v0 = func_0016c028(*(u32*)((*(u32*)(a0) + 4)));
    if ((v0 != (u32)&D_01c5f480)) {
        *(Q16*)((u32)&D_01c5f480) = *(Q16*)(v0);
    }
    *(u32*)(a0) = (u32)&D_01c5f480;
    return v0;
}
