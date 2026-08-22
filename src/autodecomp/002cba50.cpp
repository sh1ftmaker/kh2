// coverage: addr=0x002cba50 symbol=func_002cba50 size=56 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:67.14;m2c:near:48.57
#include "common/types.h"

extern "C" void func_002cba88(u32, u32, f32, f32) asm("func_002cba88");

// 0x002cba50 func_002cba50
// minilink-rodata 0x0037589c   (float literals live here in the original)
u32 func_002cba50(u32 a0, u32 a1) asm("func_002cba50");
u32 func_002cba50(u32 a0, u32 a1) {
    func_002cba88(a0, a1, *(f32*)((a1 + 0x24)), 1.0f);
    return a0;
}
