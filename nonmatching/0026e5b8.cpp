// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00287bc0(u32) asm("func_00287bc0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" void func_001039f8() asm("func_001039f8");
extern "C" void func_0026e638(u32) asm("func_0026e638");
extern "C" void func_0026e8a0() asm("func_0026e8a0");

// 0x0026e5b8 Tz::PauseTaskIsDone(...)
u32 lift_0026e5b8(u32 a0) asm("_ZN2Tz15PauseTaskIsDoneEz");
u32 lift_0026e5b8(u32 a0) {
    u32 s0;
    u32 v0;
    s0 = func_00287bc0(a0);
    if (((s32)(func_00287db0()) != 0)) {
        func_001039f8();
        v0 = 1;
    } else {
        if (((s32)(s0) != 0)) {
            if ((s0 == 1)) {
                func_0026e8a0();
            }
        } else {
            func_0026e638(a0);
        }
        v0 = 0;
    }
    return v0;
}
