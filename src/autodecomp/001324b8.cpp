// coverage: addr=0x001324b8 symbol=func_001324b8 size=132 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.88;m2c:near:86.76;ghidra:near:86.73;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_00347c30 asm("D_00347c30");
extern "C" u32 func_00108398(u32) asm("func_00108398");
extern "C" void func_00132270(u32) asm("func_00132270");

// 0x001324b8 func_001324b8
u32 func_001324b8(u32 a0) asm("func_001324b8");
u32 func_001324b8(u32 a0) {
    u32 s0;
    u32 s2;
    u32 s3;
    u32 s0_0;
    u32 v0_1;
    func_00132270(a0);
    *(u32*)(a0) = (u32)&D_00347c30;
    s0 = (a0 + 0x30);
    s2 = 3;
    s3 = 0xffffffff;
    do {
        s0_0 = (s0 + 0x90);
        v0_1 = func_00108398(s0 + 0x10);
        s0 = s0_0;
        s2 = (s2 + -1);
    } while ((s2 != s3));
    *(u32*)((a0 + 8)) = 1;
    *(u32*)((a0 + 0x274)) = 0;
    *(u32*)((a0 + 0x278)) = 0;
    *(u32*)((a0 + 0x27c)) = 0;
    *(u32*)((a0 + 0x270)) = 0;
    return v0_1;
}
