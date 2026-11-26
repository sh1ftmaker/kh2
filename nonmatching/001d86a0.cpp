// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001bb4b0(u32, u32) asm("func_001bb4b0");
extern "C" u32 func_001bbcb0() asm("func_001bbcb0");
extern "C" u32 func_001d8718(u32, u32) asm("func_001d8718");

// 0x001d86a0 YS::MISSION::AddCount(int, int)
void lift_001d86a0(u32 a0, u32 a1) asm("_ZN2YS7MISSION8AddCountEii");
void lift_001d86a0(u32 a0, u32 a1) {
    u32 t7;
    u8 t7_0;
    if ((func_001bb4b0(a0, a1) != 0)) {
        t7 = *(u32*)(((func_001bbcb0() + (a1 * 0x38)) + 0xf4));
        t7_0 = (t7 & 1);
        if (((s32)(t7_0) != 0)) {
            func_001d8718(a0, a1);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
