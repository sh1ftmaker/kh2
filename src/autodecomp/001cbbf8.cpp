// coverage: addr=0x001cbbf8 symbol=func_001cbbf8 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:67.82;m2c:near:34.94
#include "common/types.h"

extern "C" u32 D_00351fe4 asm("D_00351fe4");
extern "C" u32 D_00351ff0 asm("D_00351ff0");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_001a4e30(u32) asm("func_001a4e30");

// 0x001cbbf8 func_001cbbf8
u32 func_001cbbf8(u32 a0) asm("func_001cbbf8");
u32 func_001cbbf8(u32 a0) {
    *(u32*)(a0) = (u32)&D_00351ff0;
    *(u32*)(&D_00351fe4) = 0;
    func_001a4e30(a0);
    return func_00105110(a0);
}
