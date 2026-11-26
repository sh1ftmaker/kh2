// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002384f8 func_002384f8
void func_002384f8(u32 a0, u32 a1) asm("_ZN2YI6SPRITE14_GetScrollModeEi");
void func_002384f8(u32 a0, u32 a1) {
    u32 t7;
    u32 t7_0;
    u32 t6;
    u32 t4;
    u32 t3;
    u32 t4_1;
    u32 t7_2;
    u32 t7_3;
    u32 a0_4;
    u32 t7_5;
    u32 t7_6;
    t7 = *(u32*)((a0 + 0xc));
    t7_0 = (t7 + (a1 << 2));
    t6 = *(u16*)(t7_0);
    t4 = *(u32*)((a0 + 8));
    t3 = *(u16*)((t7_0 + 2));
    if (((s32)(t3) > 0)) {
        t4_1 = (t4 + (t6 * 0x14));
        t7_2 = *(u32*)((t4_1 + 0x10));
        do {
            t7_3 = *(u32*)((t4_1 + 0x10));
            a0_4 = *(u32*)((a0 + 4));
            t7_5 = (t7_3 * 0x2c);
            t7_6 = (a0_4 + t7_5);
            if (!((*(f32*)((t7_6 + 0x14)) == 0.0f))) {
                return;
            }
            if (!((*(f32*)((t7_6 + 0x18)) == 0.0f))) {
                return;
            }
            t3 = (t3 + -1);
            t4_1 = (t4_1 + 0x14);
            t7_2 = t7_6;
        } while (((s32)(t3) > 0));
        return;
    } else {
        return;
    }
}
