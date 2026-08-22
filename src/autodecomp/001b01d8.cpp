// coverage: addr=0x001b01d8 symbol=func_001b01d8 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33;e3:near:53.95
#include "common/types.h"

extern "C" u32 D_00350e78 asm("D_00350e78");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_001b0330(u32) asm("func_001b0330");

// 0x001b01d8 func_001b01d8
u32 func_001b01d8(u32 a0) asm("func_001b01d8");
u32 func_001b01d8(u32 a0) {
    *(u32*)(a0) = (u32)&D_00350e78;
    func_001b0330(a0);
    return func_00106420(a0);
}
