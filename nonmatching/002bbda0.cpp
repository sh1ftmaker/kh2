// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2aa80 asm("D_01e2aa80");

// 0x002bbda0 func_002bbda0
u32 func_002bbda0(u32 a0) asm("func_002bbda0");
u32 func_002bbda0(u32 a0) {
    u32 t6;
    u32 v0;
    t6 = 0;
    for (;;) {
        v0 = (t6 == 0) ? *(u32*)(&D_01e2aa80) : *(u32*)((t6 + 0x1c));
        t6 = v0;
        if (((s32)(v0) == 0)) break;
        if ((*(u32*)((v0 + 0x14)) == a0)) {
            return v0;
        }
    }
    return 0;
}
