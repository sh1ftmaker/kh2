// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002d8d40 func_002d8d40
// minilink-rodata 0x00375c8c   (float literals live here in the original)
f32 func_002d8d40(u32 a0, u32 a1, u32 a2) asm("_ZN2Ti12MGHachimitsu20get_horizontal_rangeERfS1_");
f32 func_002d8d40(u32 a0, u32 a1, u32 a2) {
    f32 f1;
    f32 f0;
    f1 = *(f32*)((a0 + 0x1d8));
    *(f32*)(a1) = (f1 + 30.0f);
    f0 = *(f32*)((a0 + 0x1d4));
    *(f32*)(a2) = (f0 - 30.0f);
    return (f0 - 30.0f);
}
