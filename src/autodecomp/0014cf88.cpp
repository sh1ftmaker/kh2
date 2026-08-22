// coverage: addr=0x0014cf88 symbol=func_0014cf88 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_0014e088() asm("func_0014e088");
extern "C" u32 func_0014e5f0(u32) asm("func_0014e5f0");
extern "C" void func_0014cf80() asm("func_0014cf80");
extern "C" void func_0014d060() asm("func_0014d060");
extern "C" void func_001b7f88() asm("func_001b7f88");
extern "C" void func_002ef7c8() asm("func_002ef7c8");

// 0x0014cf88 func_0014cf88
u32 func_0014cf88() asm("func_0014cf88");
u32 func_0014cf88() {
    func_0014cf80();
    func_001b7f88();
    func_002ef7c8();
    func_0014d060();
    return func_0014e5f0(func_0014e088());
}
