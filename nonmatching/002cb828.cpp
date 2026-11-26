// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x002cb828 func_002cb828
u32 func_002cb828(u32 a0, u32 a1) asm("func_002cb828");
u32 func_002cb828(u32 a0, u32 a1) {
    u32 t5;
    u32 t4;
    u32 t6;
    u32 v0;
    u32 t7;
    u32 t6_0;
    u32 v0_1;
    t5 = *(u32*)((a0 + 8));
    t4 = *(u32*)((a0 + 4));
    t6 = *(u32*)((a0 + 0xc));
    if (((s32)(((s32)(t5) < (s32)(t6))) != 0)) {
        *(u32*)((a0 + 8)) = (t5 + 1);
    } else {
        *(u32*)((a0 + 4)) = (t4 + 1);
    }
    v0 = *(u32*)((a0 + 0x80));
    t7 = (((s32)((t4 + t5)) % (s32)(t6)) << 5);
    t6_0 = (v0 + t7);
    if ((t6_0 != a1)) {
        *(Q16*)(t6_0) = *(Q16*)(a1);
        v0 = *(u32*)((a0 + 0x80));
    }
    v0_1 = (v0 + t7);
    return v0_1;
}
