// coverage: addr=0x0031f238 symbol=func_0031f238 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_00350778 asm("D_00350778");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_0018d420(u32) asm("func_0018d420");

// 0x0031f238 func_0031f238
u32 func_0031f238(u32 a0) asm("func_0031f238");
u32 func_0031f238(u32 a0) {
    *(u32*)(a0) = (u32)&D_00350778;
    func_0018d420(a0);
    return func_00105110(a0);
}
