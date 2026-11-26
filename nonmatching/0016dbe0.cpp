// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00167f18(u32) asm("func_00167f18");

// 0x0016dbe0 func_0016dbe0
u32 func_0016dbe0(u32 a0) asm("func_0016dbe0");
u32 func_0016dbe0(u32 a0) {
    u32 v0;
    u8 t7;
    v0 = func_00167f18(0);
    t7 = (((u64)(*(u64*)((v0 + 8))) >> *(u32*)(a0)) & 1);
    *(u32*)(a0) = (t7 & 0xff);
    return v0;
}
