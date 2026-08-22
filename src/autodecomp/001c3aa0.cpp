// coverage: addr=0x001c3aa0 symbol=func_001c3aa0 size=128 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:86.84;ghidra:near:32.56;e3:near:0.0
#include "common/types.h"

extern "C" f32 func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" f32 func_001c39d0(u32, u32) asm("func_001c39d0");
extern "C" void func_0017f540(u32, u32, f32, f32) asm("func_0017f540");

// 0x001c3aa0 func_001c3aa0
// minilink-rodata 0x0036de10   (float literals live here in the original)
void func_001c3aa0(u32 a0, u32 a1) asm("func_001c3aa0");
void func_001c3aa0(u32 a0, u32 a1) {
    if ((0.0f < *(f32*)((a1 + 0x1c)))) {
        func_0016bd60(a1, 0x12);
        return;
    } else {
        func_0017f540(a1 + 0x140, 0xd0, 16.0f, 0.0f);
        func_001c39d0(a0, a1);
        return;
    }
}
