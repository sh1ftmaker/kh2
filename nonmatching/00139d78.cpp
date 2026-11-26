// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");

// 0x00139d78 u_call4_00139d78(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_00139d78(u32 a0) asm("_Z16u_call4_00139d78jjjj");
u32 lift_00139d78(u32 a0) {
    u32 t4;
    u32 t6;
    *(u32*)((*(u32*)(&D_00347f80) + 0x64)) = a0;
    t4 = 0;
    while ((t6 = (t4 == 0) ? *(u32*)((*(u32*)(&D_00347f80) + 4)) : *(u32*)((t4 + 4))), (t4 = t6), ((s32)(t6) != 0)) {
        if ((t6 == a0)) {
            return 1;
        }
    }
    return 0;
}
