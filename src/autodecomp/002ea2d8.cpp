// coverage: addr=0x002ea2d8 symbol=func_002ea2d8 size=32 class=straight source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.5;ghidra:near:0.0;m2c:near:0.0
#include "common/types.h"

extern "C" u32 D_00363410 asm("D_00363410");

// 0x002ea2d8 func_002ea2d8
void func_002ea2d8(u32 a0) asm("func_002ea2d8");
void func_002ea2d8(u32 a0) {
    *(u32*)(a0) = (u32)&D_00363410;
    *(u32*)((a0 + 8)) = 0x181;
    *(u32*)((a0 + 4)) = 1;
}
