// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00354bc0 asm("D_00354bc0");
extern "C" u32 D_00354be0 asm("D_00354be0");
extern "C" u32 func_002f3f88(u32, u32) asm("func_002f3f88");

// 0x002007e0 func_002007e0
u32 func_002007e0(u32 a0, u32 a1) asm("func_002007e0");
u32 func_002007e0(u32 a0, u32 a1) {
    u32 s0;
    s0 = (a0 + *(u32*)((*(u32*)((a1 + 0xc)) + 4)));
    func_002f3f88((a0 + *(u32*)((*(u32*)((a1 + 0xc)) + 4))) + 0xa0, (u32)&D_00354bc0);
    return func_002f3f88(s0 + 0xb0, (u32)&D_00354be0);
}
