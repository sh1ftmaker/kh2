// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00373d70 asm("D_00373d70");
extern "C" u32 func_00276088(u32, u32, u32) asm("func_00276088");

// 0x00276150 func_00276150
u32 func_00276150(u32 a0, u32 a1, u32 a2) asm("func_00276150");
u32 func_00276150(u32 a0, u32 a1, u32 a2) {
    u32 loc_4;
    u32 loc_0;
    u32 v0;
    u32 t3;
    u32 t5;
    u32 t4;
    u32 t7;
    u32 t6;
    u32 t6_0;
    u32 t6_1;
    u32 t6_2;
    u32 t6_3;
    v0 = func_00276088(a0, (u32)&loc_0, (u32)&loc_4);
    t3 = 0;
    do {
        if (((s32)(t3) == 0)) {
            t5 = loc_0;
        } else {
            t5 = loc_4;
        }
        t4 = 0;
        t7 = *(u16*)((u32)&D_00373d70);
        t6 = (u32)&D_00373d70;
        do {
            if ((*(u16*)((t6 + (t4 * 2))) == t5)) {
                break;
            }
            t4 = (t4 + 1);
            t7 = ((s32)(t4) < (s32)(3));
        } while ((t7 != 0));
        if ((t5 != 1)) {
            if (((s32)(((s32)(t5) < (s32)(2))) != 0)) {
                if ((t5 != 0)) {
                    t6_0 = 0xffffffff;
                } else {
                    t6_0 = 0;
                }
                t6_2 = t6_0;
            } else {
                if ((t5 != 2)) {
                    t6_1 = 0xffffffff;
                } else {
                    t6_1 = 0xd;
                }
                t6_2 = t6_1;
            }
            t6_3 = t6_2;
        } else {
            t6_3 = 2;
        }
        if ((t3 == 0)) {
            *(u32*)(a1) = t6_3;
        } else {
            *(u32*)(a2) = t6_3;
        }
        t3 = (t3 + 1);
    } while (((s32)(((s32)(t3) < (s32)(2))) != 0));
    return v0;
}
