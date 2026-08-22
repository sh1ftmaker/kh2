// coverage: addr=0x00175480 symbol=func_00175480 size=36 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:86.56;m2c:near:32.67
#include "common/types.h"

extern "C" u32 func_00153e28(u32, f32, f32) asm("func_00153e28");

// 0x00175480 func_00175480
u32 func_00175480(u32 a0) asm("func_00175480");
u32 func_00175480(u32 a0) {
    return func_00153e28(*(u32*)(a0), *(f32*)((a0 + 4)), *(f32*)((a0 + 8)));
}
