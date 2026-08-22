// coverage: addr=0x002c6228 symbol=func_002c6228 size=84 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:85.45;ghidra:near:64.09
#include "common/types.h"

extern "C" u32 D_0032b96c asm("D_0032b96c");
extern "C" u32 func_002ef8d0(u32, u32) asm("func_002ef8d0");
extern "C" void func_002c6280(u32, u32, u32) asm("func_002c6280");

// 0x002c6228 func_002c6228
u32 func_002c6228(u32 a0, u32 a1, u32 a2) asm("func_002c6228");
u32 func_002c6228(u32 a0, u32 a1, u32 a2) {
    func_002c6280(a0, a1, a2);
    *(u32*)((((a1 << 2) + a0) + 0x10)) = a2;
    return func_002ef8d0(a0, *(u32*)(&D_0032b96c));
}
