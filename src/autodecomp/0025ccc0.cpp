// coverage: addr=0x0025ccc0 symbol=func_0025ccc0 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_0014aba8() asm("func_0014aba8");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_0014aa58(u32, u32, u32) asm("func_0014aa58");

// 0x0025ccc0 func_0025ccc0
u32 func_0025ccc0() asm("func_0025ccc0");
u32 func_0025ccc0() {
    func_0014aa58(func_0014aba8(), 0xf, 0);
    return func_00287cc0(0);
}
