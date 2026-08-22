// coverage: addr=0x00173e38 symbol=func_00173e38 size=44 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:69.0
#include "common/types.h"

extern "C" u32 func_00188470(u32, u32, f32) asm("func_00188470");

// 0x00173e38 func_00173e38
u32 func_00173e38(u32 a0) asm("func_00173e38");
u32 func_00173e38(u32 a0) {
    return func_00188470(*(u32*)((*(u32*)(a0) + 4)) + 0x300, *(u32*)((a0 + 4)), *(f32*)((a0 + 8)));
}
