// coverage: addr=0x002bce50 symbol=func_002bce50 size=132 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:84.7
#include "common/types.h"

extern "C" u32 D_003616f8 asm("D_003616f8");
extern "C" u32 func_002bc470(u32) asm("func_002bc470");

// 0x002bce50 func_002bce50
u32 func_002bce50(u32 a0) asm("func_002bce50");
u32 func_002bce50(u32 a0) {
    u32 s1;
    u32 s2;
    u32 s3;
    u32 v0_0;
    *(u32*)((a0 + 0x148)) = 0x1e;
    *(u32*)((a0 + 0x14c)) = 0x14;
    *(u8*)((a0 + 0x150)) = 0;
    s1 = (u32)&D_003616f8;
    s2 = 0x1a;
    s3 = 0xffffffff;
    do {
        *(u32*)(a0) = *(u32*)(s1);
        *(u32*)((a0 + 4)) = s3;
        *(u32*)((a0 + 8)) = 0;
        v0_0 = func_002bc470(*(u32*)(s1));
        a0 = (a0 + 0xc);
        s1 = (s1 + 4);
        s2 = (s2 + -1);
    } while (((s32)(s2) >= 0));
    return v0_0;
}
