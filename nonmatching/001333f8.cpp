// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

extern "C" f32 func_00313bc0(u32, u32, u32, f32) asm("func_00313bc0");

// 0x001333f8 func_001333f8
f32 func_001333f8(u32 a0, u32 a1, u32 a2, f32 fa0) asm("func_001333f8");
f32 func_001333f8(u32 a0, u32 a1, u32 a2, f32 fa0) {
    f32 f1;
    f32 f0;
    f1 = (f32)(a1);
    f0 = (f32)(a2);
    fa0 = ((s32)(*(u32*)((a0 + 0x24))) >= 0) ? (f32)(*(s32*)((a0 + 0x24))) : ((f32)((s32)(((*(u32*)((a0 + 0x24)) & 1) | (*(u32*)((a0 + 0x24)) >> 1)))) + (f32)((s32)(((*(u32*)((a0 + 0x24)) & 1) | (*(u32*)((a0 + 0x24)) >> 1)))));
    return func_00313bc0(*(u32*)((a0 + 0x24)), a1, a2, __f32(fa0) * (f1 / f0));
}
