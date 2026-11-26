// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00375518 asm("D_00375518");
extern "C" u32 func_00198450(u32) asm("func_00198450");
extern "C" u32 func_001c2b58(u32) asm("func_001c2b58");
extern "C" u32 func_002c1b48(u32) asm("func_002c1b48");
extern "C" void func_002c1b60(u32, u32) asm("func_002c1b60");

// 0x002c1ae8 func_002c1ae8
u32 func_002c1ae8(u32 a0) asm("_ZN8worldmap4Gumi15_OVR_initializeEv");
u32 func_002c1ae8(u32 a0) {
    u32 v0;
    v0 = func_002c1b48(a0);
    *(u32*)((a0 + 0xae4)) = (((v0 << 1) + v0) + ((u32)&D_00375518 + -3));
    func_002c1b60(a0, func_001c2b58(func_002c1b48(a0)));
    return func_00198450(a0);
}
