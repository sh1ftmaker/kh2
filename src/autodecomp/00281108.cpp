// coverage: addr=0x00281108 symbol=func_00281108 size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_0016e920(u32) asm("func_0016e920");
extern "C" u32 func_00281238() asm("func_00281238");

// 0x00281108 func_00281108
u32 func_00281108() asm("func_00281108");
u32 func_00281108() {
    return func_0016e920(func_00281238());
}
