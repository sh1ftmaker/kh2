// coverage: addr=0x002f1a80 symbol=func_002f1a80 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:54.56;ghidra:near:23.5
#include "common/types.h"

extern "C" u32 D_002f1a68 asm("D_002f1a68");
extern "C" u32 D_00363c28 asm("D_00363c28");
extern "C" u32 D_00363c2c asm("D_00363c2c");
extern "C" u32 D_01e2c100 asm("D_01e2c100");
extern "C" u32 func_00168388(u32, u32, u32, u32) asm("func_00168388");

// 0x002f1a80 func_002f1a80
u32 func_002f1a80() asm("func_002f1a80");
u32 func_002f1a80() {
    *(u32*)(&D_00363c2c) = 0;
    return func_00168388(*(u32*)(&D_00363c28), (u32)&D_01e2c100, (u32)&D_002f1a68, 0);
}
