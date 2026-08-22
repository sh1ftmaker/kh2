// coverage: addr=0x00133228 symbol=func_00133228 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_00347c60 asm("D_00347c60");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_001322f0(u32) asm("func_001322f0");

// 0x00133228 func_00133228
u32 func_00133228(u32 a0) asm("func_00133228");
u32 func_00133228(u32 a0) {
    *(u32*)(a0) = (u32)&D_00347c60;
    func_001322f0(a0);
    return func_00106420(a0);
}
