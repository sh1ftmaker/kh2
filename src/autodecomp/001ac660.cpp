// coverage: addr=0x001ac660 symbol=_ZN2YS6WINDOWD0Ev size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:62.67;e3:near:20.94
#include "common/types.h"

extern "C" u32 D_00350c50 asm("D_00350c50");
extern "C" u32 D_01c6ced0 asm("D_01c6ced0");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_0031fe00(u32, u32) asm("func_0031fe00");

// 0x001ac660 YS::WINDOW::~WINDOW()
u32 lift_001ac660(u32 a0) asm("_ZN2YS6WINDOWD0Ev");
u32 lift_001ac660(u32 a0) {
    *(u32*)(a0) = (u32)&D_00350c50;
    func_0031fe00((u32)&D_01c6ced0, a0);
    return func_00105110(a0);
}
