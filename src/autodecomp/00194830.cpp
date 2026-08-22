// coverage: addr=0x00194830 symbol=_Z16u_call4_00194830jjjj size=68 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:74.71;ghidra:near:47.62
#include "common/types.h"

extern "C" u32 func_001947c0(u32) asm("func_001947c0");

// 0x00194830 u_call4_00194830(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_00194830(u32 a0, u32 a1, u32 a2) asm("_Z16u_call4_00194830jjjj");
u32 lift_00194830(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    v0 = func_001947c0(a0);
    v0 = ((s32)(v0) != 0) ? ((u32)(0) < (u32)((*(u32*)(v0) & (1 << a2)))) : 0;
    return v0;
}
