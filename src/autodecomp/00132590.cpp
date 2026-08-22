// coverage: addr=0x00132590 symbol=func_00132590 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33;e3:near:22.31
#include "common/types.h"

extern "C" u32 D_00347c30 asm("D_00347c30");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_001322f0(u32) asm("func_001322f0");

// 0x00132590 func_00132590
u32 func_00132590(u32 a0) asm("func_00132590");
u32 func_00132590(u32 a0) {
    *(u32*)(a0) = (u32)&D_00347c30;
    func_001322f0(a0);
    return func_00106420(a0);
}
