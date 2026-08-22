// coverage: addr=0x0031b7e8 symbol=func_0031b7e8 size=108 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_003486b0 asm("D_003486b0");
extern "C" u32 func_00239870(u32) asm("func_00239870");

// 0x0031b7e8 func_0031b7e8
u32 func_0031b7e8(u32 a0) asm("func_0031b7e8");
u32 func_0031b7e8(u32 a0) {
    u32 v0;
    *(u32*)(a0) = (u32)&D_003486b0;
    *(u32*)((a0 + 0x1c0)) = (u32)&D_00347e60;
    func_00239870(a0 + 0x1d8);
    *(u32*)(a0) = (u32)&D_00347e60;
    *(u32*)((a0 + 0x1c0)) = (u32)&D_00347f98;
    v0 = func_00239870(a0 + 0x18);
    *(u32*)(a0) = (u32)&D_00347f98;
    return v0;
}
