// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035de0c asm("D_0035de0c");
extern "C" u32 func_00197920(u32) asm("func_00197920");
extern "C" u32 func_00226dc8() asm("func_00226dc8");

// 0x00226e60 func_00226e60
u32 func_00226e60(u32 a0) asm("func_00226e60");
u32 func_00226e60(u32 a0) {
    u32 v0;
    v0 = func_00197920(a0);
    if ((v0 != 0)) {
        *(u8*)(&D_0035de0c) = (a0 & 0xff);
        return func_00226dc8();
    } else {
        return v0;
    }
}
