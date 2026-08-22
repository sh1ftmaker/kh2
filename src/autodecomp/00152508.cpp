// coverage: addr=0x00152508 symbol=func_00152508 size=144 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:78.51;m2c:near:26.61
#include "common/types.h"

extern "C" u32 func_0013a7e8(u32, u32, u32, u32) asm("func_0013a7e8");
extern "C" u32 func_0013d7e0() asm("func_0013d7e0");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" void func_00138d60(u32, u32, u32, u32, u32, u32, u32) asm("func_00138d60");

// 0x00152508 func_00152508
u32 func_00152508(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_00152508");
u32 func_00152508(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 s1;
    s1 = func_0013a7e8(1, a1, a2, a3);
    func_00138d60(a0, 0x2328, s1, func_0013d7e0(), a1, a3, 0xe);
    *(u32*)((a0 + 0x174)) = a4;
    *(u32*)((a0 + 0x1a8)) = 0xe;
    return func_0023aa78(a0 + 0x18);
}
