// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00192048(u32, u32) asm("func_00192048");
extern "C" u32 func_001c3748(u32, u32) asm("func_001c3748");

// 0x002c2598 func_002c2598
u32 func_002c2598(u32 a0, u32 a1) asm("func_002c2598");
u32 func_002c2598(u32 a0, u32 a1) {
    u32 s0;
    u32 v0;
    s0 = 0;
    do {
        v0 = func_001c3748(a0, 0);
        if (((s32)(v0) == 0)) {
            return v0;
        }
        s0 = (s0 + 1);
    } while ((s0 != a1));
    return func_00192048(*(u16*)((v0 + 4)), v0);
}
