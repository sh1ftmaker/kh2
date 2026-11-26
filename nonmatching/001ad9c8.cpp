// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");

// 0x001ad9c8 func_001ad9c8
// minilink-rodata 0x0036d7a4   (float literals live here in the original)
f32 func_001ad9c8(u32 a0) asm("func_001ad9c8");
f32 func_001ad9c8(u32 a0) {
    f32 f2;
    f32 f0;
    f32 f0_0;
    f2 = *(f32*)((a0 + 4));
    if (!((f2 == 0.0f))) {
        f0 = *(f32*)(&D_00349e10);
        *(f32*)(a0) = (*(f32*)(a0) + (f2 * f0));
        if (((*(f32*)(a0) + (f2 * f0)) <= 0.0f)) {
            *(f32*)(a0) = 0.0f;
            *(f32*)((a0 + 4)) = 0.0f;
        } else {
            if ((1.0f <= (*(f32*)(a0) + (f2 * f0)))) {
                *(f32*)(a0) = 1.0f;
                *(f32*)((a0 + 4)) = 0.0f;
            }
        }
        f0_0 = (*(f32*)(a0) + (f2 * f0));
    }
    return f0_0;
}
