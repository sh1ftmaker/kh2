// coverage: addr=0x00174518 symbol=func_00174518 size=64 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:88.25;m2c:near:83.06
#include "common/types.h"

extern "C" u32 func_00184780(u32, u32, f32, f32, f32) asm("func_00184780");

// 0x00174518 func_00174518
u32 func_00174518(u32 a0) asm("func_00174518");
u32 func_00174518(u32 a0) {
    u32 v0;
    v0 = func_00184780(*(u32*)((*(u32*)(a0) + 4)), *(u32*)((a0 + 4)), *(f32*)((*(u32*)((a0 + 4)) + 0xc)), *(f32*)((a0 + 8)), *(f32*)((a0 + 0xc)));
    *(u32*)(a0) = v0;
    return v0;
}
