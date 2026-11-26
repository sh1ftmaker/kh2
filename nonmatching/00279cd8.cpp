// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035ef6c asm("D_0035ef6c");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 func_001398d0(u32) asm("func_001398d0");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_00257140(u32) asm("func_00257140");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00139688(u32) asm("func_00139688");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x00279cd8 Tz::CmAbility::CreateTopList()
u32 lift_00279cd8() asm("_ZN2Tz9CmAbility13CreateTopListEv");
u32 lift_00279cd8() {
    u8 frame[16];
    u32 v0;
    u32 fp;
    u32 s7;
    u32 s4;
    u32 s3;
    u32 s5;
    u32 s0;
    v0 = func_00257770();
    func_00139d78(v0);
    func_0028d8c0(v0, 0x753d, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x8c, 0x8d, 0x64);
    fp = v0;
    s7 = 0;
    do {
        *(u32*)((u32)frame) = 0x64;
        func_0028d980(v0 + 0x3610, 0x753e, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x96, 0xffffffff, 0xffffffff);
        s4 = func_0023aa98(v0 + 0x3628);
        s3 = func_0023aa78(v0 + 0x3628);
        s5 = func_0023aa18(v0 + 0x3628);
        s0 = func_0023aa38(v0 + 0x3628);
        func_00138c10(v0 + 0x3610, *(u32*)(&D_0035ef6c));
        func_00138c68(v0 + 0x3610, (s7 - (((s32)((s7 + (s7 >> 0x1f))) >> 1) << 1)) * s4, ((s32)((s7 + (s7 >> 0x1f))) >> 1) * s3);
        func_0028dcc0(v0 + 0x3610, fp);
        func_00139688(v0 + 0x3610);
        func_00139620(v0 + 0x3610);
        *(u32*)((u32)frame) = 0x64;
        func_0028d980(v0 + 0xd30, 0x753f, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), func_00257140(0), 0xffffffff, 0xffffffff);
        func_0028dcc0(v0 + 0xd30, v0 + 0x3610);
        func_00138c68(v0 + 0xd30, s5, s0);
        func_00139620(v0 + 0xd30);
        func_001395f8(v0 + 0xd30);
        *(u32*)((v0 + 0xee0)) = 1;
        v0 = (v0 + 0x1b4);
        s7 = (s7 + 1);
    } while (((s32)(((s32)(s7) < (s32)(0x14))) != 0));
    return func_001398d0(0x64);
}
