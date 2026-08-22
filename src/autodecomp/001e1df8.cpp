// coverage: addr=0x001e1df8 symbol=func_001e1df8 size=72 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:44.21;ghidra:near:21.58
#include "common/types.h"


// 0x001e1df8 func_001e1df8
// minilink-rodata 0x0036e928   (float literals live here in the original)
void func_001e1df8(u32 a0) asm("func_001e1df8");
void func_001e1df8(u32 a0) {
    if ((20.0f <= *(f32*)((a0 + 0xde4)))) {
        *(u32*)((a0 + 0xde8)) = 0;
        *(u32*)((a0 + 0xdfc)) = 0;
        *(u32*)((a0 + 0xdc0)) = 4;
        *(u32*)((a0 + 0xde4)) = 0;
        *(f32*)((a0 + 0xdf4)) = 10.0f;
        *(f32*)((a0 + 0xdf8)) = 10.0f;
    }
    return;
}
