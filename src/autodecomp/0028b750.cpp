// coverage: addr=0x0028b750 symbol=func_0028b750 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:69.0
#include "common/types.h"

extern "C" u32 D_0035f3a0 asm("D_0035f3a0");
extern "C" u32 func_0028b870(u32) asm("func_0028b870");
extern "C" void func_0023f7e0(u32) asm("func_0023f7e0");

// 0x0028b750 func_0028b750
u32 func_0028b750(u32 a0) asm("func_0028b750");
u32 func_0028b750(u32 a0) {
    func_0023f7e0(a0);
    *(u32*)(a0) = (u32)&D_0035f3a0;
    return func_0028b870(a0);
}
