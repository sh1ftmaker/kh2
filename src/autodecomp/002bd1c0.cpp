// coverage: addr=0x002bd1c0 symbol=func_002bd1c0 size=88 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.86;ghidra:near:90.86;m2c:near:90.82
#include "common/types.h"

extern "C" u32 D_003616f8 asm("D_003616f8");
extern "C" u32 func_002b6ab8() asm("func_002b6ab8");
extern "C" void func_002b6adc(u32, u32) asm("func_002b6adc");

// 0x002bd1c0 func_002bd1c0
u32 func_002bd1c0() asm("func_002bd1c0");
u32 func_002bd1c0() {
    u32 s0;
    s32 s1;
    {
    s1 = 0xd;
    s0 = (u32)&D_003616f8;
    }
    do {
        s0 = s0;
        func_002b6adc(2, *(u32*)(((s0 + ((s1 - 0xd) * -4)) + 0x2c)));
        s0 = s0;
        u32 ap19_1 = ((((s1 - 0xd) * -4) + s0) + 0x2c);
        func_002b6adc(0, *(u32*)(ap19_1));
        s1 = (s1) + -1;
    } while (((s32)(s1) >= 0));
    return func_002b6ab8();
}
