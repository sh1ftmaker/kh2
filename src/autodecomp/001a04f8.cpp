// coverage: addr=0x001a04f8 symbol=func_001a04f8 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001d8fa8(u32, u32) asm("func_001d8fa8");

// 0x001a04f8 func_001a04f8
u32 func_001a04f8(u32 a0) asm("func_001a04f8");
u32 func_001a04f8(u32 a0) {
    return func_001d8fa8((u32)(0) < (u32)(*(u32*)(a0)), *(u32*)((a0 + 4)));
}
