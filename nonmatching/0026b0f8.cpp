// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 func_00257070(u32) asm("func_00257070");
extern "C" u32 func_00257130() asm("func_00257130");
extern "C" u32 func_00281180(u32, u32) asm("func_00281180");
extern "C" u32 func_00281198(u32, u32) asm("func_00281198");
extern "C" u32 func_00281f20(u32) asm("func_00281f20");
extern "C" u32 func_002827f0(u32, u32, u32) asm("func_002827f0");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" void func_00282240(u32, u32, u32) asm("func_00282240");

// 0x0026b0f8 func_0026b0f8
u32 func_0026b0f8() asm("_ZN2Tz7CmEquip15CtrlAutoConfirmEv");
u32 func_0026b0f8() {
    u32 s1;
    u32 s0;
    u32 s2;
    u32 t6;
    u32 t7;
    u32 t7_0;
    u32 t7_1;
    u32 s1_2;
    s1 = func_0028b040(*(u32*)(&D_0035f01c));
    s0 = *(u16*)(((s1 * 6) + func_00281f20(func_00257130())));
    s2 = ((u32)(*(u8*)((((s1 * 6) + func_00281f20(func_00257130())) + 3))) < (u32)(1));
    t6 = *(u32*)((func_00281180(*(u32*)(&D_0035f010), func_00257070(1)) + 0x244));
    t7 = *(u8*)((t6 + 0x12));
    while (((s32)(t7) != 0)) {
        t7_0 = *(u16*)((t6 + 0x34));
        if ((t7_0 != s0)) {
            t7_1 = *(u16*)((t6 + 0x44));
            if ((t7_1 == s0)) {
                if (((s32)(s2) == 0)) {
                    s0 = 0;
                }
                *(u16*)((t6 + 0x44)) = s0;
            }
        } else {
            if (((s32)(s2) == 0)) {
                s0 = 0;
            }
            *(u16*)((t6 + 0x44)) = s0;
        }
        t7 = (t7 + -1);
        t6 = (t6 + 2);
    }
    s1_2 = (func_00281198(*(u32*)(&D_0035f010), func_00257070(1)) + 5);
    func_00282240(func_00257130(), s1_2, 0);
    return func_002827f0(func_00257130(), 0, 0);
}
