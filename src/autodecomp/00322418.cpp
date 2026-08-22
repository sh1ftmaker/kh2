// coverage: addr=0x00322418 symbol=func_00322418 size=276 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.06;lift:near:92.7;ghidra:near:84.16;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0034a958 asm("D_0034a958");
extern "C" u32 D_0035e1b8 asm("D_0035e1b8");
extern "C" u32 D_0035e280 asm("D_0035e280");
extern "C" u32 func_00239700(u32) asm("_ZN2YI8SEQUENCEC1Ev");
extern "C" void func_0013ee88(u32) asm("func_0013ee88");
extern "C" void func_0014b668(u32) asm("func_0014b668");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x00322418 func_00322418
u32 func_00322418(u32 a0) asm("func_00322418");
u32 func_00322418(u32 a0) {
    u32 s0;
    u32 s3;
    u32 s4;
    u32 s5;
    u32 s6;
    *(u32*)(a0) = (u32)&D_00347f98;
    func_0031a838(a0 + 0xc);
    *(u32*)(a0) = (u32)&D_00347e60;
    func_00239700(a0 + 0x18);
    *(u32*)(a0) = (u32)&D_0035e1b8;
    *(u32*)((a0 + 0x1b0)) = 0;
    *(u8*)((a0 + 0x1b4)) = 0;
    *(u32*)((a0 + 0x1b8)) = (u32)&D_00347f98;
    func_0031a838(a0 + 0x1c4);
    *(u32*)((a0 + 0x1b8)) = (u32)&D_00347e60;
    func_00239700(a0 + 0x1d0);
    s32 t31_4 = (s32)(*(u32*)((a0 + 0x360)));
    t31_4 = (u32)&D_00347f98;
    *(u32*)((a0 + 0x1b8)) = (u32)&D_0034a958;
    s0 = (u32)&D_0035e280;
    s3 = (a0 + 0x360);
    s4 = 1;
    s5 = 0xffffffff;
    s6 = (u32)&D_00347f98;
    do {
        *(u32*)(s3) = s6;
        func_0031a838(s3 + 0xc);
        *(u32*)(s3) = s0;
        func_0013ee88(s3 + 0x20);
        func_0014b668(s3 + 0x140);
        func_0014b668(s3 + 0x240);
        s3 = (s3 + 0x350);
        s4 = (s4 + -1);
    } while ((s4 != s5));
    *(u32*)((a0 + 0xa00)) = (u32)&D_00347e60;
    *(u32*)((a0 + 0xa0c)) = 0;
    return func_00239700(a0 + 0xa18);
}
