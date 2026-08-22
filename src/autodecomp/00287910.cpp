// coverage: addr=0x00287910 symbol=func_00287910 size=276 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:81.1;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0035f2e8 asm("D_0035f2e8");
extern "C" u32 D_0035f2ec asm("D_0035f2ec");
extern "C" u32 D_0035f314 asm("D_0035f314");
extern "C" u32 D_0035f318 asm("D_0035f318");
extern "C" u32 D_0035f31c asm("D_0035f31c");
extern "C" u32 D_0035f320 asm("D_0035f320");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_00287ed8(u32) asm("func_00287ed8");
extern "C" void func_00139e00(u32, u8) asm("func_00139e00");
extern "C" void func_00236d60() asm("func_00236d60");
extern "C" void func_0023d4f8(u32, u32) asm("func_0023d4f8");
extern "C" void func_0023ed00(u32) asm("func_0023ed00");
extern "C" void func_0023edb0(u32) asm("func_0023edb0");
extern "C" void func_00287b30() asm("func_00287b30");
extern "C" void func_00287c20() asm("func_00287c20");
extern "C" void func_00287d08() asm("func_00287d08");
extern "C" void func_00288b18(u32) asm("func_00288b18");
extern "C" void func_0028c3f0(u32) asm("func_0028c3f0");

// 0x00287910 func_00287910
u32 func_00287910(u32 a0, u32 a1, u8 a2) asm("func_00287910");
u32 func_00287910(u32 a0, u32 a1, u8 a2) {
    u32 v0;
    func_00139e00(func_00103570(), a2);
    func_0023edb0(func_00103570());
    func_00288b18(func_00103570());
    func_00236d60();
    func_00287b30();
    func_00287d08();
    func_0023ed00(7);
    *(u32*)(&D_0035f2ec) = a0;
    *(u32*)(&D_0035f318) = a1;
    if (((s32)(a1) != 0)) {
        v0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x14f0, 0);
        func_0023d4f8(v0, *(u32*)(&D_0035f318));
        *(u32*)(&D_0035f31c) = v0;
    }
    *(u8*)(&D_0035f314) = 0;
    func_00287c20();
    func_0028c3f0(func_00103570());
    *(u32*)(&D_0035f2e8) = 0;
    *(u8*)(&D_0035f320) = 0;
    return func_00287ed8(func_00103570());
}
