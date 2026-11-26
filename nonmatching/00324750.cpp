// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00324750 wtarget_00324750(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_00324750(u32 a0, u32 a1) asm("_Z16wtarget_00324750jjjj");
u32 lift_00324750(u32 a0, u32 a1) {
    u32 t1;
    u32 t2;
    u32 t6;
    u32 t5;
    u32 t6_0;
    u32 v0;
    u32 a0_1;
    u32 t7;
    u32 t6_2;
    if ((a1 == 0xffffffff)) {
        t1 = *(u16*)((a0 + 0xa));
        if (((s32)(((s32)((t1 << 0x10)) >> 0x10)) > 0)) {
            t2 = 0;
            t6 = ((s32)((t1 << 0x10)) >> 0x10);
            do {
                t5 = *(u32*)(((a0 + (t2 * 4)) + 0x10));
                if (((s32)(t5) >= 0)) {
                    u32 cse1 = (a0 + (t6 << 2)) + t5;
                    t6_0 = *(u8*)((cse1 + 0x12));
                    v0 = ((t6_0 << 8) + *(u8*)((cse1 + 0x11)));
                } else {
                    v0 = 0xffffffff;
                }
                if ((v0 != 0xffffffff)) {
                    return v0;
                }
                t2 = (t2 + 1);
                t6 = ((s32)((t1 << 0x10)) >> 0x10);
            } while (((s32)(((s32)(t2) < (s32)(((s32)((t1 << 0x10)) >> 0x10)))) != 0));
            return 0xffffffff;
        } else {
            return 0xffffffff;
        }
    } else {
        a0_1 = *(u32*)((((a1 << 2) + a0) + 0x10));
        if (((s32)(a0_1) >= 0)) {
            t7 = *(s16*)((a0 + 0xa));
            u32 cse0 = (a0 + (t7 << 2)) + a0_1;
            t6_2 = *(u8*)((cse0 + 0x12));
            return ((t6_2 << 8) + *(u8*)((cse0 + 0x11)));
        } else {
            return 0xffffffff;
        }
    }
}
