// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001d9688 wtarget_001d9688(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_001d9688(u32 a0, u32 a1, u32 a2) asm("_Z16wtarget_001d9688jjjj");
u32 lift_001d9688(u32 a0, u32 a1, u32 a2) {
    u32 t7;
    u32 t7_0;
    u32 t6;
    u32 v0;
    u32 t5;
    t7 = (a1 << 1);
    t7_0 = (t7 + a1);
    t6 = ((t7_0 + a0) + a2);
    v0 = *(u8*)(t6);
    if (((s32)(((u32)((v0 & 0xff)) < (u32)(0x63))) != 0)) {
        t5 = (v0 + 1);
        *(u8*)(t6) = t5;
        v0 = t5;
    }
    return (v0 & 0xff);
}
