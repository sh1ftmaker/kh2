// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0030edb0(u32, u32) asm("func_0030edb0");
extern "C" u32 func_00310180(u32, u32) asm("func_00310180");
extern "C" void func_0030ee00() asm("func_0030ee00");

// 0x003101d0 func_003101d0
u32 func_003101d0(u32 a0, u32 a1) asm("func_003101d0");
u32 func_003101d0(u32 a0, u32 a1) {
    u32 s2;
    u32 s0;
    s2 = func_0030edb0(a0, a1);
    s0 = func_00310180(a0, a1);
    if (((s32)(s2) != 0)) {
        func_0030ee00();
    }
    return s0;
}
