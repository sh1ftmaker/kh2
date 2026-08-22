// coverage: addr=0x002e4a08 symbol=func_002e4a08 size=36 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:28.89;m2c:near:20.73
#include "common/types.h"


// 0x002e4a08 func_002e4a08
// minilink-rodata 0x00375fb8   (float literals live here in the original)
f32 func_002e4a08(u32 a0) asm("func_002e4a08");
f32 func_002e4a08(u32 a0) {
    *(f32*)(a0) = 15.0f;
    *(f32*)((a0 + 4)) = 6.0f;
    return 15.0f;
}
