// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016ed50(u32, u32, u32) asm("func_0016ed50");
extern "C" u32 func_001d01e0() asm("func_001d01e0");
extern "C" void func_00170320(u32) asm("func_00170320");

// 0x001d0068 YS::MICKEY::ReadRequest()
u32 lift_001d0068() asm("_ZN2YS6MICKEY11ReadRequestEv");
u32 lift_001d0068() {
    u32 s0;
    s0 = func_001d01e0();
    func_00170320(0x1388);
    return func_0016ed50(s0, 0x1388, 7);
}
