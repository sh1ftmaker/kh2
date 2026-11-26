// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 func_00257070(u32) asm("func_00257070");
extern "C" u32 func_00281180(u32, u32) asm("func_00281180");

// 0x0026b508 func_0026b508
u32 func_0026b508() asm("_ZN2Tz7CmEquip9SortEquipEv");
u32 func_0026b508() {
    u32 v0;
    u32 t0;
    u32 t1;
    u32 t6;
    u32 t6_0;
    u32 t5;
    u32 t7;
    u32 t4;
    v0 = func_00281180(*(u32*)(&D_0035f010), func_00257070(1));
    t0 = *(u32*)((v0 + 0x244));
    t1 = *(u8*)((t0 + 0x11));
    if (((s32)(t1) != 0)) {
        t6 = 0;
        do {
            if (((s32)(((s32)((t6 + 1)) < (s32)(t1))) != 0)) {
                t6_0 = (((t6 + 1) << 1) + t0);
                t5 = (t1 - (t6 + 1));
                do {
                    t7 = *(u16*)((((t6 << 1) + t0) + 0x24));
                    if (((s32)(t7) == 0)) {
                        t4 = *(u16*)((t6_0 + 0x24));
                        if (((s32)((t4 & 0xffff)) != 0)) {
                            *(u16*)((((t6 << 1) + t0) + 0x24)) = t4;
                            *(u16*)((t6_0 + 0x24)) = 0;
                        }
                    }
                    t5 = (t5 + -1);
                    t6_0 = (t6_0 + 2);
                } while (((s32)(t5) != 0));
            }
            t6 = (t6 + 1);
        } while (((s32)(((s32)(t6) < (s32)(t1))) != 0));
    }
    return v0;
}
