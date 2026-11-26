// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00374aa0 asm("D_00374aa0");

// 0x0029ec40 func_0029ec40
u32 func_0029ec40(u32 a0) asm("func_0029ec40");
u32 func_0029ec40(u32 a0) {
    u32 t4;
    u32 t7;
    if (((s32)(*(u16*)(&D_00374aa0)) != 0)) {
        t4 = 0;
        t7 = (u32)&D_00374aa0;
        do {
            if ((*(u16*)(t7) == a0)) {
                t4 = (t4 + 1);
                return 1;
            }
            t4 = (t4 + 1);
            t7 = (t4 << 1);
            t7 = (t7 + (u32)&D_00374aa0);
        } while (((s32)(t7) != 0));
        return 0;
    } else {
        return 0;
    }
}
