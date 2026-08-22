// coverage: addr=0x001cced8 symbol=func_001cced8 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:67.82;m2c:near:34.94
#include "common/types.h"

extern "C" u32 D_003520c0 asm("D_003520c0");
extern "C" u32 D_003520d0 asm("D_003520d0");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_001a4e30(u32) asm("func_001a4e30");

// 0x001cced8 func_001cced8
u32 func_001cced8(u32 a0) asm("func_001cced8");
u32 func_001cced8(u32 a0) {
    *(u32*)(a0) = (u32)&D_003520d0;
    *(u32*)(&D_003520c0) = 0;
    func_001a4e30(a0);
    return func_00105110(a0);
}
