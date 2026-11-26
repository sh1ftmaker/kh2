// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00192e50(u32, u32, u32, u32) asm("func_00192e50");

// 0x002b6338 func_002b6338
u32 func_002b6338(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_002b6338");
u32 func_002b6338(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 s1;
    s1 = func_00192048(a2);
    return func_00192e50(s1, a0, a1, func_00192048(a3 ? 0xb7d5 : 0xb7d4));
}
