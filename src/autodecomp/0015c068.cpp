// coverage: addr=0x0015c068 symbol=func_0015c068 size=140 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:57.78;m2c:near:53.3
#include "common/types.h"

extern "C" u32 func_001665d8(u32, u32, u32, u32, u32, u32, u32) asm("func_001665d8");

// 0x0015c068 func_0015c068
// minilink-rodata 0x0036b3d4   (float literals live here in the original)
f32 func_0015c068(u32 a0, u32 a1) asm("func_0015c068");
f32 func_0015c068(u32 a0, u32 a1) {
    u32 v0;
    f32 f1;
    v0 = func_001665d8(a1, a0 + 0xbb8, a0 + 0xbbc, a0 + 0xbc8, a0 + 0xbcc, a0 + 0xbc0, a0 + 0xbc4);
    f1 = (f32)(v0);
    *(f32*)((a0 + 0xbb4)) = ((f1 * 100.0f) * 0.001953125f);
    return ((f1 * 100.0f) * 0.001953125f);
}
