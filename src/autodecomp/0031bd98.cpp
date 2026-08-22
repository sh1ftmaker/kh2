// coverage: addr=0x0031bd98 symbol=func_0031bd98 size=212 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;lift:near:94.89
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347e80 asm("D_00347e80");
extern "C" u32 D_0034a5b0 asm("D_0034a5b0");
extern "C" u32 func_00239700(u32) asm("_ZN2YI8SEQUENCEC1Ev");
extern "C" void func_002361a0(u32) asm("func_002361a0");

// 0x0031bd98 func_0031bd98
u32 func_0031bd98(u32 a0) asm("func_0031bd98");
u32 func_0031bd98(u32 a0) {
    u32 s0;
    u32 s1;
    u32 s4;
    u32 s0_0;
    u32 s1_1;
    u32 s3_2;
    u32 s4_3;
    u32 v0;
    *(u32*)(a0) = (u32)&D_0034a5b0;
    *(u32*)((a0 + 0x30)) = (u32)&D_00347e80;
    *(u32*)((a0 + 0xc)) = 0;
    *(u32*)((a0 + 0x3c)) = 0;
    func_002361a0(a0 + 0x50);
    s0 = (a0 + 0x1f0);
    s1 = 9;
    s4 = 0xffffffff;
    do {
        *(u32*)((s0 + 0xc)) = 0;
        *(u32*)(s0) = ((u32)&D_00347e60);
        func_00239700(s0 + 0x18);
        s0 = (s0 + 0x198);
        s1 = (s1 + -1);
    } while ((s1 != s4));
    s0_0 = (a0 + 0x11e0);
    s1_1 = 3;
    s3_2 = 0xffffffff;
    s4_3 = (u32)&D_00347e60;
    do {
        *(u32*)((s0_0 + 0xc)) = 0;
        *(u32*)(s0_0) = s4_3;
        func_00239700(s0_0 + 0x18);
        s0_0 = (s0_0 + 0x198);
        s1_1 = (s1_1 + -1);
    } while ((s1_1 != s3_2));
    v0 = func_00239700(a0 + 0x1840);
    *(u32*)((a0 + 0x1998)) = 0;
    return v0;
}
