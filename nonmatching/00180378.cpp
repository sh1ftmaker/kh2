// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0017ec98(u32, u32) asm("func_0017ec98");
extern "C" u32 func_0017edf0(u32, u32) asm("func_0017edf0");
extern "C" u32 func_001801b0(u32, u32, u32, u32, u32, f32) asm("func_001801b0");
extern "C" void func_0017f380(u32, u32, u32, f32) asm("func_0017f380");

// 0x00180378 YS::MOTION::capture(YS::OBJ*, int, float)
u32 lift_00180378(u32 a0, u32 a1, u32 a2, f32 fa0) asm("_ZN2YS6MOTION7captureEPNS_3OBJEif");
u32 lift_00180378(u32 a0, u32 a1, u32 a2, f32 fa0) {
    u32 v0;
    func_0017f380(a1 + 0x140, a1, a2, fa0);
    v0 = func_001801b0(*(u32*)((a0 + 8)), func_0017edf0(a0, func_0017ec98(a0, a2)), *(u32*)((a0 + 0xf0)), a1, *(u32*)((a0 + 8)) + 0x488, fa0);
    *(u32*)((a1 + 0x154)) = a2;
    *(u32*)((a1 + 0x240)) = *(u32*)(a0);
    return v0;
}
