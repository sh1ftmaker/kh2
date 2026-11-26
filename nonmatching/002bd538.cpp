// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003617e0 asm("D_003617e0");
extern "C" u32 D_003617e4 asm("D_003617e4");
extern "C" u32 D_003617e8 asm("D_003617e8");
extern "C" u32 func_002b823c() asm("func_002b823c");

// 0x002bd538 func_002bd538
u32 func_002bd538() asm("func_002bd538");
u32 func_002bd538() {
    u32 v0;
    *(u32*)(&D_003617e4) = 0;
    v0 = func_002b823c();
    *(u32*)(&D_003617e0) = v0;
    *(u8*)(&D_003617e8) = 1;
    return v0;
}
