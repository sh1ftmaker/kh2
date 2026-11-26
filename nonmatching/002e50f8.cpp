// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_002e51b0(u32, f32) asm("func_002e51b0");
extern "C" f32 func_002f8870(f32) asm("func_002f8870");

// 0x002e50f8 func_002e50f8
// minilink-rodata 0x00375ff0   (float literals live here in the original)
f32 func_002e50f8(u32 a0, f32 fa0, f32 fa1) asm("_ZN2Ti4Cord4initEv");
f32 func_002e50f8(u32 a0, f32 fa0, f32 fa1) {
    f32 f22;
    f22 = func_002e51b0(a0, fa0);
    if (!(((*(f32*)((a0 + 4)) * 0.5f) < func_002f8870(fa1)))) {
        f22 = (f22 * *(f32*)(((((s32)((((func_002f8870(fa1 * 0.5f) * 21.0f) / *(f32*)((a0 + 4))) + 0.5f)) << 2) + a0) + 0x1150)));
    }
    return f22;
}
