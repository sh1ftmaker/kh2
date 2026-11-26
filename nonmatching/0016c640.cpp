// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001b9bc8(u32) asm("func_001b9bc8");
extern "C" void func_0016c5a0(u32, u32) asm("func_0016c5a0");

// 0x0016c640 wtarget_0016c640(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_0016c640(u32 a0) asm("_Z16wtarget_0016c640jjjj");
u32 lift_0016c640(u32 a0) {
    u32 s0;
    u32 v0_0;
    s0 = 0;
    while ((v0_0 = func_001b9bc8(s0)), (s0 = v0_0), ((s32)(v0_0) != 0)) {
        func_0016c5a0(v0_0, a0);
    }
    return v0_0;
}
