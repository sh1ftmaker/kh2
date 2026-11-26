// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001bb4b0(u32, f32) asm("func_001bb4b0");
extern "C" u32 func_001bbcb0() asm("func_001bbcb0");
extern "C" u32 func_001d8c70(u32, f32) asm("func_001d8c70");

// 0x001d8d08 func_001d8d08
void func_001d8d08(u32 a0, f32 fa0) asm("_ZN2YS7MISSION8AddGaugeEfi");
void func_001d8d08(u32 a0, f32 fa0) {
    u32 t7;
    u8 t7_0;
    if ((func_001bb4b0(a0, fa0) != 0)) {
        t7 = *(u32*)(((func_001bbcb0() + (a0 * 0x34)) + 0x19c));
        t7_0 = (t7 & 1);
        if ((t7_0 != 0)) {
            func_001d8c70(a0, *(f32*)(((func_001bbcb0() + (a0 * 0x34)) + 0x1bc)) + fa0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
