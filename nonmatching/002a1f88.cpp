// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f5e4 asm("D_0035f5e4");
extern "C" u32 D_0035f5e8 asm("D_0035f5e8");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_00103580() asm("func_00103580");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_003241a0(u32) asm("func_003241a0");

// 0x002a1f88 func_002a1f88
u32 func_002a1f88() asm("_ZN2Tz10JmTreasure4InitEv");
u32 func_002a1f88() {
    u32 v0;
    u32 t7;
    u32 t6;
    u32 t5;
    u32 v0_0;
    u32 v0_1;
    v0 = func_001063c0(0x10dc, func_00103570());
    t7 = (v0 + 0x108c);
    t6 = 9;
    t5 = 0xffffffff;
    do {
        *(u32*)(t7) = 0;
        *(u32*)((t7 + 4)) = 0;
        t6 = (t6 + -1);
        t7 = (t7 + 8);
    } while ((t6 != t5));
    *(u32*)(&D_0035f5e4) = v0;
    v0_0 = func_001063c0(0x984c, func_00103580());
    v0_1 = func_003241a0(v0_0);
    *(u32*)(&D_0035f5e8) = v0_0;
    return v0_1;
}
