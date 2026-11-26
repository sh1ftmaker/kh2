// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001a25c8 func_001a25c8
void func_001a25c8(u32 a0, u32 a1) asm("_ZN2YS5SHEET10add_wisdomEi");
void func_001a25c8(u32 a0, u32 a1) {
    u32 t6;
    u32 t4;
    u32 t7;
    u32 t6_0;
    u32 t7_1;
    t6 = *(u32*)((a0 + 0x244));
    if ((t6 != 0)) {
        t4 = *(u8*)((t6 + 0xa));
        if (((s32)(((t4 & 0xff) + a1)) >= (s32)(0x65))) {
            a1 = (0x64 - (t4 & 0xff));
            t7 = (t4 + (0x64 - (t4 & 0xff)));
        } else {
            t7 = (t4 + a1);
        }
        *(u8*)((t6 + 0xa)) = t7;
    }
    t6_0 = *(u16*)((a0 + 0x18a));
    t7_1 = *(u16*)((a0 + 0x192));
    *(u16*)((a0 + 0x18a)) = (t6_0 + a1);
    *(u16*)((a0 + 0x192)) = (t7_1 + a1);
    return;
}
