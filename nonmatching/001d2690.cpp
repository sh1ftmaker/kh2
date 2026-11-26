// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00192048(u32, u32, f32) asm("func_00192048");

// 0x001d2690 func_001d2690
// minilink-rodata 0x0036e3c0   (float literals live here in the original)
f32 func_001d2690(u32 a0, u32 a1, f32 fa0) asm("_ZN2YS13INTERVAL_INFO4pushEif");
f32 func_001d2690(u32 a0, u32 a1, f32 fa0) {
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    s0 = *(u32*)(a0);
    s0_0 = (s0 << 3);
    s0_1 = (a0 + s0_0);
    *(u32*)(a0) = ((s32)((s0 + 1)) % 3);
    *(u32*)((s0_1 + 8)) = func_00192048(a1, a1, fa0);
    *(f32*)(((s0_1 + 8) + 4)) = (fa0 * 60.0f);
    return 60.0f;
}
