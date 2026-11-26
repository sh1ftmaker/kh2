// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001bb4a0(u32, u32) asm("func_001bb4a0");
extern "C" u32 func_001bbcb0() asm("func_001bbcb0");
extern "C" u32 func_001d1b60(u32, u32) asm("func_001d1b60");

// 0x001d8718 func_001d8718
void func_001d8718(u32 a0, u32 a1) asm("_ZN2YS7MISSION13AddCountForceEii");
void func_001d8718(u32 a0, u32 a1) {
    u32 t7;
    u8 t7_0;
    u32 s0;
    if ((func_001bb4a0(a0, a1) != 0)) {
        t7 = *(u32*)(((func_001bbcb0() + (a1 * 0x38)) + 0xf4));
        t7_0 = (t7 & 1);
        if (((s32)(t7_0) != 0)) {
            s0 = (func_001bbcb0() + (a1 * 0x38));
            func_001d1b60(s0 + 0xe8, *(u32*)((((a1 * 0x38) + func_001bbcb0()) + 0x114)) + a0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
