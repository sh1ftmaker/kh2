// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035eb98 asm("D_0035eb98");
extern "C" u32 D_0035f664 asm("D_0035f664");
extern "C" u32 D_0035f674 asm("D_0035f674");
extern "C" u32 D_00373100 asm("D_00373100");
extern "C" u32 D_00373108 asm("D_00373108");
extern "C" u32 D_00373130 asm("D_00373130");
extern "C" u32 D_00373138 asm("D_00373138");
extern "C" u32 func_0023ee30(u32) asm("func_0023ee30");
extern "C" u32 func_0023f948(u32, u32) asm("func_0023f948");
extern "C" u32 func_0025dba8() asm("func_0025dba8");
extern "C" void func_002369a0(u32) asm("func_002369a0");
extern "C" void func_0023c008(u32) asm("func_0023c008");
extern "C" void func_0023d2e0(u32) asm("func_0023d2e0");
extern "C" void func_0023ef50(u32) asm("func_0023ef50");
extern "C" void func_00240b90(u32) asm("func_00240b90");
extern "C" void func_00263960(u32, u32, u32, u32, u32) asm("func_00263960");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_0028d7f0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d7f0");
extern "C" void func_0028f280(u32, u32, u32, u32, u32) asm("func_0028f280");

// 0x0025d918 Tz::CmLoad::Setup()
u32 lift_0025d918() asm("_ZN2Tz6CmLoad5SetupEv");
u32 lift_0025d918() {
    u32 v0;
    u32 loc_0;
    u32 loc_10;
    v0 = func_0023ee30(0xa0);
    *(u32*)(v0) = (u32)&D_0035eb98;
    *(u32*)((v0 + 0xc)) = 0;
    func_002369a0(v0 + 0x18);
    func_0023c008(v0 + 0x30);
    *(u32*)(&D_0035f664) = v0;
    loc_0 = 0;
    func_0028d7f0(*(u32*)(&D_0035f664), 0x7557, 0, 0, 0, 1, func_0023f948(*(u32*)(&D_0035f674), 1), 0);
    func_0023ef50(*(u32*)(&D_0035f664));
    func_0028f280(0, 0, *(u32*)(&D_0035f664), (u32)&D_00373108, (u32)&D_00373130);
    func_00263960(0, 0, *(u32*)(&D_0035f664), (u32)&D_00373100, (u32)&D_00373138);
    func_0023d2e0((u32)&loc_10);
    func_00240b90(loc_10);
    func_00287bd0(1, 0);
    func_00287cc0(0);
    return func_0025dba8();
}
