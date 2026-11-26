// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00373a88 asm("D_00373a88");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00257070(u32) asm("func_00257070");
extern "C" u32 func_00257140(u32) asm("func_00257140");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x00272938 func_00272938
u32 func_00272938() asm("_ZN2Tz8CmCustom14UpdateItemListEv");
u32 func_00272938() {
    u32 v0;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 v0_0;
    u32 s0_1;
    u32 s1_2;
    u32 s2_3;
    u32 v0_4;
    v0 = func_00257770();
    s0 = (v0 + 0x60a4);
    s1 = 1;
    s2 = (u32)&D_00373a88;
    do {
        func_00138c10(s0, func_00257140(0));
        *(u32*)((s0 + 0x198)) = func_00192048(*(u16*)(s2));
        s0 = (s0 + 0x1b4);
        s1 = (s1 + -1);
        s2 = (s2 + 2);
    } while (((s32)(s1) >= 0));
    v0_0 = func_00257070(0x19);
    if (((s32)(v0_0) != 0)) {
        s0_1 = (v0 + 0x640c);
        s1_2 = 1;
        s2_3 = (u32)&D_00373a88;
        do {
            func_00138c10(s0_1, func_00257140(0));
            v0_4 = func_00192048(*(u16*)(s2_3));
            *(u32*)((s0_1 + 0x198)) = v0_4;
            s0_1 = (s0_1 + 0x1b4);
            s1_2 = (s1_2 + -1);
            s2_3 = (s2_3 + 2);
            v0_0 = v0_4;
        } while (((s32)(s1_2) >= 0));
    }
    return v0_0;
}
