// coverage: addr=0x00226d88 symbol=func_00226d88 size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:99.38
#include "common/types.h"

extern "C" u32 func_00138480(u32) asm("func_00138480");
extern "C" void func_0014a4b0() asm("func_0014a4b0");

// 0x00226d88 func_00226d88
u32 func_00226d88() asm("func_00226d88");
u32 func_00226d88() {
    func_0014a4b0();
    return func_00138480(0);
}
