// coverage: addr=0x00154b40 symbol=func_00154b40 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:99.33;e3:near:22.19
#include "common/types.h"

extern "C" u32 func_0013d810(u32, u32) asm("func_0013d810");
extern "C" u32 func_00154450(u32, u32, u32) asm("func_00154450");

// 0x00154b40 func_00154b40
u32 func_00154b40(u32 a0, u32 a1) asm("func_00154b40");
u32 func_00154b40(u32 a0, u32 a1) {
    return func_00154450(func_0013d810(a0, a1), a0, a1);
}
