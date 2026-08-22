// coverage: addr=0x00131770 symbol=func_00131770 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_00347bd8 asm("D_00347bd8");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_00124c08(u32) asm("func_00124c08");

// 0x00131770 func_00131770
u32 func_00131770(u32 a0) asm("func_00131770");
u32 func_00131770(u32 a0) {
    *(u32*)(a0) = (u32)&D_00347bd8;
    func_00124c08(a0);
    return func_00106420(a0);
}
