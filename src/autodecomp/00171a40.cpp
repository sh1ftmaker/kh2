// coverage: addr=0x00171a40 symbol=func_00171a40 size=48 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:66.17;ghidra:near:55.75
#include "common/types.h"

extern "C" u32 func_001cfac0(u32, f32, f32, f32, f32) asm("_ZN2YS8NMPLAYER9set_paramEffff");

// 0x00171a40 func_00171a40
u32 func_00171a40(u32 a0) asm("func_00171a40");
u32 func_00171a40(u32 a0) {
    return func_001cfac0(*(u32*)((*(u32*)(a0) + 4)), *(f32*)((a0 + 4)), *(f32*)((a0 + 8)), *(f32*)((a0 + 0xc)), *(f32*)((a0 + 0x10)));
}
