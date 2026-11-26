// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347d5c asm("D_00347d5c");
extern "C" u32 D_00347d60 asm("D_00347d60");
extern "C" u32 D_00347d90 asm("D_00347d90");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347e80 asm("D_00347e80");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 func_0013a7d0(u32) asm("func_0013a7d0");
extern "C" u32 func_001a84b0() asm("func_001a84b0");
extern "C" u32 func_002ba2e8(u32, u32) asm("func_002ba2e8");
extern "C" void func_00137890(u32, u32, u32, u32) asm("func_00137890");
extern "C" void func_00138650(u32, u32, u32, u32) asm("func_00138650");
extern "C" void func_001b1e80(u32) asm("func_001b1e80");
extern "C" void func_002361a0(u32) asm("func_002361a0");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x001382e0 dk::TREASURE_INFO::createEventInfo()
u32 lift_001382e0() asm("_ZN2dk13TREASURE_INFO15createEventInfoEv");
u32 lift_001382e0() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    v0 = func_001a84b0();
    func_001b1e80(*(u32*)((v0 + 8)));
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x1c0, 0);
    *(u32*)(v0_0) = (u32)&D_00347e80;
    *(u32*)((v0_0 + 0xc)) = 0;
    func_002361a0(v0_0 + 0x20);
    *(u32*)(&D_00347d5c) = v0_0;
    func_00138650(*(u32*)(&D_00347d5c), 0x1770, func_0013a7d0(1), 0);
    v0_1 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x520, 0);
    *(u32*)(v0_1) = (u32)&D_00347f98;
    func_0031a838(v0_1 + 0xc);
    *(u32*)(v0_1) = (u32)&D_00347e60;
    func_00239700(v0_1 + 0x18);
    *(u32*)(v0_1) = (u32)&D_00347d90;
    *(u32*)((v0_1 + 0x198)) = 0;
    *(u32*)((v0_1 + 0x1c0)) = (u32)&D_00347f98;
    func_0031a838(v0_1 + 0x1cc);
    *(u32*)((v0_1 + 0x1c0)) = (u32)&D_00347e80;
    func_002361a0(v0_1 + 0x1e0);
    *(u32*)((v0_1 + 0x380)) = (u32)&D_00347f98;
    func_0031a838(v0_1 + 0x38c);
    *(u32*)((v0_1 + 0x380)) = (u32)&D_00347e60;
    func_00239700(v0_1 + 0x398);
    *(u32*)(&D_00347d60) = v0_1;
    func_00137890(v0_1, *(u32*)(v0), *(u32*)((v0 + 8)), *(u32*)((v0 + 4)));
    return func_002ba2e8(0xa, 0);
}
