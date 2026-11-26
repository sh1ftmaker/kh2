// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00367138 asm("D_00367138");
extern "C" u32 D_0036713c asm("D_0036713c");
extern "C" u32 D_01e3b308 asm("D_01e3b308");
extern "C" u32 func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x00310d80 func_00310d80
u32 func_00310d80() asm("func_00310d80");
u32 func_00310d80() {
    *(u32*)(&D_00367138) = 0;
    *(u32*)(&D_0036713c) = 0;
    return func_002fde18((u32)&D_01e3b308, 0, 0x200);
}
