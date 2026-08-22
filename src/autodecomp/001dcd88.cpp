// coverage: addr=0x001dcd88 symbol=func_001dcd88 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:near:98.33;ghidra:near:89.83;m2c:near:70.92
#include "common/types.h"

extern "C" u32 D_001dcd68 asm("D_001dcd68");
extern "C" u32 D_00352aec asm("D_00352aec");
extern "C" u32 D_01d5bb40 asm("D_01d5bb40");
extern "C" u32 func_00168388(u32, u32, u32, u32) asm("func_00168388");

// 0x001dcd88 func_001dcd88
u32 func_001dcd88() asm("func_001dcd88");
u32 func_001dcd88() {
    return func_00168388(*(u32*)(&D_00352aec), (u32)&D_01d5bb40, (u32)&D_001dcd68, 0);
}
