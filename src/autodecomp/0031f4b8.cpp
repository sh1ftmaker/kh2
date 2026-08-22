// coverage: addr=0x0031f4b8 symbol=_ZN2YS13WINDOW_CREDITD0Ev size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_00350bf0 asm("D_00350bf0");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_001ac5b8(u32) asm("func_001ac5b8");

// 0x0031f4b8 YS::WINDOW_CREDIT::~WINDOW_CREDIT()
u32 lift_0031f4b8(u32 a0) asm("_ZN2YS13WINDOW_CREDITD0Ev");
u32 lift_0031f4b8(u32 a0) {
    *(u32*)(a0) = (u32)&D_00350bf0;
    func_001ac5b8(a0);
    return func_00105110(a0);
}
