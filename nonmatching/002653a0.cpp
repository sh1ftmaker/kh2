// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035ef6c asm("D_0035ef6c");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f0e4 asm("D_0035f0e4");
extern "C" u32 D_00373500 asm("D_00373500");
extern "C" u32 func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_00257140(u32) asm("func_00257140");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00139688(u32) asm("func_00139688");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0023aa78(u32) asm("func_0023aa78");
extern "C" void func_0023aa98(u32) asm("func_0023aa98");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x002653a0 Tz::CmStat::CreateTopList()
u32 lift_002653a0() asm("_ZN2Tz6CmStat13CreateTopListEv");
u32 lift_002653a0() {
    u8 frame[16];
    u32 v0;
    u32 fp;
    u32 s4;
    u32 s5;
    u32 s7;
    u32 s3;
    u32 s0;
    u32 v0_1;
    u32 v0_2;
    v0 = func_00257770();
    func_00139d78(v0);
    func_0028d8c0(v0, 0x753d, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x8c, 0x8d, 0);
    fp = 0x360000;
    s4 = v0;
    s5 = 0;
    s7 = *(s16*)(&D_00373500);
    do {
        *(u32*)((u32)frame) = 0;
        func_0028d980(s4 + 0x3610, 0x753e, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)((fp + -0xfc4)), s7, 0xffffffff, 0xffffffff);
        func_0023aa98(s4 + 0x3628);
        func_0023aa78(s4 + 0x3628);
        s3 = func_0023aa18(s4 + 0x3628);
        s0 = func_0023aa38(s4 + 0x3628);
        func_00138c10(s4 + 0x3610, *(u32*)(&D_0035ef6c));
        func_0028dcc0(s4 + 0x3610, v0);
        func_00139688(s4 + 0x3610);
        func_00139620(s4 + 0x3610);
        func_001395f8(s4 + 0x3610);
        v0_1 = func_00257140(2);
        *(u32*)((u32)frame) = 0;
        func_0028d980(s4 + 0x5ef0, 0x753f, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)((fp + -0xfc4)), v0_1, 0xffffffff, 0xffffffff);
        func_0028dcc0(s4 + 0x5ef0, s4 + 0x3610);
        func_00139620(s4 + 0x5ef0);
        func_001395f8(s4 + 0x5ef0);
        *(u32*)((s4 + 0x60a0)) = 1;
        v0_2 = func_00138c68(s4 + 0x5ef0, s3, s0);
        *(u32*)((s4 + 0x6088)) = ((*(u32*)(&D_0035f0e4) + (s5 << 5)) + 0x524);
        s4 = (s4 + 0x1b4);
        s5 = (s5 + 1);
    } while (((s32)(((s32)(s5) < (s32)(0x14))) != 0));
    return v0_2;
}
