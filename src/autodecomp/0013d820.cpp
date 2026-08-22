// coverage: addr=0x0013d820 symbol=_Z17ttarget0_0013d820v size=448 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:75.32;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_00347e80 asm("D_00347e80");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_003485e8 asm("D_003485e8");
extern "C" u32 D_003485ec asm("D_003485ec");
extern "C" u32 D_003485f0 asm("D_003485f0");
extern "C" u32 D_003485f4 asm("D_003485f4");
extern "C" u32 D_003485f8 asm("D_003485f8");
extern "C" u32 D_003485fc asm("D_003485fc");
extern "C" u32 func_0013a7d0(u32) asm("func_0013a7d0");
extern "C" u32 func_0013db60() asm("func_0013db60");
extern "C" u32 func_0013dda0(u32) asm("func_0013dda0");
extern "C" void func_00138650(u32, u32, u32, u32) asm("func_00138650");
extern "C" void func_00154558(u32) asm("func_00154558");
extern "C" void func_00154f30(u32, u32, u32) asm("func_00154f30");
extern "C" void func_001569d8(u32, u32) asm("func_001569d8");
extern "C" void func_002361a0(u32) asm("func_002361a0");
extern "C" void func_0031b130(u32) asm("func_0031b130");
extern "C" void func_0031b3b8(u32) asm("func_0031b3b8");
extern "C" void func_0031b4f0(u32) asm("func_0031b4f0");

// 0x0013d820 ttarget0_0013d820()
u32 lift_0013d820() asm("_Z17ttarget0_0013d820v");
u32 lift_0013d820() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    *(u8*)(&D_003485fc) = 0;
    v0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x1c0, 0);
    *(u32*)(v0) = (u32)&D_00347e80;
    *(u32*)((v0 + 0xc)) = 0;
    func_002361a0(v0 + 0x20);
    *(u32*)(&D_003485e8) = v0;
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x3d00, 0);
    func_0031b130(v0_0);
    *(u32*)(&D_003485ec) = v0_0;
    v0_1 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x15b0, 0);
    func_0031b3b8(v0_1);
    *(u32*)(&D_003485f0) = v0_1;
    v0_2 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x15b0, 0);
    func_0031b3b8(v0_2);
    *(u32*)(&D_003485f4) = v0_2;
    v0_3 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x3ce4, 0);
    func_0031b4f0(v0_3);
    *(u32*)(&D_003485f8) = v0_3;
    func_00138650(*(u32*)(&D_003485e8), 0x1770, func_0013a7d0(1), 0);
    func_00154f30(*(u32*)(&D_003485f4), func_0013dda0(2), 1);
    func_00154f30(*(u32*)(&D_003485f0), func_0013dda0(1), 0);
    func_001569d8(*(u32*)(&D_003485ec), func_0013dda0(0));
    func_00154558(*(u32*)(&D_003485f8));
    return func_0013db60();
}
