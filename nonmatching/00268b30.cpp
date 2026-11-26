// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_001a80c8(u32) asm("func_001a80c8");
extern "C" u32 func_001a8190(u32) asm("func_001a8190");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_00257140(u32) asm("func_00257140");
extern "C" u32 func_00257770(u32) asm("func_00257770");
extern "C" u32 func_0026a178(u32, u32) asm("func_0026a178");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x00268b30 func_00268b30
u32 func_00268b30(u32 a0) asm("_ZN2Tz7CmEquip17SetupTitleAbilityEi");
u32 func_00268b30(u32 a0) {
    u32 s3;
    u32 v0;
    u32 v0_0;
    u32 s2;
    u32 s2_1;
    u32 s0;
    u32 loc_0;
    u32 s1;
    u32 s3_2;
    u32 s2_3;
    u32 s1_4;
    u32 v0_5;
    u32 v0_6;
    s3 = func_00257770(a0);
    v0 = (func_00287bc0() + -5);
    if (((s32)(((u32)(v0) < (u32)(2))) != 0)) {
        v0_0 = func_001a8190(func_0026a178(func_002570a0(2), 2));
        if (((s32)(*(u16*)((v0_0 + 2))) != 0)) {
            s2 = *(u16*)((v0_0 + 2));
            s2_1 = *(u16*)((func_001a80c8(*(u16*)((v0_0 + 2))) + 8));
            s0 = (s3 + 0x9c8);
            loc_0 = 0;
            func_0028d980(s0, a0 + 1, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), func_00257140(2), 0xffffffff, 0xffffffff);
            *(u32*)((s0 + 0x198)) = func_00192048(s2_1);
            func_0028dcc0(s0, s3 + 0x660);
            func_00139620(s0);
            s1 = (s3 + 0x678);
            func_001395f8(s0);
            s3_2 = func_0023aa18(s1);
            s2_3 = func_0023aa38(s1);
            s1_4 = func_0023aa98(s1);
            v0_5 = func_00138c68(s0, s3_2, s2_3);
            *(u32*)((s0 + 0x1a8)) = s1_4;
            *(u32*)((s0 + 0x1b0)) = 1;
            v0_0 = v0_5;
        }
        v0_6 = v0_0;
    } else {
        v0_6 = ((u32)(v0) < (u32)(2));
    }
    return v0_6;
}
