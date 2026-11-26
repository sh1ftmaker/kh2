// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003674b8 asm("D_003674b8");
extern "C" u32 D_00378410 asm("D_00378410");
extern "C" u32 func_00305a40(u32, u32) asm("func_00305a40");
extern "C" void func_0030f290(u32, u32, u32) asm("func_0030f290");
extern "C" void func_0030f3a8() asm("func_0030f3a8");

// 0x0030f490 func_0030f490
u32 func_0030f490(u32 a0, u32 a1) asm("func_0030f490");
u32 func_0030f490(u32 a0, u32 a1) {
    func_0030f290((u32)&D_00378410, a0, a1);
    func_0030f3a8();
    return func_00305a40(a0, *(u32*)(&D_003674b8) + 4);
}
