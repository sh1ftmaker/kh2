// coverage: addr=0x002937c0 symbol=func_002937c0 size=136 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:80.83;m2c:near:62.35
#include "common/types.h"

extern "C" u32 D_00293848 asm("D_00293848");
extern "C" u32 D_0035f4f8 asm("D_0035f4f8");
extern "C" u32 D_0035f4f9 asm("D_0035f4f9");
extern "C" u32 D_0035f4fa asm("D_0035f4fa");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");
extern "C" u32 func_00103eb0() asm("func_00103eb0");
extern "C" u32 func_002938f0() asm("func_002938f0");
extern "C" void func_00170320(u32) asm("func_00170320");

// 0x002937c0 func_002937c0
u32 func_002937c0() asm("func_002937c0");
u32 func_002937c0() {
    u32 v0;
    v0 = func_002938f0();
    if (((s32)(v0) != 0)) {
        *(u8*)(&D_0035f4f9) = 0;
    }
    if (((s32)(*(u8*)(&D_0035f4f9)) == 0)) {
        *(u8*)(&D_0035f4f8) = 0;
        *(u8*)(&D_0035f4f9) = 1;
        *(u8*)(&D_0035f4fa) = 0;
        func_00170320(0x13ec);
        return func_00102818(*(u32*)((func_00103eb0() + 4)), 0, 0x222e0, (u32)&D_00293848, 0x1000);
    } else {
        return v0;
    }
}
