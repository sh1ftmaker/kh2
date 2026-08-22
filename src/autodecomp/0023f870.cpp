// coverage: addr=0x0023f870 symbol=func_0023f870 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_0035ebd8 asm("D_0035ebd8");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_0023f8c8(u32) asm("func_0023f8c8");

// 0x0023f870 func_0023f870
u32 func_0023f870(u32 a0) asm("func_0023f870");
u32 func_0023f870(u32 a0) {
    *(u32*)(a0) = (u32)&D_0035ebd8;
    func_0023f8c8(a0);
    return func_00106420(a0);
}
