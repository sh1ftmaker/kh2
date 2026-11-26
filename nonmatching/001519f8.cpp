// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

extern "C" f32 func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" f32 func_00151690(u32) asm("func_00151690");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" void func_00239f18(u32, f32) asm("func_00239f18");

// 0x001519f8 func_001519f8
// minilink-rodata 0x0036b240   (float literals live here in the original)
f32 func_001519f8(u32 a0) asm("_ZN2dk13MISSION_GAUGE11updateGaugeEv");
f32 func_001519f8(u32 a0) {
    f32 f20;
    f20 = __f32(func_0023aa98(a0 + 0x828));
    func_00239f18(a0 + 0x4f8, func_00151690(a0));
    func_00239f18(a0 + 0x690, 1.0f - func_00151690(a0));
    return func_00138c68(a0 + 0x810, (s32)((func_00151690(a0) * (f32)(__u32(f20)))), 0);
}
