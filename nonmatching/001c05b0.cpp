// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d49328 asm("D_01d49328");
extern "C" u32 D_01d49350 asm("D_01d49350");

// 0x001c05b0 wtarget_001c05b0(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001c05b0(u32 a0, u32 a1) asm("_Z16wtarget_001c05b0jjjj");
void lift_001c05b0(u32 a0, u32 a1) {
    u32 t6;
    u32 t7;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            t6 = 7;
            t7 = (u32)&D_01d49328;
            do {
                *(u32*)((t7 + ((t6 - 7) * -4))) = 0;
                t6 = (t6 + -1);
            } while (((s32)(t6) >= 0));
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(u32*)(&D_01d49350) = 0;
                *(u32*)(((u32)&D_01d49350 + 4)) = 0;
            }
        }
    }
    return;
}
