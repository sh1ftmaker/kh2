// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350440 asm("D_00350440");
extern "C" u32 D_01c62198 asm("D_01c62198");

// 0x0019b260 ctarget_0019b260(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_0019b260(u32 a0) asm("_Z16ctarget_0019b260jjjj");
u32 lift_0019b260(u32 a0) {
    u32 t4;
    u32 t7;
    u32 t5;
    if (((s32)(*(u32*)(&D_00350440)) > 0)) {
        t4 = 0;
        t7 = *(u32*)(((u32)&D_01c62198 + 8));
        t5 = (u32)&D_01c62198;
        do {
            if ((*(u16*)((*(u32*)(((t5 + (t4 * 0x38)) + 8)) + 2)) == a0)) {
                return (t5 + (t4 * 0x38));
            }
            t4 = (t4 + 1);
            t7 = ((s32)(t4) < (s32)(*(u32*)(&D_00350440)));
        } while ((t7 != 0));
    }
    return 0;
}
