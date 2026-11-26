// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0034aa50 asm("D_0034aa50");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");

// 0x00159ef8 func_00159ef8
u32 func_00159ef8(u32 a0) asm("func_00159ef8");
u32 func_00159ef8(u32 a0) {
    u32 s0;
    u32 v0;
    u32 t7;
    s0 = (a0 + 0x80);
    v0 = func_0016c028(*(u32*)((a0 + 0x44)));
    if ((s0 != (u32)&D_0034aa50)) {
        *(Q16*)((u32)&D_0034aa50) = *(Q16*)(s0);
    }
    t7 = ((u32)&D_0034aa50 + 0x10);
    if ((v0 != t7)) {
        *(Q16*)(t7) = *(Q16*)(v0);
    }
    return v0;
}
