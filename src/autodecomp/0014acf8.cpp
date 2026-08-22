// coverage: addr=0x0014acf8 symbol=func_0014acf8 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:93.22
#include "common/types.h"

extern "C" u32 D_003493a0 asm("D_003493a0");
extern "C" u32 func_0014a988(u32) asm("func_0014a988");
extern "C" void func_0014ace8() asm("func_0014ace8");

// 0x0014acf8 func_0014acf8
u32 func_0014acf8() asm("func_0014acf8");
u32 func_0014acf8() {
    func_0014ace8();
    return func_0014a988((u32)&D_003493a0);
}
