// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001688b8() asm("func_001688b8");
extern "C" u32 func_00170c50() asm("func_00170c50");
extern "C" u32 func_002ba200() asm("func_002ba200");

// 0x00170cd0 YS::CACHE_BUFF::IsFlushing()
u32 lift_00170cd0() asm("_ZN2YS10CACHE_BUFF10IsFlushingEv");
u32 lift_00170cd0() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(func_001688b8()) == 0)) {
        if (((s32)(func_002ba200()) != 0)) {
            v0_0 = 1;
        } else {
            v0 = func_00170c50();
            v0_0 = v0;
        }
        v0_1 = v0_0;
    } else {
        v0_1 = 1;
    }
    return v0_1;
}
