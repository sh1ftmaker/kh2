// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00354690 asm("D_00354690");
extern "C" u32 func_001e60b0() asm("func_001e60b0");

// 0x001e6250 func_001e6250
u32 func_001e6250() asm("func_001e6250");
u32 func_001e6250() {
    u32 v0;
    v0 = func_001e60b0();
    *(u32*)(&D_00354690) = 0;
    *(u32*)(((u32)&D_00354690 + 4)) = 0xffffffff;
    return v0;
}
