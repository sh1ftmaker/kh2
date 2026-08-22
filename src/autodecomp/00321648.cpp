// coverage: addr=0x00321648 symbol=func_00321648 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_00352560 asm("D_00352560");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_001d1ed0(u32) asm("func_001d1ed0");

// 0x00321648 func_00321648
u32 func_00321648(u32 a0) asm("func_00321648");
u32 func_00321648(u32 a0) {
    *(u32*)(a0) = (u32)&D_00352560;
    func_001d1ed0(a0);
    return func_00106420(a0);
}
