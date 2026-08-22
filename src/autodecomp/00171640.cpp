// coverage: addr=0x00171640 symbol=func_00171640 size=80 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:34.6
#include "common/types.h"

extern "C" u32 D_01c5f480 asm("D_01c5f480");
extern "C" u32 func_00185138(u32, u32, u32, f32) asm("func_00185138");

// 0x00171640 func_00171640
u32 func_00171640(u32 a0) asm("func_00171640");
u32 func_00171640(u32 a0) {
    u32 v0;
    v0 = func_00185138(*(u32*)((*(u32*)(a0) + 4)), (u32)&D_01c5f480, (u32)(0) < (u32)(*(u32*)((a0 + 8))), *(f32*)((a0 + 4)));
    *(u32*)(a0) = (u32)&D_01c5f480;
    return v0;
}
