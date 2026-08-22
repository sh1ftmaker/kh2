// coverage: addr=0x0031b648 symbol=func_0031b648 size=100 class=straight source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.92;e3:near:99.92;ghidra:near:99.76;m2c:near:99.76
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_00348608 asm("D_00348608");
extern "C" u32 D_0034a800 asm("D_0034a800");
extern "C" u32 func_00239870(u32) asm("func_00239870");
extern "C" void func_002361d0(u32) asm("func_002361d0");

// 0x0031b648 func_0031b648
u32 func_0031b648(u32 a0) asm("func_0031b648");
u32 func_0031b648(u32 a0) {
    u32 v0;
    *(u32*)(a0) = (u32)&D_00348608;
    *(u32*)((a0 + 0x40)) = (u32)&D_0034a800;
    func_002361d0(a0 + 0x1e0);
    *(u32*)((a0 + 0x40)) = (u32)&D_00347e60;
    v0 = func_00239870(a0 + 0x58);
    *(u32*)((a0 + 0x40)) = (u32)&D_00347f98;
    *(u32*)(a0) = (u32)&D_00347f98;
    return v0;
}
