// coverage: addr=0x00236a18 symbol=func_00236a18 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_0035eac8 asm("D_0035eac8");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_00236c38(u32) asm("func_00236c38");

// 0x00236a18 func_00236a18
u32 func_00236a18(u32 a0) asm("func_00236a18");
u32 func_00236a18(u32 a0) {
    *(u32*)(a0) = (u32)&D_0035eac8;
    func_00236c38(a0);
    return func_00106420(a0);
}
