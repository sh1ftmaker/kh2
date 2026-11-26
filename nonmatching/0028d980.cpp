// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00138d60(u32, u32, u32, u32, u32, u32, u32) asm("func_00138d60");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");

// 0x0028d980 Tz::MenuCursor::Create(...)
u32 lift_0028d980(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("_ZN2Tz10MenuCursor6CreateEz");
u32 lift_0028d980(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    u32 s5;
    u32 s0;
    u32 v0;
    u32 v0_0;
    u32 loc_50;
    u32 v0_1;
    s5 = func_0023c4b8(func_0023f1b0(a4), a2);
    s0 = func_00236ca8(*(u32*)((func_0023f1b0(a4) + 0x28)), a3);
    if (((s32)(a7) >= 0)) {
        v0 = func_00192048(a7);
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    v0_1 = func_00138d60(a0, a1, s5, s0, a5, v0_0, *(u32*)((u32)&loc_50));
    *(u32*)((a0 + 0x188)) = a6;
    *(u32*)((a0 + 0x1ac)) = 1;
    return v0_1;
}
