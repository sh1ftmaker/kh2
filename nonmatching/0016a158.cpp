// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016cbc8(u32, u32, u32, u32) asm("func_0016cbc8");
extern "C" u32 func_0016d080(u32, u32) asm("func_0016d080");
extern "C" void func_0016cce8(u32, u32, u32, u32, u32) asm("func_0016cce8");

// 0x0016a158 func_0016a158
u32 func_0016a158(u32 a0, u32 a1) asm("_ZN2YS3OBJ15_OVR_initializeEv");
u32 func_0016a158(u32 a0, u32 a1) {
    u32 v0;
    u32 loc_0;
    v0 = func_0016d080(a1, a0);
    *(u32*)((a0 + 0x484)) = v0;
    func_0016cce8(v0, 0, (u32)&loc_0, 1, 0);
    return func_0016cbc8(*(u32*)((a0 + 0x484)), 1, 0, 0);
}
