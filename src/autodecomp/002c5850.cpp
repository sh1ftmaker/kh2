// coverage: addr=0x002c5850 symbol=func_002c5850 size=120 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:67.97;m2c:near:50.4;e3:near:36.08
#include "common/types.h"

extern "C" u32 D_00361d00 asm("D_00361d00");
extern "C" u32 func_001befd8(u32, u32, u32) asm("func_001befd8");
extern "C" void func_00177dc8(u32, u32, u32, u32, u32) asm("func_00177dc8");

// 0x002c5850 func_002c5850
u32 func_002c5850(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_002c5850");
u32 func_002c5850(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 v0;
    func_00177dc8(a0, a1, 0xb, a2, a3);
    *(u32*)(a0) = (u32)&D_00361d00;
    *(u32*)((a0 + 0x588)) = (*(u32*)((a0 + 0x588)) | 0x20000000);
    *(u32*)((a0 + 0xbc4)) = 0;
    *(u32*)((a0 + 0xbd0)) = 0;
    *(u32*)((a0 + 0xbd4)) = 0;
    *(u32*)((a0 + 0xbd8)) = 0;
    v0 = func_001befd8(*(u32*)((a0 + 0xb44)), 0, 0);
    *(u32*)((a0 + 0xabc)) = (*(u32*)((a0 + 0xabc)) | 0x10);
    return v0;
}
