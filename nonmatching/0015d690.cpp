// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0015d5d0 asm("D_0015d5d0");
extern "C" u32 D_0034af40 asm("D_0034af40");
extern "C" u32 D_0034b0e0 asm("D_0034b0e0");
extern "C" u32 func_00102c80() asm("func_00102c80");
extern "C" u32 func_0013a7d0(u32) asm("func_0013a7d0");
extern "C" u32 func_0013a7e8(u32) asm("func_0013a7e8");
extern "C" u32 func_0014aba8() asm("func_0014aba8");
extern "C" u32 func_00239bf8(u32, u32) asm("func_00239bf8");
extern "C" void func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" void func_0013f030() asm("func_0013f030");
extern "C" void func_0014aa80(u32, u32, u32) asm("func_0014aa80");
extern "C" void func_002362b0(u32, u32) asm("func_002362b0");
extern "C" void func_00239988(u32, u32, u32) asm("func_00239988");

// 0x0015d690 func_0015d690
u32 func_0015d690() asm("_ZN2dk17KeyHoleJumpEffect2inEv");
u32 func_0015d690() {
    func_0013f030();
    func_00102788(*(u32*)((func_00102c80() + 4)), 1, 0x1d4c0, (u32)&D_0015d5d0);
    func_0014aa80(func_0014aba8(), 1, 0);
    func_002362b0((u32)&D_0034af40, func_0013a7d0(2));
    func_00239988((u32)&D_0034b0e0, func_0013a7e8(2), (u32)&D_0034af40);
    return func_00239bf8((u32)&D_0034b0e0, 0);
}
