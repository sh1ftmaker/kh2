// coverage: addr=0x001bbfd0 symbol=func_001bbfd0 size=60 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:86.6;ghidra:near:42.67;e3:near:17.6
#include "common/types.h"

extern "C" u32 func_001bb4a0() asm("func_001bb4a0");
extern "C" u32 func_001bbcb0() asm("func_001bbcb0");

// 0x001bbfd0 func_001bbfd0
// minilink-rodata 0x0036dc44   (float literals live here in the original)
f32 func_001bbfd0() asm("func_001bbfd0");
f32 func_001bbfd0() {
    f32 f0;
    f0 = ((s32)(func_001bb4a0()) != 0) ? *(f32*)((func_001bbcb0() + 0x530)) : 1.0f;
    return f0;
}
