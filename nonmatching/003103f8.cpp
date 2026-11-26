// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0030edb0(u32) asm("func_0030edb0");
extern "C" u32 func_00310330(u32) asm("func_00310330");
extern "C" void func_0030ee00() asm("func_0030ee00");

// 0x003103f8 func_003103f8
u32 func_003103f8(u32 a0) asm("func_003103f8");
u32 func_003103f8(u32 a0) {
    u32 s1;
    u32 s0;
    s1 = func_0030edb0(a0);
    s0 = func_00310330(a0);
    if (((s32)(s1) != 0)) {
        func_0030ee00();
    }
    return s0;
}
