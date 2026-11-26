// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0028da70(u32, u32) asm("func_0028da70");
extern "C" void func_00139d78(u32) asm("func_00139d78");

// 0x00262730 func_00262730
u32 func_00262730() asm("func_00262730");
u32 func_00262730() {
    u32 s0;
    s0 = (func_00257770() + 0x9c8);
    func_00139d78(s0);
    return func_0028da70(s0, 0xf2);
}
