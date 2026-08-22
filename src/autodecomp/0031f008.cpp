// coverage: addr=0x0031f008 symbol=func_0031f008 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_00350388 asm("D_00350388");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_0016a358(u32) asm("func_0016a358");

// 0x0031f008 func_0031f008
u32 func_0031f008(u32 a0) asm("func_0031f008");
u32 func_0031f008(u32 a0) {
    *(u32*)(a0) = (u32)&D_00350388;
    func_0016a358(a0);
    return func_00105110(a0);
}
