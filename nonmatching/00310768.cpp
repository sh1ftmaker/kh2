// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0030edb0(u32, u32, u32, u32) asm("func_0030edb0");
extern "C" u32 func_00310670(u32, u32, u32, u32) asm("func_00310670");
extern "C" void func_0030ee00() asm("func_0030ee00");

// 0x00310768 func_00310768
u32 func_00310768(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00310768");
u32 func_00310768(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 s4;
    u32 s0;
    s4 = func_0030edb0(a0, a1, a2, a3);
    s0 = func_00310670(a0, a1, a2, a3);
    if (((s32)(s4) != 0)) {
        func_0030ee00();
    }
    return s0;
}
