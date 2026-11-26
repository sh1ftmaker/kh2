// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f2c0 asm("D_0035f2c0");
extern "C" u32 D_00374348 asm("D_00374348");
extern "C" u32 func_00103580() asm("func_00103580");
extern "C" u32 func_002bd730(u32, u32, u32, u32) asm("func_002bd730");
extern "C" void func_002bd788(u32) asm("func_002bd788");

// 0x00284e40 Tz::Ending::SoundSetup()
u32 lift_00284e40() asm("_ZN2Tz6Ending10SoundSetupEv");
u32 lift_00284e40() {
    u32 v0;
    u32 v0_0;
    v0 = func_00103580();
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(v0))))(v0, 0x48800, 0);
    *(u32*)(&D_0035f2c0) = v0_0;
    func_002bd788((v0_0 + 0x3f) & 0xffffffc0);
    return func_002bd730((u32)&D_00374348, 0x3fff, 0, 0);
}
