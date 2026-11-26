// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_00373288 asm("D_00373288");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_0023aa58(u32) asm("func_0023aa58");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_00257140(u32) asm("func_00257140");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00262768() asm("func_00262768");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x002623c8 func_002623c8
u32 func_002623c8() asm("_ZN2Tz6CmItem14CreateCategoryEv");
u32 func_002623c8() {
    u8 frame[16];
    u32 v0;
    u32 fp;
    u32 s7;
    u32 s6;
    u32 s5;
    u32 s4;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s6_0;
    v0 = func_00257770();
    fp = (v0 + 0x9c8);
    func_00139d78(fp);
    *(u32*)((u32)frame) = 0;
    s7 = (*(u32*)(&D_0035f3d4) + 1);
    s6 = (v0 + 0x9e0);
    func_0028d980(fp, *(u32*)(&D_0035f3d4), *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0xf1, 0xf2, 0xffffffff);
    s5 = func_0023aa98(s6);
    s4 = func_0023aa58(s6);
    s0 = 4;
    s1 = 0;
    s2 = (v0 + 0xd30);
    s3 = func_00257140(0);
    s6_0 = (u32)&D_00373288;
    do {
        *(u32*)((u32)frame) = 0;
        func_0028d980(s2, s7, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), s3, 0xffffffff, 0xffffffff);
        func_0028dcc0(s2, fp);
        func_00139620(s2);
        *(u32*)((s2 + 0x1b0)) = 2;
        func_00138c68(s2, s1, 0);
        *(u32*)((s2 + 0x198)) = func_00192048(*(u16*)(s6_0));
        *(u32*)((s2 + 0x1a8)) = s4;
        s0 = (s0 + -1);
        s1 = (s1 + s5);
        s2 = (s2 + 0x1b4);
        s6_0 = (s6_0 + 2);
    } while (((s32)(s0) >= 0));
    return func_00262768();
}
