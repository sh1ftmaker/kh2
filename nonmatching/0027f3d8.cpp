// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001040f8() asm("func_001040f8");
extern "C" u32 func_00242a00() asm("func_00242a00");
extern "C" u32 func_00253918() asm("func_00253918");
extern "C" u32 func_0027f2b0() asm("func_0027f2b0");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" void func_001039f8() asm("func_001039f8");
extern "C" void func_0023d1d0() asm("func_0023d1d0");
extern "C" void func_0023d1e0() asm("func_0023d1e0");
extern "C" void func_0027f7f0() asm("func_0027f7f0");
extern "C" void func_0027f9d8() asm("func_0027f9d8");

// 0x0027f3d8 Tz::GumiPause::Control()
u32 lift_0027f3d8() asm("_ZN2Tz9GumiPause7ControlEv");
u32 lift_0027f3d8() {
    u32 t7;
    u32 t7_0;
    u32 v0;
    u32 t7_1;
    if (((s32)(func_00287db0()) != 0)) {
        if (((s32)(func_0027f2b0()) == 0)) {
            if (((s32)(func_00253918()) == 0)) {
                ((void(*)())(*(u32*)((func_001040f8() + 4))))();
                if (((s32)(func_00242a00()) != 0)) {
                    func_0023d1d0();
                } else {
                    func_0023d1e0();
                }
                func_001039f8();
                t7 = 1;
            } else {
                t7 = 0;
            }
            t7_0 = t7;
        } else {
            t7_0 = 0;
        }
        t7_1 = t7_0;
    } else {
        v0 = func_00287bc0();
        if (((s32)(v0) != 0)) {
            if ((v0 == 1)) {
                func_0027f9d8();
            }
        } else {
            func_0027f7f0();
        }
        t7_1 = 0;
    }
    return t7_1;
}
