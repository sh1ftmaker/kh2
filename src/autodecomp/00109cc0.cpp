// coverage: addr=0x00109cc0 symbol=func_00109cc0 size=64 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.53;m2c:near:44.68
#include "common/types.h"

extern "C" u32 D_0033cc78 asm("D_0033cc78");
extern "C" u32 D_0033cc90 asm("D_0033cc90");

// 0x00109cc0 func_00109cc0
void func_00109cc0(u32 a0, u32 a1) asm("func_00109cc0");
void func_00109cc0(u32 a0, u32 a1) {
    if ((*(u32*)(((a0 << 2) + (u32)&D_0033cc90)) == 0)) {
        *(u32*)(((a0 << 2) + (u32)&D_0033cc78)) = a1;
    } else {
        *(u32*)((*(u32*)(((a0 << 2) + (u32)&D_0033cc90)) + 0x10)) = a1;
    }
    *(u32*)(((a0 << 2) + (u32)&D_0033cc90)) = a1;
    return;
}
