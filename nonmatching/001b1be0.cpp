// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001ad990(u32, f32, f32) asm("func_001ad990");

// 0x001b1be0 func_001b1be0
// minilink-rodata 0x0036d9a0   (float literals live here in the original)
u32 func_001b1be0(u32 a0, f32 fa0) asm("func_001b1be0");
u32 func_001b1be0(u32 a0, f32 fa0) {
    return func_001ad990(a0 + 8, 0.0f, 1.0f);
}
