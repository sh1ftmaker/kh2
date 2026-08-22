// coverage: addr=0x0031bc58 symbol=func_0031bc58 size=156 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347e80 asm("D_00347e80");
extern "C" u32 D_0034a548 asm("D_0034a548");
extern "C" u32 func_00239700(u32) asm("_ZN2YI8SEQUENCEC1Ev");
extern "C" void func_002361a0(u32) asm("func_002361a0");

// 0x0031bc58 func_0031bc58
u32 func_0031bc58(u32 a0) asm("func_0031bc58");
u32 func_0031bc58(u32 a0) {
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 v0_0;
    *(u32*)(a0) = (u32)&D_0034a548;
    *(u32*)((a0 + 0x30)) = (u32)&D_00347e80;
    *(u32*)((a0 + 0xc)) = 0;
    *(u32*)((a0 + 0x3c)) = 0;
    func_002361a0(a0 + 0x50);
    func_00239700(a0 + 0x1f0);
    s0 = (u32)&D_00347e60;
    s1 = (a0 + 0x348);
    s2 = 0xc;
    s3 = 0xffffffff;
    do {
        *(u32*)((s1 + 0xc)) = 0;
        *(u32*)(s1) = s0;
        v0_0 = func_00239700(s1 + 0x18);
        s1 = (s1 + 0x198);
        s2 = (s2 + -1);
    } while ((s2 != s3));
    return v0_0;
}
