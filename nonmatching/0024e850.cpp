// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0035eb98 asm("D_0035eb98");
extern "C" u32 D_0035ebb8 asm("D_0035ebb8");
extern "C" u32 D_0035ee04 asm("D_0035ee04");
extern "C" u32 D_0035ee08 asm("D_0035ee08");
extern "C" u32 D_0035ee0c asm("D_0035ee0c");
extern "C" u32 D_00372380 asm("D_00372380");
extern "C" u32 D_00372388 asm("D_00372388");
extern "C" u32 func_0023ee30(u32) asm("func_0023ee30");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" void func_002369a0(u32) asm("func_002369a0");
extern "C" void func_0023c008(u32) asm("func_0023c008");
extern "C" void func_0023f1e0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0023f1e0");
extern "C" void func_0023f6c0(u32, u32) asm("func_0023f6c0");
extern "C" void func_0024f348() asm("func_0024f348");
extern "C" void func_00288ce0(u32, u32, u32, u32, u32) asm("func_00288ce0");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028d7f0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d7f0");

// 0x0024e850 Tz::TTMY::Setup()
u32 lift_0024e850() asm("_ZN2Tz4TTMY5SetupEv");
u32 lift_0024e850() {
    u32 v0;
    u32 loc_0;
    u32 s1;
    u32 s2;
    u32 v0_0;
    v0 = func_0023ee30(0xa0);
    *(u32*)(v0) = (u32)&D_0035eb98;
    *(u32*)((v0 + 0xc)) = 0;
    func_002369a0(v0 + 0x18);
    func_0023c008(v0 + 0x30);
    *(u32*)(&D_0035ee08) = v0;
    loc_0 = 0;
    func_0028d7f0(v0, 0x7532, 0, 0, 0, 1, 0, 0);
    s1 = 0;
    s2 = 0x360000;
    do {
        func_00288ce0(*(u32*)((s2 + -0x11fc)), 0, s1, 0, 0);
        s1 = (s1 + 1);
    } while (((s32)(s1) < (s32)(5)));
    func_002891f0(*(u32*)(&D_0035ee04), 0, 0, 0xffffffff, 0xffffffff);
    func_0024f348();
    func_002891f0(*(u32*)(&D_0035ee04), func_002891e8(*(u32*)(&D_0035ee04)), 0, 0xffffffff, 0xffffffff);
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x4c, 0);
    *(u32*)(v0_0) = (u32)&D_0035ebb8;
    *(u32*)((v0_0 + 0xc)) = 0;
    *(u32*)(&D_0035ee0c) = v0_0;
    func_0023f1e0(v0_0, 0x7533, *(u32*)(&D_0035ee08), (u32)&D_00372380, (u32)&D_00372388, 0xffffffff, 0, 0);
    func_0023f6c0(*(u32*)(&D_0035ee0c), 2);
    return func_00287cc0(0);
}
