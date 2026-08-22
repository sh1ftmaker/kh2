// coverage: addr=0x00191758 symbol=func_00191758 size=88 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:65.14;m2c:near:53.79
#include "common/types.h"

extern "C" u32 D_0034f240 asm("D_0034f240");
extern "C" u32 D_01c6195c asm("D_01c6195c");
extern "C" u32 D_01c61960 asm("D_01c61960");
extern "C" u32 D_01c61964 asm("D_01c61964");
extern "C" f32 func_00191bf0(f32) asm("func_00191bf0");
extern "C" void func_00191938(u32) asm("func_00191938");

// 0x00191758 func_00191758
// minilink-rodata 0x0036cd58   (float literals live here in the original)
f32 func_00191758() asm("func_00191758");
f32 func_00191758() {
    *(u32*)(&D_0034f240) = 0;
    func_00191938(0);
    *(u32*)(&D_01c61960) = 0;
    *(f32*)(&D_01c6195c) = 30.0f;
    *(f32*)(&D_01c61964) = 1.0f;
    return func_00191bf0(1.0f);
}
