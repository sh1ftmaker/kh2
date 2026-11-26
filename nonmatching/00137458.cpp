// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347d30 asm("D_00347d30");

// 0x00137458 wtarget_00137458(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00137458(u32 a0, u32 a1) asm("_Z16wtarget_00137458jjjj");
void lift_00137458(u32 a0, u32 a1) {
    u32 t5;
    u32 t6;
    u32 t7;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            t5 = 0xffffffff;
            t6 = 1;
            t7 = (u32)&D_00347d30;
            do {
                *(u32*)(((t7 + ((t6 - 1) * -0x10)) + 0xc)) = 0;
                t6 = (t6 + -1);
            } while ((t6 != t5));
        }
    }
    return;
}
