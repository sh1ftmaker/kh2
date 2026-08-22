// coverage: addr=0x001cfac0 symbol=func_001cfac0 size=48 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:17.77;m2c:near:10.66
#include "common/types.h"


// 0x001cfac0 func_001cfac0
// minilink-rodata 0x0036e360   (float literals live here in the original)
f32 func_001cfac0(u32 a0, f32 fa0, f32 fa1, f32 fa2, f32 fa3) asm("func_001cfac0");
f32 func_001cfac0(u32 a0, f32 fa0, f32 fa1, f32 fa2, f32 fa3) {
    *(f32*)((a0 + 0xb90)) = (fa0 * 0.01745329238474369f);
    *(f32*)((a0 + 0xb94)) = (fa1 * 0.01745329238474369f);
    *(f32*)((a0 + 0xb98)) = (fa2 * 0.01745329238474369f);
    *(f32*)((a0 + 0xb9c)) = (fa3 * 0.01745329238474369f);
    return 0.01745329238474369f;
}
