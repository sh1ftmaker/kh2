// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001b9bc8(u32) asm("func_001b9bc8");

// 0x001dba18 func_001dba18
u32 func_001dba18(u32 a0) asm("_ZN2YS8CROWDOBJ6SearchEPKNS_8OBJENTRYE");
u32 func_001dba18(u32 a0) {
    u32 s0;
    u32 v0;
    u32 v0_0;
    s0 = 0x10000000;
    v0 = 0;
    while ((v0_0 = func_001b9bc8(v0)), ((s32)(v0_0) != 0)) {
        if (((s32)((*(u32*)((v0_0 + 0x588)) & s0)) == 0)) {
            v0 = v0_0;
            continue;
        }
        if ((*(u32*)((v0_0 + 8)) == a0)) {
            return v0_0;
        }
        v0 = v0_0;
    }
    return 0;
}
