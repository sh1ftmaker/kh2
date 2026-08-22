// coverage: addr=0x001374c8 symbol=func_001374c8 size=152 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:70.22;m2c:near:37.53
#include "common/types.h"

extern "C" u32 func_00138d60(u32, u32, u32, u32, u32, u32, u32) asm("func_00138d60");
extern "C" u32 func_0013a7e8(u32, u32, u32, u32, f32) asm("func_0013a7e8");
extern "C" u32 func_0013d7e0() asm("func_0013d7e0");

// 0x001374c8 func_001374c8
u32 func_001374c8(u32 a0, u32 a1, u32 a2, u32 a3, f32 fa0) asm("func_001374c8");
u32 func_001374c8(u32 a0, u32 a1, u32 a2, u32 a3, f32 fa0) {
    u32 s1;
    u32 v0;
    s1 = func_0013a7e8(1, a1, a2, a3, fa0);
    v0 = func_00138d60(a0, 0x2b5c, s1, func_0013d7e0(), a1, a2, 0xd);
    *(u32*)((a0 + 0x1a8)) = 0x10;
    *(f32*)((a0 + 0x1b4)) = fa0;
    *(u32*)((a0 + 0x1b8)) = a3;
    return v0;
}
