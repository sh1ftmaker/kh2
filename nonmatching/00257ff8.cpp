// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef70 asm("D_0035ef70");

// 0x00257ff8 func_00257ff8
u32 func_00257ff8(u32 a0) asm("func_00257ff8");
u32 func_00257ff8(u32 a0) {
    u32 t4;
    u32 t6;
    u32 t7;
    u8 t7_0;
    t4 = 0;
    t6 = 0;
    t7 = ((s32)(*(u16*)(&D_0035ef70)) >> 0);
    do {
        t7_0 = (((s32)(*(u16*)(&D_0035ef70)) >> t6) & 1);
        if ((t7_0 != 0)) {
            if ((t6 == a0)) {
                return (t4 + 1);
            }
            t4 = (t4 + 1);
        }
        t6 = (t6 + 1);
        t7 = ((s32)(t6) < (s32)(8));
    } while ((t7 != 0));
    return 0xffffffff;
}
