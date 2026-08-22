// coverage: addr=0x00168008 symbol=func_00168008 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.64;m2c:near:42.87
#include "common/types.h"

extern "C" u32 D_0034d780 asm("D_0034d780");
extern "C" u32 D_004f5258 asm("D_004f5258");
extern "C" u32 func_00167f38(u32) asm("func_00167f38");

// 0x00168008 func_00168008
u32 func_00168008() asm("func_00168008");
u32 func_00168008() {
    u32 t6;
    t6 = *(u32*)(&D_0034d780);
    *(u32*)(&D_0034d780) = (t6 + -1);
    return func_00167f38(*(u32*)((((t6 + -1) << 2) + (u32)&D_004f5258)));
}
