// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0017aab8(u32, u32) asm("func_0017aab8");

// 0x0016bd10 YS::ACTION::Get(YS::ACTION::ID)
u32 lift_0016bd10(u32 a0, u32 a1) asm("_ZN2YS6ACTION3GetENS0_2IDE");
u32 lift_0016bd10(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    v0 = func_0017aab8(a1, a1);
    v0_0 = ((u32(*)(u32, u32))(*(u32*)(*(u32*)(v0))))(v0, a0);
    *(u32*)((a0 + 0xc)) = v0;
    return v0_0;
}
