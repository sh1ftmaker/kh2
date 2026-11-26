// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S6_2_s16 { u8 _p[2]; s16 m; u8 _q[2]; };
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f04c asm("D_0035f04c");
extern "C" u32 D_00373e30 asm("D_00373e30");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0027af58() asm("func_0027af58");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0028aa40(u32) asm("func_0028aa40");
extern "C" u32 func_0028acb8(u32) asm("func_0028acb8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028be58(u32) asm("func_0028be58");
extern "C" void func_0028bdb8(u32) asm("func_0028bdb8");
extern "C" void func_0028dac8(u32, u32) asm("func_0028dac8");

// 0x0027ac38 Tz::CmAbility::FadeOutAbilityList()
void lift_0027ac38() asm("_ZN2Tz9CmAbility18FadeOutAbilityListEv");
void lift_0027ac38() {
    u32 s0;
    u32 v0;
    s0 = func_00257770();
    if (((u32)((func_00287bc0() + -0x11)) < (u32)(3))) {
        v0 = func_0027af58();
        func_0028dac8(s0, ((S6_2_s16*)&D_00373e30)[v0].m);
        if (((s32)(func_0028be58(*(u32*)(&D_0035f04c))) != 0)) {
            func_0028bdb8(*(u32*)(&D_0035f04c));
        }
        if ((func_0028acc8(*(u32*)(&D_0035f01c)) != 0)) {
            if ((func_0028acb8(*(u32*)(&D_0035f01c)) == 0)) {
                func_0028aa40(*(u32*)(&D_0035f01c));
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
