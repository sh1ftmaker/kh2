// coverage: addr=0x00225690 symbol=func_00225690 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:91.21;corpus:near:74.29;ghidra:near:59.67
#include "common/types.h"

extern "C" u32 D_0035dae4 asm("D_0035dae4");
extern "C" u32 func_00227930(u32) asm("func_00227930");
extern "C" void func_00225fa0(u32, u32) asm("func_00225fa0");

// 0x00225690 func_00225690
u32 func_00225690(u32 a0) asm("func_00225690");
u32 func_00225690(u32 a0) {
    func_00225fa0(*(u32*)(&D_0035dae4), *(u32*)((a0 + 0x18)));
    return func_00227930(a0);
}
