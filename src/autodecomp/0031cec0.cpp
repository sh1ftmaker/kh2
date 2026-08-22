// coverage: addr=0x0031cec0 symbol=func_0031cec0 size=84 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:near:99.9
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0034a800 asm("D_0034a800");
extern "C" u32 func_00239870(u32) asm("func_00239870");
extern "C" void func_002361d0(u32) asm("func_002361d0");

// 0x0031cec0 func_0031cec0
u32 func_0031cec0(u32 a0) asm("func_0031cec0");
u32 func_0031cec0(u32 a0) {
    u32 v0;
    *(u32*)(a0) = (u32)&D_0034a800;
    func_002361d0(a0 + 0x1a0);
    *(u32*)(a0) = (u32)&D_00347e60;
    v0 = func_00239870(a0 + 0x18);
    *(u32*)(a0) = (u32)&D_00347f98;
    return v0;
}
