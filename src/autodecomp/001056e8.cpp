// coverage: addr=0x001056e8 symbol=func_001056e8 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:70.18;ghidra:near:68.9
#include "common/types.h"

extern "C" u32 D_0032bb28 asm("D_0032bb28");
extern "C" u32 D_003a7b60 asm("D_003a7b60");

// 0x001056e8 func_001056e8
void func_001056e8(u32 a0) asm("func_001056e8");
void func_001056e8(u32 a0) {
    u32 t6;
    t6 = *(u32*)(&D_0032bb28);
    *(u32*)(&D_0032bb28) = (t6 + -1);
    *(u32*)((((t6 + -1) << 2) + (u32)&D_003a7b60)) = a0;
}
