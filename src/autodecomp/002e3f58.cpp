// coverage: addr=0x002e3f58 symbol=func_002e3f58 size=32 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:near:66.67;m2c:near:37.56;ghidra:near:34.88
#include "common/types.h"


// 0x002e3f58 func_002e3f58
// minilink-rodata 0x00375f74   (float literals live here in the original)
f32 func_002e3f58(u32 a0) asm("func_002e3f58");
f32 func_002e3f58(u32 a0) {
    *(u32*)(a0) = 0;
    *(u32*)((a0 + 4)) = 0;
    *(u32*)((a0 + 8)) = 0;
    *(f32*)((a0 + 0xc)) = 1.0f;
    return 1.0f;
}
