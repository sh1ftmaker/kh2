// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00288ce0 func_00288ce0
void func_00288ce0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZN2Tz6Select3SetEPNS_8MenuItemEiPKsS4_");
void func_00288ce0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 t6;
    u32 a2_0;
    u32 t3;
    u32 t4;
    u32 t6_1;
    u32 t5;
    u32 t7;
    u32 t7_2;
    u32 t3_3;
    t6 = (a2 << 2);
    *(u32*)((t6 + *(u32*)((a0 + 0x28)))) = a1;
    if (((s32)(a2) >= (s32)(*(s16*)((a0 + 4))))) {
        *(u16*)((a0 + 4)) = (a2 + 1);
    }
    a2_0 = (a2 << 3);
    t3 = 0;
    t4 = a4;
    t6_1 = a3;
    do {
        t5 = ((s32)(a3) != 0) ? *(u16*)(t6_1) : 0xffffffff;
        *(u16*)((a2_0 + *(u32*)((a0 + 0x2c)))) = t5;
        if (((s32)(a4) != 0)) {
            t7_2 = *(u16*)(t4);
        } else {
            t7 = (a2_0 + *(u32*)((a0 + 0x2c)));
            t7_2 = *(u16*)(t7);
        }
        *(u16*)((a2_0 + *(u32*)((a0 + 0x30)))) = t7_2;
        t3_3 = (t3 + 1);
        a2_0 = (a2_0 + 2);
        t3 = t3_3;
        t4 = (t4 + 2);
        t6_1 = (t6_1 + 2);
    } while (((s32)(((s32)(t3_3) < (s32)(4))) != 0));
    *(u16*)((a0 + 0xe)) = 0;
    *(u16*)((a0 + 0x16)) = *(u16*)((a0 + 4));
    return;
}
