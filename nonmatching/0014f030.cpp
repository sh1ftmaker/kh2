// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }


// 0x0014f030 func_0014f030
// minilink-rodata 0x0036b210   (float literals live here in the original)
f32 func_0014f030(u32 a0, f32 fa0, f32 fa1, f32 fa2) asm("func_0014f030");
f32 func_0014f030(u32 a0, f32 fa0, f32 fa1, f32 fa2) {
    if ((fa2 == 0.0f)) {
        fa2 = 1.0f;
    }
    *(f32*)(a0) = fa0;
    *(f32*)((a0 + 8)) = fa1;
    *(f32*)((a0 + 4)) = ((fa1 - fa0) / __f32(fa2));
    return ((fa1 - fa0) / __f32(fa2));
}
