// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001a1aa0 YS::SHEET::add_drive(int)
void lift_001a1aa0(u32 a0, u32 a1) asm("_ZN2YS5SHEET9add_driveEi");
void lift_001a1aa0(u32 a0, u32 a1) {
    u32 t5;
    u32 t6;
    u32 t7;
    u32 t7_0;
    u32 t5_1;
    u32 t5_2;
    u32 t5_3;
    if (((s32)(a1) >= 0)) {
        t5 = (*(u8*)((a0 + 0x1b0)) + a1);
        if (((s32)(((s32)(t5) < (s32)(0x64))) == 0)) {
            t6 = *(u8*)((a0 + 0x1b1));
            t7 = (*(u8*)((a0 + 0x1b1)) & 0xff);
            do {
                if (((s32)(((u32)((t6 & 0xff)) < (u32)(*(u8*)((a0 + 0x1b2))))) != 0)) {
                    t7_0 = (t6 + 1);
                    *(u8*)((a0 + 0x1b1)) = t7_0;
                    t6 = t7_0;
                }
                if (((u32)((t6 & 0xff)) >= (u32)(*(u8*)((a0 + 0x1b2))))) {
                    t5 = 0x64;
                    break;
                }
                t5_1 = (t5 + -0x64);
                t5 = t5_1;
                t7 = ((s32)(t5_1) < (s32)(0x64));
            } while ((t7 == 0));
        }
        t5_3 = t5;
    } else {
        t5_2 = (*(u8*)((a0 + 0x1b0)) + a1);
        if (((s32)(t5_2) < 0)) {
            if (((*(u8*)((a0 + 0x1b1)) & 0xff) != 0)) {
                *(u8*)((a0 + 0x1b1)) = (*(u8*)((a0 + 0x1b1)) + -1);
                t5_2 = (t5_2 + 0x64);
            } else {
                t5_2 = 0;
            }
        }
        t5_3 = t5_2;
    }
    *(u8*)((a0 + 0x1b0)) = t5_3;
    return;
}
