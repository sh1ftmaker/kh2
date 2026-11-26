// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_0017ce10(u32, u32, u32, u32, f32) asm("func_0017ce10");

// 0x00155830 func_00155830
// minilink-rodata 0x0036b288   (float literals live here in the original)
void func_00155830(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00155830");
void func_00155830(u32 a0, u32 a1, u32 a2, u32 a3) {
    if (((s32)(((s32)(a0) < (s32)(0x3c))) == 0)) {
        *(f32*)(a2) = ((f32)((s32)((a0 + -0x3c))) * 3.0f);
        *(f32*)(a1) = (((f32)((s32)((a0 + -0x3c))) * 3.0f) / 100.0f);
        *(f32*)(a3) = -4.712388515472412f;
        *(f32*)(a3) = func_0017ce10((s32)(a0) < (s32)(0x3c), a1, a2, a3, -4.712388515472412f);
    }
    return;
}
