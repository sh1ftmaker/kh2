// coverage: addr=0x0017a718 symbol=func_0017a718 size=124 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:76.94;ghidra:near:69.22
#include "common/types.h"

extern "C" u32 D_0036c4e8 asm("D_0036c4e8");
extern "C" u32 D_0036c4f0 asm("D_0036c4f0");
extern "C" u32 func_00194070(u32, u32) asm("func_00194070");
extern "C" u32 func_001a35f8(u32, u32) asm("func_001a35f8");

// 0x0017a718 func_0017a718
u32 func_0017a718(u32 a0) asm("func_0017a718");
u32 func_0017a718(u32 a0) {
    u32 s0;
    u32 s1;
    u32 s2;
    u32 v0;
    s0 = 2;
    s1 = (u32)&D_0036c4e8;
    s2 = 0;
    do {
        s0 = (s0 + -1);
        v0 = func_001a35f8(*(u16*)(s1), 0x64);
        s1 = (s1 + 2);
        s2 = (s2 + ((s32)(0) < (s32)(v0)));
    } while (((s32)(s0) >= 0));
    return func_00194070(a0, *(u8*)((s2 + (u32)&D_0036c4f0)));
}
