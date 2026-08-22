// coverage: addr=0x00263960 symbol=_ZN2Tz9CMenuHelp4InitEiiPNS_6LayoutEPKsS4_ size=148 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0035f0b8 asm("D_0035f0b8");
extern "C" u32 D_0035f0bc asm("D_0035f0bc");
extern "C" u32 D_0035f0c0 asm("D_0035f0c0");
extern "C" u32 D_0035f0dc asm("D_0035f0dc");
extern "C" u32 D_0035f360 asm("D_0035f360");
extern "C" u32 func_00239700(u32) asm("func_00239700");
extern "C" void func_00263bb0(u32, u32, u32, u32, u32) asm("func_00263bb0");

// 0x00263960 Tz::CMenuHelp::Init(int, int, Tz::Layout*, short const*, short const*)
u32 lift_00263960(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZN2Tz9CMenuHelp4InitEiiPNS_6LayoutEPKsS4_");
u32 lift_00263960(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 v0;
    u32 v0_0;
    *(u32*)(&D_0035f0b8) = a0;
    *(u32*)(&D_0035f0bc) = a1;
    *(u32*)(&D_0035f0c0) = a2;
    func_00263bb0(a3, a4, a2, a3, a4);
    v0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x1cc, 0);
    *(u32*)(v0) = (u32)&D_00347e60;
    *(u32*)((v0 + 0xc)) = 0;
    v0_0 = func_00239700(v0 + 0x18);
    *(u32*)(v0) = (u32)&D_0035f360;
    *(u32*)((v0 + 0x198)) = 0;
    *(u32*)(&D_0035f0dc) = v0;
    return v0_0;
}
