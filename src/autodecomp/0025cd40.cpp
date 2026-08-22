// coverage: addr=0x0025cd40 symbol=func_0025cd40 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:85.0;m2c:near:85.0
#include "common/types.h"

extern "C" u32 func_0014aba8() asm("func_0014aba8");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_0014aa58(u32, u32, u32) asm("func_0014aa58");
extern "C" void func_002bd760(u32) asm("func_002bd760");

// 0x0025cd40 func_0025cd40
u32 func_0025cd40() asm("func_0025cd40");
u32 func_0025cd40() {
    func_0014aa58(func_0014aba8(), 0xf, 0);
    func_002bd760(0x3c);
    return func_00287cc0(0);
}
