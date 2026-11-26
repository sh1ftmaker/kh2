// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f0fc asm("D_0035f0fc");
extern "C" u32 func_001a8bf8(u32, u32) asm("func_001a8bf8");
extern "C" u32 func_00293bc0(u32) asm("func_00293bc0");

// 0x0026d8c0 func_0026d8c0
u32 func_0026d8c0(u32 a0) asm("func_0026d8c0");
u32 func_0026d8c0(u32 a0) {
    u32 s1;
    u32 s2;
    u32 s0;
    u32 v0;
    u32 s1_0;
    s1 = 0;
    do {
        s2 = func_00293bc0(a0);
        s0 = func_001a8bf8(*(u32*)(&D_0035f0fc), s1);
        if ((s0 == func_001a8bf8(s2, a0))) {
            v0 = (s1 + 1);
            return v0;
        }
        s1_0 = (s1 + 1);
        s1 = s1_0;
    } while (((s32)(((s32)(s1_0) < (s32)(4))) != 0));
    return 0xffffffff;
}
