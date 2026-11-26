// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0011ef70(u32, u32) asm("func_0011ef70");
extern "C" u32 func_0011f2f0(u32) asm("func_0011f2f0");

// 0x0011f3e0 func_0011f3e0
u32 func_0011f3e0(u32 a0) asm("func_0011f3e0");
u32 func_0011f3e0(u32 a0) {
    u32 v0;
    u32 v0_0;
    v0 = 0;
    do {
        *(u32*)((v0 + 0x14)) = a0;
        v0_0 = func_0011ef70(a0, v0);
        v0 = v0_0;
    } while ((v0 != 0));
    return func_0011f2f0(a0);
}
