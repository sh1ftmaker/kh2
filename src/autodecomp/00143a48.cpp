// coverage: addr=0x00143a48 symbol=func_00143a48 size=116 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:51.9
#include "common/types.h"

extern "C" u32 D_00348804 asm("D_00348804");
extern "C" u32 func_00141ff0(u32, u32, u32, u32, u32) asm("func_00141ff0");
extern "C" void func_00141c18(u32, u32, u32, u32, u32) asm("func_00141c18");

// 0x00143a48 func_00143a48
u32 func_00143a48(u32 a0, u32 a1, u32 a2) asm("func_00143a48");
u32 func_00143a48(u32 a0, u32 a1, u32 a2) {
    u32 loc_0;
    func_00141c18(*(u32*)(&D_00348804), 0xf, 4, 1, 1);
    return func_00141ff0(*(u32*)(&D_00348804), a0, a1, (u32)&loc_0, a2);
}
