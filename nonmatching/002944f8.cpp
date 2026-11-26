// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f57c asm("D_0035f57c");
extern "C" u32 D_0035f580 asm("D_0035f580");
extern "C" u32 D_0035f581 asm("D_0035f581");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_0023f800(u32) asm("func_0023f800");

// 0x002944f8 func_002944f8
u32 func_002944f8() asm("func_002944f8");
u32 func_002944f8() {
    u32 v0;
    u32 v0_0;
    *(u8*)(&D_0035f580) = 0;
    *(u8*)(&D_0035f581) = 0;
    v0 = func_001063c0(0x1c, func_00103570());
    v0_0 = func_0023f800(v0);
    *(u32*)(&D_0035f57c) = v0;
    return v0_0;
}
