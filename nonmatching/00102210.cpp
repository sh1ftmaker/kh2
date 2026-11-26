// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0038aa40 asm("D_0038aa40");

// 0x00102210 func_00102210
u32 func_00102210() asm("func_00102210");
u32 func_00102210() {
    u32 t6;
    u32 v0;
    t6 = 0;
    for (;;) {
        v0 = (t6 == 0) ? *(u32*)(&D_0038aa40) : *(u32*)((t6 + 0xc));
        t6 = v0;
        if (((s32)(v0) == 0)) break;
        if ((*(u32*)((v0 + 0x1c)) == 1)) {
            return v0;
        }
    }
    return 0;
}
