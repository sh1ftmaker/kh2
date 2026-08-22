// coverage: addr=0x002cd1d8 symbol=func_002cd1d8 size=136 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:86.68;m2c:near:70.21
#include "common/types.h"

extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" void func_002cb5d8(u32, f32) asm("func_002cb5d8");
extern "C" void func_002cd290(u32, u32, u32) asm("func_002cd290");

// 0x002cd1d8 func_002cd1d8
// minilink-rodata 0x003758e8   (float literals live here in the original)
u32 func_002cd1d8(u32 a0, u32 a1) asm("func_002cd1d8");
u32 func_002cd1d8(u32 a0, u32 a1) {
    u32 v0;
    v0 = func_001050d8(0xa0);
    func_002cb5d8(v0, 8.0f);
    *(u32*)((v0 + 0xc)) = 0x20;
    *(u8*)((v0 + 0x86)) = 0;
    *(u32*)((v0 + 0x80)) = func_001050d8(0x400);
    *(u8*)((v0 + 0x87)) = 1;
    func_002cd290(v0, a0, a1);
    return v0;
}
