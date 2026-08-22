// coverage: addr=0x0014f8d0 symbol=func_0014f8d0 size=212 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:82.17;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" void func_0014fe00(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0014fe00");
extern "C" void func_0031bc58(u32) asm("func_0031bc58");

// 0x0014f8d0 func_0014f8d0
u32 func_0014f8d0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0014f8d0");
u32 func_0014f8d0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    u8 frame[16];
    u32 v0;
    v0 = ((u32(*)(u32, u32, u32, u32, u32, u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x1830, 0, a3, a4, a5, a6, a7);
    func_0031bc58(v0);
    *(u32*)((u32)frame) = a7;
    func_0014fe00(v0, a0, a1, a2, a3, a4, a5, a6);
    return v0;
}
