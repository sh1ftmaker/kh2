// coverage: addr=0x002ed558 symbol=func_002ed558 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:80.95;m2c:near:71.65
#include "common/types.h"

extern "C" u32 func_00190128(u32) asm("func_00190128");
extern "C" void func_001c1748(u32, u32, u32, u32, u32) asm("func_001c1748");

// 0x002ed558 func_002ed558
u32 func_002ed558(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_002ed558");
u32 func_002ed558(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 v0;
    func_001c1748(a0, *(u32*)((a1 + 0x9f4)), a3, a4, a4);
    *(u32*)((a0 + 0x50)) = a2;
    v0 = func_00190128(a0 + 0x64);
    *(u32*)((a0 + 0x78)) = 0;
    return v0;
}
