// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00307f40 asm("D_00307f40");
extern "C" u32 func_003071d0(u32, u32, u32, u32, u32) asm("func_003071d0");
extern "C" u32 func_0030edb0(u32, u32) asm("func_0030edb0");
extern "C" u32 func_0030ee00() asm("func_0030ee00");

// 0x00308060 func_00308060
u32 func_00308060(u32 a0, u32 a1) asm("func_00308060");
u32 func_00308060(u32 a0, u32 a1) {
    u32 loc_0;
    u32 s0;
    u32 v0;
    u32 v0_0;
    loc_0 = 0;
    s0 = func_0030edb0(a0, a1);
    v0 = func_003071d0((u32)&D_00307f40, (u32)&loc_0, 0xffffffff, a0, a1);
    if (((s32)(s0) != 0)) {
        v0_0 = func_0030ee00();
        v0 = v0_0;
    }
    return v0;
}
