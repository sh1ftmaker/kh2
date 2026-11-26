// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00288308 asm("D_00288308");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0035f328 asm("D_0035f328");
extern "C" u32 D_0035f32c asm("D_0035f32c");
extern "C" u32 D_0035f32e asm("D_0035f32e");
extern "C" u32 D_0035f334 asm("D_0035f334");
extern "C" u32 D_0035f338 asm("D_0035f338");
extern "C" u32 D_0035f33c asm("D_0035f33c");
extern "C" u32 D_0035f340 asm("D_0035f340");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_00103eb0() asm("func_00103eb0");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" void func_002369a0(u32) asm("func_002369a0");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_0023c008(u32) asm("func_0023c008");
extern "C" void func_0023f800(u32) asm("func_0023f800");

// 0x002880b8 func_002880b8
u32 func_002880b8() asm("_ZN2Tz9MenuBasic4InitEv");
u32 func_002880b8() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    *(u16*)(&D_0035f32c) = 0xffffffff;
    *(u16*)(&D_0035f32e) = 0xffffffff;
    v0 = func_001063c0(0x1c, func_00103570());
    func_0023f800(v0);
    *(u32*)(&D_0035f334) = v0;
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x198, 0);
    *(u32*)(v0_0) = (u32)&D_00347e60;
    *(u32*)((v0_0 + 0xc)) = 0;
    func_00239700(v0_0 + 0x18);
    *(u32*)(&D_0035f338) = v0_0;
    v0_1 = func_001063c0(0x18, func_00103570());
    func_002369a0(v0_1);
    *(u32*)(&D_0035f33c) = v0_1;
    v0_2 = func_001063c0(0x5c, func_00103570());
    func_0023c008(v0_2);
    *(u8*)(&D_0035f328) = 0;
    *(u32*)(&D_0035f340) = v0_2;
    return func_00102818(*(u32*)((func_00103eb0() + 4)), 0, 0x7ce, (u32)&D_00288308, 0x1000);
}
