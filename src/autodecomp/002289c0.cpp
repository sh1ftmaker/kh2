// coverage: addr=0x002289c0 symbol=func_002289c0 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.17;ghidra:near:83.93
#include "common/types.h"

extern "C" u32 func_00228918(u32) asm("func_00228918");

// 0x002289c0 func_002289c0
u32 func_002289c0(u32 a0) asm("func_002289c0");
u32 func_002289c0(u32 a0) {
    ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x1c))))(a0);
    return func_00228918(a0);
}
