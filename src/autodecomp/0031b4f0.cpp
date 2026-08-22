// coverage: addr=0x0031b4f0 symbol=func_0031b4f0 size=216 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:92.39;ghidra:near:91.94;m2c:near:87.3
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_0034a820 asm("D_0034a820");
extern "C" u32 func_00239700(u32) asm("func_00239700");

// 0x0031b4f0 func_0031b4f0
u32 func_0031b4f0(u32 a0) asm("func_0031b4f0");
u32 func_0031b4f0(u32 a0) {
    u32 s0;
    u32 s1;
    u32 s3;
    u32 s2;
    u32 s5;
    u32 s0_0;
    u32 s1_1;
    u32 s3_2;
    u32 s4_3;
    u32 s6;
    u32 v0_5;
    *(u32*)((a0 + 0xc)) = 0;
    *(u32*)(a0) = (u32)&D_0034a820;
    s0 = (a0 + 0x30);
    s1 = 5;
    s3 = 0xffffffff;
    do {
        *(u32*)((s0 + 0xc)) = 0;
        *(u32*)(s0) = ((u32)&D_00347e60);
        func_00239700(s0 + 0x18);
        s0 = (s0 + 0x198);
        s1 = (s1 + -1);
    } while ((s1 != s3));
    s2 = (a0 + 0x9c0);
    s5 = 0xf;
    do {
        s0_0 = s2;
        s1_1 = 1;
        s3_2 = 0xffffffff;
        s4_3 = (u32)&D_00347e60;
        s6 = 0xffffffff;
        do {
            *(u32*)((s0_0 + 0xc)) = 0;
            *(u32*)(s0_0) = s4_3;
            v0_5 = func_00239700(s0_0 + 0x18);
            s0_0 = (s0_0 + 0x198);
            s1_1 = (s1_1 + -1);
        } while ((s1_1 != s3_2));
        s2 = (s2 + 0x330);
        s5 = (s5 + -1);
    } while ((s5 != s6));
    return v0_5;
}
