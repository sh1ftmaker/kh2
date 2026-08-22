// coverage: addr=0x0027f9b0 symbol=func_0027f9b0 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_002800d0() asm("func_002800d0");
extern "C" void func_00280148() asm("func_00280148");

// 0x0027f9b0 func_0027f9b0
u32 func_0027f9b0() asm("func_0027f9b0");
u32 func_0027f9b0() {
    func_00280148();
    func_002800d0();
    return func_00287cc0(0);
}
