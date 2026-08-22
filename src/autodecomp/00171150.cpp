// coverage: addr=0x00171150 symbol=func_00171150 size=44 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:63.09;ghidra:near:51.82
#include "common/types.h"

extern "C" u32 func_0017f488(u32, u32, f32, f32) asm("func_0017f488");

// 0x00171150 func_00171150
u32 func_00171150(u32 a0) asm("func_00171150");
u32 func_00171150(u32 a0) {
    return func_0017f488(*(u32*)(a0) + 0x140, *(u32*)((a0 + 4)), *(f32*)((a0 + 8)), 0.0f);
}
