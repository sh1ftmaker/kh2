// coverage: addr=0x00229d40 symbol=func_00229d40 size=40 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:79.4;ghidra:near:41.81
#include "common/types.h"

extern "C" u32 func_00229b28(u32, u32, u32, u32, f32) asm("func_00229b28");

// 0x00229d40 func_00229d40
u32 func_00229d40(u32 a0) asm("func_00229d40");
u32 func_00229d40(u32 a0) {
    return func_00229b28(a0, 1, 0xc8, 0, (f32)(*(s32*)((a0 + 0xb9c))));
}
