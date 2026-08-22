// coverage: addr=0x0023fb00 symbol=func_0023fb00 size=40 class=straight source=permute status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;lift:near:99.0;m2c:near:78.08
#include "common/types.h"

extern "C" u32 D_0035ebe0 asm("D_0035ebe0");
extern "C" u32 D_0035ebec asm("D_0035ebec");
extern "C" void func_0023fbc8(u32) asm("func_0023fbc8");

// 0x0023fb00 func_0023fb00
u32 func_0023fb00(u32 a0) asm("func_0023fb00");
u32 func_0023fb00(u32 a0) {
    *(u32*)(&D_0035ebe0) = a0;
    func_0023fbc8(a0);
    *(u32*)(&D_0035ebec) = 0;
}
