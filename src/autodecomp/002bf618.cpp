// coverage: addr=0x002bf618 symbol=func_002bf618 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:85.67
#include "common/types.h"

extern "C" u32 func_001b6d70(u32) asm("func_001b6d70");
extern "C" u32 func_002bf650(u32, u32) asm("func_002bf650");

// 0x002bf618 func_002bf618
u32 func_002bf618(u32 a0) asm("func_002bf618");
u32 func_002bf618(u32 a0) {
    return func_002bf650(a0, func_001b6d70(*(u8*)((*(u32*)((a0 + 0xaf8)) + 4))));
}
