// coverage: addr=0x002c0700 symbol=func_002c0700 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:77.78
#include "common/types.h"

extern "C" u32 func_002c6218() asm("func_002c6218");
extern "C" u32 func_002c6280(u32, u32) asm("func_002c6280");

// 0x002c0700 func_002c0700
u32 func_002c0700() asm("func_002c0700");
u32 func_002c0700() {
    return func_002c6280(func_002c6218(), 1);
}
