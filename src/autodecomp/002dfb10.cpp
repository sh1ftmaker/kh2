// coverage: addr=0x002dfb10 symbol=func_002dfb10 size=76 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:72.63;m2c:near:65.26
#include "common/types.h"

extern "C" u32 D_00362c18 asm("D_00362c18");
extern "C" u32 func_002dea00(u32, f32, f32) asm("func_002dea00");

// 0x002dfb10 func_002dfb10
// minilink-rodata 0x00375e74   (float literals live here in the original)
u32 func_002dfb10(u32 a0) asm("func_002dfb10");
u32 func_002dfb10(u32 a0) {
    u32 v0;
    v0 = func_002dea00(a0, 0.0f, 50.0f);
    *(u32*)(a0) = (u32)&D_00362c18;
    *(u32*)((a0 + 8)) = (*(u32*)((a0 + 8)) | 0x800);
    return v0;
}
