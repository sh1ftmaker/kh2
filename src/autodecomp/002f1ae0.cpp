// coverage: addr=0x002f1ae0 symbol=func_002f1ae0 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:near:99.58;m2c:near:67.92
#include "common/types.h"

extern "C" u32 D_0033cae8 asm("D_0033cae8");

// 0x002f1ae0 func_002f1ae0
u32 func_002f1ae0(u32 a0) asm("func_002f1ae0");
u32 func_002f1ae0(u32 a0) {
    return ((u32)(0) < (u32)((*(u32*)((((a0 >> 5) << 2) + (u32)&D_0033cae8)) & (1 << (a0 & 0x1f)))));
}
