// coverage: addr=0x001d28f0 symbol=func_001d28f0 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:67.82;m2c:near:34.94
#include "common/types.h"

extern "C" u32 D_00352668 asm("D_00352668");
extern "C" u32 D_00352678 asm("D_00352678");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_001a4e30(u32) asm("func_001a4e30");

// 0x001d28f0 func_001d28f0
u32 func_001d28f0(u32 a0) asm("func_001d28f0");
u32 func_001d28f0(u32 a0) {
    *(u32*)(a0) = (u32)&D_00352678;
    *(u32*)(&D_00352668) = 0;
    func_001a4e30(a0);
    return func_00105110(a0);
}
