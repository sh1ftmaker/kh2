// coverage: addr=0x0014dc08 symbol=func_0014dc08 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:86.6;m2c:near:61.27
#include "common/types.h"

extern "C" u32 func_001666a0(u32) asm("func_001666a0");

// 0x0014dc08 func_0014dc08
u32 func_0014dc08(u32 a0) asm("func_0014dc08");
u32 func_0014dc08(u32 a0) {
    u32 v0;
    v0 = func_001666a0(a0);
    *(u32*)((a0 + 0x1d0)) = 0;
    *(u16*)((a0 + 0x1d4)) = 0;
    *(u8*)((a0 + 0x1d6)) = 0;
    *(u8*)((a0 + 0x1d7)) = 0;
    *(u8*)((a0 + 0x1d8)) = 0;
    *(u8*)((a0 + 0x1d9)) = 0;
    return v0;
}
