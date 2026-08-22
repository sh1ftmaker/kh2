// coverage: addr=0x00172440 symbol=func_00172440 size=68 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:82.41;e3:near:6.19
#include "common/types.h"

extern "C" u32 func_00180378(u32, u32, u32, f32) asm("func_00180378");

// 0x00172440 func_00172440
u32 func_00172440(u32 a0) asm("func_00172440");
u32 func_00172440(u32 a0) {
    u32 v0;
    v0 = func_00180378(*(u32*)((*(u32*)(a0) + 4)) + 0x140, *(u32*)((*(u32*)((a0 + 4)) + 4)), *(u32*)((a0 + 8)), *(f32*)((a0 + 0xc)));
    *(u32*)(a0) = v0;
    return v0;
}
