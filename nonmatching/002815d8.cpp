// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0035f270 asm("D_0035f270");
extern "C" u32 D_0035f274 asm("D_0035f274");
extern "C" u32 D_0035f278 asm("D_0035f278");
extern "C" u32 D_0035f27c asm("D_0035f27c");
extern "C" u32 D_0035f280 asm("D_0035f280");
extern "C" u32 D_0035f284 asm("D_0035f284");
extern "C" u32 D_0035f288 asm("D_0035f288");
extern "C" u32 D_0035f28c asm("D_0035f28c");
extern "C" u32 D_0035f290 asm("D_0035f290");
extern "C" u32 D_0035f299 asm("D_0035f299");
extern "C" u32 D_0035f29c asm("D_0035f29c");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_002817b8() asm("func_002817b8");
extern "C" void func_002361a0(u32) asm("func_002361a0");
extern "C" void func_00239700(u32) asm("func_00239700");

// 0x002815d8 func_002815d8
u32 func_002815d8() asm("_ZN2Tz11ItemPicDraw4InitEv");
u32 func_002815d8() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    v0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x198, 0);
    *(u32*)(v0) = (u32)&D_00347e60;
    *(u32*)((v0 + 0xc)) = 0;
    func_00239700(v0 + 0x18);
    *(u32*)(&D_0035f288) = v0;
    *(u32*)(&D_0035f28c) = v0;
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x198, 0);
    *(u32*)(v0_0) = (u32)&D_00347e60;
    *(u32*)((v0_0 + 0xc)) = 0;
    func_00239700(v0_0 + 0x18);
    *(u32*)(&D_0035f290) = v0_0;
    v0_1 = func_001063c0(0x1a0, func_00103570());
    func_002361a0(v0_1);
    *(u32*)(&D_0035f270) = 0xffffffff;
    *(u32*)(&D_0035f274) = 0xffffffff;
    *(u32*)(&D_0035f278) = 0xffffffff;
    *(u32*)(&D_0035f27c) = 0xffffffff;
    *(u16*)(&D_0035f280) = 0xffffffff;
    *(u32*)(&D_0035f284) = 0;
    *(u8*)(&D_0035f299) = 1;
    *(u32*)(&D_0035f29c) = v0_1;
    return func_002817b8();
}
