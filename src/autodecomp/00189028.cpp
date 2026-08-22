// coverage: addr=0x00189028 symbol=func_00189028 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;corpus:near:99.33;m2c:near:99.33
#include "common/types.h"

extern "C" u32 func_00188948(u32, u32, u32) asm("func_00188948");
extern "C" u32 func_00188fe0(u32, u32) asm("func_00188fe0");

// 0x00189028 func_00189028
u32 func_00189028(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00189028");
u32 func_00189028(u32 a0, u32 a1, u32 a2, u32 a3) {
    return func_00188948(func_00188fe0(a0, a1), a2, a3);
}
