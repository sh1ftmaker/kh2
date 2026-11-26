// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016e920(u32, u32, u32, f32, f32) asm("func_0016e920");
extern "C" void func_001a7888(u32, u32, u32, f32, f32, f32) asm("func_001a7888");
extern "C" void func_001a78c0(u32, u32, u32, f32, f32, f32) asm("func_001a78c0");

// 0x0019b0e8 func_0019b0e8
u32 func_0019b0e8(u32 a0, u32 a1, u32 a2, f32 fa0, f32 fa1) asm("_ZN2YS10UNIT_GROUP9RandomPosEjRKN2kn7FVectorEff");
u32 func_0019b0e8(u32 a0, u32 a1, u32 a2, f32 fa0, f32 fa1) {
    u8 t7;
    t7 = ((*(u16*)((func_0016e920(a1, a1, a2, fa0, fa1) + 0x48)) >> 3) & 1);
    if (((s32)(t7) != 0)) {
        func_001a78c0(a0, a2, 2, 0.0f, fa0, -(fa1));
    } else {
        func_001a7888(a0, a2, 1, 0.0f, fa0, -(fa1));
    }
    return a0;
}
