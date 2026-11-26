// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00180d40 wtarget_00180d40(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00180d40(u32 a0, u32 a1) asm("_Z16wtarget_00180d40jjjj");
void lift_00180d40(u32 a0, u32 a1) {
    u32 t5;
    u32 t4;
    u32 t6;
    u32 t3;
    u32 t4_0;
    u32 t6_1;
    u32 t7;
    t5 = (a0 + 0x14c);
    t4 = 0;
    t6 = *(u32*)(t5);
    do {
        if ((*(u32*)(t5) == a1)) {
            t3 = (((s32)(*(u32*)(t5)) < (s32)(0)) ? t4 : 0xffffffff);
            return;
        }
        t4_0 = (t4 + 1);
        t3 = (((s32)(*(u32*)(t5)) < (s32)(0)) ? t4 : 0xffffffff);
        t4 = t4_0;
        t6_1 = *(u32*)(t5);
        t5 = (t5 + 4);
        t6 = t6_1;
    } while (((s32)(t4_0) < (s32)(0x10)));
    t7 = (t3 << 2);
    *(u32*)(((t7 + a0) + 0x14c)) = a1;
    return;
}
