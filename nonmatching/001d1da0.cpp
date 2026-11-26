// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

extern "C" void func_001d1720(u32, u32, f32) asm("func_001d1720");
extern "C" void func_001d17b0(u32, u32) asm("func_001d17b0");

// 0x001d1da0 YS::MISSION_GAUGE::set(float)
void lift_001d1da0(u32 a0, f32 fa0) asm("_ZN2YS13MISSION_GAUGE3setEf");
void lift_001d1da0(u32 a0, f32 fa0) {
    f32 f0;
    f32 f0_0;
    if ((fa0 <= 0.0f)) {
        if ((0.0f < *(f32*)((a0 + 0x2c)))) {
            func_001d1720(a0, 0x88, fa0);
        }
        f0_0 = (s32)(0.0f);
        fa0 = 0.0f;
    } else {
        if (((f32)(*(s32*)((a0 + 0x18))) <= fa0)) {
            if ((*(f32*)((a0 + 0x2c)) < (f32)(*(s32*)((a0 + 0x18))))) {
                func_001d1720(a0, 0x89, fa0);
            }
            f0 = (s32)((f32)(*(s32*)((a0 + 0x18))));
            fa0 = (f32)(*(s32*)((a0 + 0x18)));
        } else {
            f0 = (s32)(fa0);
        }
        f0_0 = f0;
    }
    func_001d17b0(a0, __u32(f0_0));
    *(f32*)((a0 + 0x2c)) = __f32(fa0);
    return;
}
