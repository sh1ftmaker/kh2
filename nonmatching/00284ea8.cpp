// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f2c0 asm("D_0035f2c0");
extern "C" u32 func_00103580() asm("func_00103580");
extern "C" void func_002bd7d8() asm("func_002bd7d8");

// 0x00284ea8 Tz::Ending::SoundBufferFree()
u32 lift_00284ea8() asm("_ZN2Tz6Ending15SoundBufferFreeEv");
u32 lift_00284ea8() {
    u32 v0;
    u32 v0_0;
    func_002bd7d8();
    v0 = func_00103580();
    v0_0 = ((u32(*)(u32, u32))(*(u32*)((*(u32*)(v0) + 4))))(v0, *(u32*)(&D_0035f2c0));
    *(u32*)(&D_0035f2c0) = 0;
    return v0_0;
}
