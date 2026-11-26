// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f230 asm("D_0035f230");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_00273180(u32, u32) asm("func_00273180");
extern "C" u32 func_0027af58() asm("func_0027af58");
extern "C" u32 func_0027b248(u32) asm("func_0027b248");
extern "C" u32 func_0027c3b8(u32) asm("func_0027c3b8");
extern "C" void func_0027aed8(u32, u32, u32) asm("func_0027aed8");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");

// 0x0027afe0 Tz::CmAbility::SetIndiAbilityDefaultPos()
u32 lift_0027afe0() asm("_ZN2Tz9CmAbility24SetIndiAbilityDefaultPosEv");
u32 lift_0027afe0() {
    u32 loc_0;
    u32 loc_4;
    u32 s1;
    u32 v0;
    u32 a0_0;
    u32 t7;
    u32 v0_1;
    u32 s0;
    u32 s0_2;
    u32 s0_3;
    u32 s0_4;
    u32 s0_5;
    u32 s0_6;
    func_0027aed8(func_002570a0(0xf), (u32)&loc_0, (u32)&loc_4);
    s1 = func_002570a0(0x10);
    v0 = func_0027af58();
    if (((s32)(*(s8*)((((s1 << 3) + *(u32*)(&D_0035f230)) + 0xe))) != 0)) {
        if ((loc_0 == 0)) {
            if ((loc_4 != 0)) {
                if ((v0 == 0)) {
                    if ((*(s8*)((((s1 << 3) + *(u32*)(&D_0035f230)) + 0x10)) == 0)) {
                        if ((func_0027c3b8(s1) == 0)) {
                            a0_0 = 0;
                            t7 = *(u8*)((func_00273180(4, 0xffffffff) + 5));
                            v0_1 = func_00273180(4, 0xffffffff);
                            do {
                                if ((*(u8*)(((v0_1 + (a0_0 * 8)) + 5)) == *(s8*)((((s1 << 3) + *(u32*)(&D_0035f230)) + 0x12)))) {
                                    break;
                                }
                                a0_0 = (a0_0 + 1);
                                t7 = ((s32)(a0_0) < (s32)(3));
                            } while ((t7 != 0));
                            s0 = (a0_0 + 1);
                        } else {
                            s0 = 1;
                        }
                        s0_2 = s0;
                    } else {
                        s0_2 = 1;
                    }
                    s0_3 = s0_2;
                } else {
                    s0_3 = 1;
                }
                s0_4 = s0_3;
            } else {
                s0_4 = 1;
            }
            s0_5 = s0_4;
        } else {
            s0_5 = 1;
        }
        s0_6 = s0_5;
    } else {
        s0_6 = 0;
    }
    func_002891f0(*(u32*)(&D_0035f01c), s0_6, 0, 0xffffffff, 0xffffffff);
    return func_0027b248((u32)(0) < (u32)(s0_6));
}
