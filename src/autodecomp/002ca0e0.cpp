// coverage: addr=0x002ca0e0 symbol=func_002ca0e0 size=144 class=straight source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.83;ghidra:near:99.83;m2c:near:85.7
#include "common/types.h"

extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0035eb98 asm("D_0035eb98");
extern "C" u32 D_00361e28 asm("D_00361e28");
extern "C" u32 D_00361e38 asm("D_00361e38");
extern "C" u32 func_002c5f48() asm("func_002c5f48");
extern "C" void func_00167f38(u32) asm("func_00167f38");
extern "C" void func_002369a0(u32) asm("func_002369a0");
extern "C" void func_0023c008(u32) asm("func_0023c008");
extern "C" void func_0028d140(u32) asm("func_0028d140");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x002ca0e0 func_002ca0e0
u32 func_002ca0e0(u32 a0) asm("func_002ca0e0");
u32 func_002ca0e0(u32 a0) {
    *(u32*)((a0 + 0xc)) = 0;
    *(u32*)((a0 + 0x18)) = 0;
    *(u32*)((a0 + 0x1c)) = (u32)&D_00347f98;
    *(u32*)(a0) = (u32)&D_00361e38;
    func_0031a838(a0 + 0x28);
    *(u32*)((a0 + 0x1c)) = (u32)&D_0035eb98;
    func_002369a0(a0 + 0x34);
    func_0023c008(a0 + 0x4c);
    *(u32*)((a0 + 0xbc)) = 0;
    func_0028d140(a0 + 0xc0);
    *(u32*)((a0 + 0x27c)) = 0;
    *(u32*)((a0 + 0x280)) = 0;
    *(u32*)((a0 + 0x284)) = 0;
    *(u32*)((a0 + 0x288)) = 0;
    *(u32*)(&D_00361e28) = a0;
    func_00167f38(3);
    return func_002c5f48();
}
