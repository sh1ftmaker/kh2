// coverage: addr=0x002e0720 symbol=func_002e0720 size=68 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:67.59;m2c:near:52.29
#include "common/types.h"

extern "C" u32 func_0017f488(u32, u32, f32, f32) asm("func_0017f488");

// 0x002e0720 func_002e0720
// minilink-rodata 0x00375e98   (float literals live here in the original)
u32 func_002e0720(u32 a0, u32 a1) asm("func_002e0720");
u32 func_002e0720(u32 a0, u32 a1) {
    return func_0017f488(a1 + 0x140, ((u32(*)(u32, u32))(*(u32*)((*(u32*)(a0) + 0x2c))))(a0, a1), 8.0f, 0.0f);
}
