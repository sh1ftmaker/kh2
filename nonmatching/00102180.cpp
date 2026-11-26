// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0038aa40 asm("D_0038aa40");

// 0x00102180 func_00102180
u32 func_00102180(u32 a0) asm("_ZN9GAME_MODE11getExecModeEPPS_");
u32 func_00102180(u32 a0) {
    u32 t5;
    u32 v0;
    u32 t6;
    t5 = 0;
    v0 = 0;
    for (;;) {
        t6 = (t5 == 0) ? *(u32*)(&D_0038aa40) : *(u32*)((t5 + 0xc));
        t5 = t6;
        if (((s32)(t6) == 0)) break;
        if ((*(u32*)((t6 + 0x1c)) != 1)) {
            continue;
        }
        *(u32*)(a0) = t6;
        v0 = (v0 + 1);
        a0 = (a0 + 4);
    }
    return v0;
}
