// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_001cec08 asm("D_001cec08");
extern "C" u32 D_001cec28 asm("D_001cec28");
extern "C" u32 D_003521d0 asm("D_003521d0");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" void func_001ce8b8(u32) asm("func_001ce8b8");

// 0x001cebb0 func_001cebb0
u32 func_001cebb0() asm("_ZN2YS10LIGHTCYCLE4InitEv");
u32 func_001cebb0() {
    u32 v0;
    u32 v0_0;
    v0 = func_001050d8(0x3c);
    func_001ce8b8(v0);
    *(u32*)(&D_003521d0) = v0;
    v0_0 = func_00102c18(1, 0x36b1, (u32)&D_001cec08);
    *(u32*)((v0_0 + 0x30)) = (u32)&D_001cec28;
    return v0_0;
}
