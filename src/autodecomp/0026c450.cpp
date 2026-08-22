// coverage: addr=0x0026c450 symbol=func_0026c450 size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_0023d820(u32) asm("func_0023d820");
extern "C" u32 func_00287dc0() asm("func_00287dc0");

// 0x0026c450 func_0026c450
u32 func_0026c450() asm("func_0026c450");
u32 func_0026c450() {
    return func_0023d820(func_00287dc0());
}
