// coverage: addr=0x002ceaa8 symbol=func_002ceaa8 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:72.7;m2c:near:70.24
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" u32 D_00361f70 asm("D_00361f70");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_002cf3f8(u32) asm("func_002cf3f8");

// 0x002ceaa8 func_002ceaa8
u32 func_002ceaa8(u32 a0) asm("func_002ceaa8");
u32 func_002ceaa8(u32 a0) {
    *(u32*)(a0) = (u32)&D_00361f70;
    func_002cf3f8(a0);
    *(u32*)(&D_00361f60) = 0;
    *(u8*)((a0 + 0x58)) = 0;
    return func_00105110(a0);
}
