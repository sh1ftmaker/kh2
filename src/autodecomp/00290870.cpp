// coverage: addr=0x00290870 symbol=func_00290870 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_0035f4b0 asm("D_0035f4b0");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_002908f0(u32) asm("func_002908f0");

// 0x00290870 func_00290870
u32 func_00290870(u32 a0) asm("func_00290870");
u32 func_00290870(u32 a0) {
    *(u32*)(a0) = (u32)&D_0035f4b0;
    func_002908f0(a0);
    return func_00106420(a0);
}
