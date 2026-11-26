// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2a410 asm("D_01e2a410");
extern "C" u32 func_002b6adc(u32, u32) asm("func_002b6adc");
extern "C" void func_002bcfe8(u32) asm("func_002bcfe8");
extern "C" void func_002bd030(u32) asm("func_002bd030");

// 0x002ba040 func_002ba040
u32 func_002ba040() asm("func_002ba040");
u32 func_002ba040() {
    u32 s0;
    u32 s1;
    u32 v0_0;
    func_002bcfe8((u32)&D_01e2a410);
    func_002bd030((u32)&D_01e2a410);
    s0 = 0x14;
    s1 = 0;
    do {
        s1 = (s1 + 1);
        func_002b6adc(2, s0);
        v0_0 = func_002b6adc(0, s0);
        s0 = (s1 + 0x14);
    } while (((s32)(((s32)(s1) < (s32)(2))) != 0));
    return v0_0;
}
