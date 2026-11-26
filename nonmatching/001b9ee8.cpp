// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d48da0 asm("D_01d48da0");

// 0x001b9ee8 func_001b9ee8
u32 func_001b9ee8(u32 a0) asm("func_001b9ee8");
u32 func_001b9ee8(u32 a0) {
    u32 s1;
    u32 v0;
    u32 s0;
    u32 t7;
    u32 v0_0;
    u32 t7_1;
    s1 = 0;
    while ((s0 = (s1 == 0) ? *(u32*)(&D_01d48da0) : *(u32*)((s1 + 0x8b4))), (s1 = s0), ((s32)(s0) != 0)) {
        t7 = *(u32*)((s0 + 0x588));
        if (((s32)((t7 & 0x20)) != 0)) {
            continue;
        }
        v0_0 = *(u32*)((*(u32*)(s0) + 0x3c));
        if (((s32)(((s32)(((u32(*)(u32))(v0_0))(s0)) < (s32)(a0))) == 0)) {
            v0 = ((s32)(((u32(*)(u32))(v0_0))(s0)) < (s32)(a0));
            continue;
        }
        t7_1 = *(u32*)((s0 + 0x10c));
        *(u32*)((s0 + 0x10c)) = (t7_1 | 0x80);
        v0 = ((s32)(((u32(*)(u32))(v0_0))(s0)) < (s32)(a0));
    }
    return v0;
}
