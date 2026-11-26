// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035ef6c asm("D_0035ef6c");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 func_001395f8(u32) asm("func_001395f8");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_00257140(u32) asm("func_00257140");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00139688(u32) asm("func_00139688");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x00261b30 func_00261b30
u32 func_00261b30() asm("_ZN2Tz6CmItem15CreateEquipListEv");
u32 func_00261b30() {
    u8 frame[16];
    u32 v0;
    u32 fp;
    u32 s5;
    u32 s6;
    u32 s7;
    u32 t7;
    u32 s3;
    u32 s0;
    u32 v0_1;
    u32 v0_2;
    v0 = func_00257770();
    func_00139d78(v0);
    func_0028d8c0(v0, 0x753d, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x8c, 0x8d, 0x64);
    fp = 0x360000;
    s5 = 0;
    s6 = v0;
    s7 = 0x64;
    t7 = 0x360000;
    do {
        *(u32*)((u32)frame) = s7;
        func_0028d980((v0 + (s5 * 0x1b4)) + 0x3610, 0x753e, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)((fp + -0xfc4)), 0x96, 0xffffffff, 0xffffffff);
        s3 = func_0023aa98((v0 + (s5 * 0x1b4)) + 0x3628);
        s0 = func_0023aa78((v0 + (s5 * 0x1b4)) + 0x3628);
        func_00138c10((v0 + (s5 * 0x1b4)) + 0x3610, *(u32*)(&D_0035ef6c));
        func_00138c68((v0 + (s5 * 0x1b4)) + 0x3610, (s5 - (((s32)((s5 + (s5 >> 0x1f))) >> 1) << 1)) * s3, ((s32)((s5 + (s5 >> 0x1f))) >> 1) * s0);
        func_0028dcc0((v0 + (s5 * 0x1b4)) + 0x3610, s6);
        func_00139688((v0 + (s5 * 0x1b4)) + 0x3610);
        func_00139620((v0 + (s5 * 0x1b4)) + 0x3610);
        v0_1 = func_00257140(0);
        *(u32*)((u32)frame) = s7;
        func_0028d980((v0 + (s5 * 0x1b4)) + 0x5ef0, 0x753f, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)((fp + -0xfc4)), v0_1, 0xffffffff, 0xffffffff);
        func_0028dcc0((v0 + (s5 * 0x1b4)) + 0x5ef0, (v0 + (s5 * 0x1b4)) + 0x3610);
        func_00139620((v0 + (s5 * 0x1b4)) + 0x5ef0);
        v0_2 = func_001395f8((v0 + (s5 * 0x1b4)) + 0x5ef0);
        s5 = (s5 + 1);
        t7 = ((s32)(s5) < (s32)(0x14));
    } while ((t7 != 0));
    return v0_2;
}
