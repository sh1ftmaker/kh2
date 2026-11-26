// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00250fb8() asm("func_00250fb8");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" void func_001039f8() asm("func_001039f8");
extern "C" void func_002513b0() asm("func_002513b0");
extern "C" void func_00251780() asm("func_00251780");
extern "C" void func_00252020() asm("func_00252020");
extern "C" void func_00287d68() asm("func_00287d68");

// 0x00251318 Tz::CANA::Control()
u32 lift_00251318() asm("_ZN2Tz4CANA7ControlEv");
u32 lift_00251318() {
    u32 s0;
    u32 v0;
    u32 v0_0;
    s0 = func_00287bc0();
    func_00287d68();
    func_00252020();
    if (((s32)(func_00287db0()) != 0)) {
        if (((s32)(func_00250fb8()) == 0)) {
            func_00252020();
            func_001039f8();
            v0 = 1;
        } else {
            v0 = 0;
        }
        v0_0 = v0;
    } else {
        if (((s32)(s0) != 0)) {
            if ((s0 == 1)) {
                func_00251780();
            }
        } else {
            func_002513b0();
        }
        v0_0 = 0;
    }
    return v0_0;
}
