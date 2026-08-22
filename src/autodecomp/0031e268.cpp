// coverage: addr=0x0031e268 symbol=func_0031e268 size=76 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:74.58;m2c:near:58.5
#include "common/types.h"


// 0x0031e268 func_0031e268
// minilink-rodata 0x0036c238   (float literals live here in the original)
f32 func_0031e268(u32 a0) asm("func_0031e268");
f32 func_0031e268(u32 a0) {
    u32 t7;
    u32 t6;
    u32 t5;
    f32 f0;
    u32 a0_0;
    t7 = 0x80;
    t6 = 7;
    t5 = 0xffffffff;
    f0 = 1.0f;
    a0_0 = (a0 + 4);
    do {
        *(u32*)((a0_0 + -4)) = 0;
        *(u8*)(a0_0) = t7;
        *(u8*)((a0_0 + 1)) = t7;
        *(u8*)((a0_0 + 2)) = t7;
        *(u8*)((a0_0 + 3)) = t7;
        *(f32*)((a0_0 + 4)) = f0;
        *(u32*)((a0_0 + 8)) = 0;
        a0_0 = (a0_0 + 0x10);
        t6 = (t6 + -1);
    } while ((t6 != t5));
    return f0;
}
