// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f3b38 asm("D_004f3b38");

// 0x00161030 func_00161030
u32 func_00161030(u32 a0) asm("func_00161030");
u32 func_00161030(u32 a0) {
    u32 t5;
    u32 t6;
    u32 v0;
    t5 = 0;
    t6 = 0;
    for (;;) {
        v0 = (t6 == 0) ? *(u32*)(&D_004f3b38) : *(u32*)((t6 + 0x80));
        t6 = v0;
        if (((s32)(v0) == 0)) break;
        if (((s32)(*(u32*)((v0 + 0x1b0))) != 0)) {
            continue;
        }
        if ((t5 == a0)) {
            return v0;
        }
        t5 = (t5 + 1);
    }
    return 0;
}
