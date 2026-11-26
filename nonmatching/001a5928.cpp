// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_0016e920(u32) asm("func_0016e920");
extern "C" u32 func_001a4df0(u32, u32, u32, u32) asm("func_001a4df0");
extern "C" void func_001c70e8() asm("func_001c70e8");

// 0x001a5928 YS::PRIZE::Init()
u32 lift_001a5928() asm("_ZN2YS5PRIZE4InitEv");
u32 lift_001a5928() {
    u32 s0;
    func_001c70e8();
    s0 = func_001050d8(0xa00);
    return func_001a4df0(s0, func_0016e920(0x5c3), 0x100, 0x60);
}
