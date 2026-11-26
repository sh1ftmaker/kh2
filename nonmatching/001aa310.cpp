// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_00192fb8(u32) asm("func_00192fb8");
extern "C" u32 func_001ab820(u32, u32) asm("func_001ab820");

// 0x001aa310 func_001aa310
// minilink-rodata 0x0036d6a4   (float literals live here in the original)
f32 func_001aa310(u32 a0, u32 a1, u32 a2) asm("func_001aa310");
f32 func_001aa310(u32 a0, u32 a1, u32 a2) {
    f32 f20;
    f20 = (f32)((s32)(func_001ab820(*(u32*)(a1), a1)));
    return (a2 + ((s32)(((f20 * func_00192fb8(a1 + 0x20)) + 0.5f)) << 4));
}
