// coverage: addr=0x00153310 symbol=func_00153310 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:28.0;e3:near:13.52
#include "common/types.h"

extern "C" u32 D_0034a6f0 asm("D_0034a6f0");
extern "C" u32 func_0031cc30(u32, u32, u32, u32, u32, u32, u32) asm("func_0031cc30");

// 0x00153310 func_00153310
u32 func_00153310(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_00153310");
u32 func_00153310(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    return func_0031cc30(*(u32*)(&D_0034a6f0) + 0x18, 1, a0, a1, a2, a3, a4);
}
