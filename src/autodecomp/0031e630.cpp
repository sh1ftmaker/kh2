// coverage: addr=0x0031e630 symbol=func_0031e630 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_0034e8a8 asm("D_0034e8a8");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_00239848(u32) asm("func_00239848");

// 0x0031e630 func_0031e630
u32 func_0031e630(u32 a0) asm("func_0031e630");
u32 func_0031e630(u32 a0) {
    *(u32*)(a0) = (u32)&D_0034e8a8;
    func_00239848(a0);
    return func_00106420(a0);
}
