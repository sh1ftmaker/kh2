// coverage: addr=0x00105da8 symbol=func_00105da8 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;corpus:near:69.64;m2c:near:26.64
#include "common/types.h"

extern "C" u32 D_0033cb84 asm("D_0033cb84");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");

// 0x00105da8 func_00105da8
u32 func_00105da8(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00105da8");
u32 func_00105da8(u32 a0, u32 a1, u32 a2, u32 a3) {
    return func_00102818(*(u32*)(&D_0033cb84), a0, a1, a2, a3);
}
