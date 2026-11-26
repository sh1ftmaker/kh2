// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f230 asm("D_0035f230");

// 0x002799b0 func_002799b0
void func_002799b0() asm("_ZN2Tz9CmAbility11CalcEquipApEv");
void func_002799b0() {
    u32 t3;
    u32 t4;
    u32 t6;
    u32 t6_0;
    *(u16*)((*(u32*)(&D_0035f230) + 4)) = 0;
    if (((s32)(*(s8*)((*(u32*)(&D_0035f230) + 7))) > 0)) {
        t3 = 0x360000;
        t4 = 0;
        do {
            t6 = (t4 << 3);
            t6_0 = (t6 + *(u32*)((t3 + -0xdd0)));
            t4 = (t4 + 1);
            if (((s32)(*(s8*)((t6_0 + 0xe))) != 0)) {
                *(u16*)((*(u32*)((t3 + -0xdd0)) + 4)) = (*(u16*)((*(u32*)((t3 + -0xdd0)) + 4)) + *(s8*)((t6_0 + 0x11)));
            }
            t3 = 0x360000;
        } while (((s32)(((s32)(t4) < (s32)(*(s8*)((*(u32*)((t3 + -0xdd0)) + 7))))) != 0));
    }
    return;
}
