// coverage: addr=0x0023c0c0 symbol=func_0023c0c0 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_0035eb08 asm("D_0035eb08");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_0023c300(u32) asm("func_0023c300");

// 0x0023c0c0 func_0023c0c0
u32 func_0023c0c0(u32 a0) asm("func_0023c0c0");
u32 func_0023c0c0(u32 a0) {
    *(u32*)(a0) = (u32)&D_0035eb08;
    func_0023c300(a0);
    return func_00106420(a0);
}
