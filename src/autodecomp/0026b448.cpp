// coverage: addr=0x0026b448 symbol=func_0026b448 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_0026b5a0(u32) asm("func_0026b5a0");
extern "C" void func_0026b470() asm("func_0026b470");
extern "C" void func_0026b508() asm("func_0026b508");

// 0x0026b448 func_0026b448
u32 func_0026b448() asm("func_0026b448");
u32 func_0026b448() {
    func_0026b470();
    func_0026b508();
    return func_0026b5a0(0xffffffff);
}
