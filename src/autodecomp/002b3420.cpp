// coverage: addr=0x002b3420 symbol=func_002b3420 size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:75.0
#include "common/types.h"

extern "C" u32 func_002ac678(u32) asm("func_002ac678");
extern "C" u32 func_002b23e0() asm("func_002b23e0");

// 0x002b3420 func_002b3420
u32 func_002b3420() asm("func_002b3420");
u32 func_002b3420() {
    return func_002ac678(*(u8*)((func_002b23e0() + 2)));
}
