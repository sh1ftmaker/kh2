// coverage: addr=0x002a8948 symbol=func_002a8948 size=184 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:90.96;e3:near:82.7
#include "common/types.h"

extern "C" u32 D_00347e40 asm("D_00347e40");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_0035f608 asm("D_0035f608");
extern "C" u32 D_0035f60c asm("D_0035f60c");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" void func_00239700(u32) asm("_ZN2YI8SEQUENCEC1Ev");

// 0x002a8948 func_002a8948
void func_002a8948() asm("func_002a8948");
void func_002a8948() {
    u32 v0;
    u32 s5;
    u32 s4;
    u32 s3;
    u32 s2;
    u32 s1;
    *(u32*)(&D_0035f608) = func_001063c0(0x304, func_00103570());
    v0 = func_001063c0(0x1108, func_00103570());
    s5 = v0;
    s4 = 0xffffffff;
    s3 = (u32)&D_00347e60;
    s2 = (u32)&D_00347e40;
    s1 = 9;
    do {
        *(u32*)((v0 + 0xc)) = 0;
        *(u32*)(v0) = s3;
        func_00239700(v0 + 0x18);
        *(u32*)(v0) = s2;
        *(u32*)((v0 + 0x198)) = 0;
        v0 = (v0 + 0x1b4);
        s1 = (s1 + -1);
    } while ((s1 != s4));
    *(u32*)(&D_0035f60c) = s5;
    return;
}
