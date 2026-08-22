// coverage: addr=0x001045b8 symbol=func_001045b8 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;corpus:near:69.64;m2c:near:26.64
#include "common/types.h"

extern "C" u32 D_0032ba94 asm("D_0032ba94");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");

// 0x001045b8 func_001045b8
u32 func_001045b8(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_001045b8");
u32 func_001045b8(u32 a0, u32 a1, u32 a2, u32 a3) {
    return func_00102818(*(u32*)(&D_0032ba94), a0, a1, a2, a3);
}
