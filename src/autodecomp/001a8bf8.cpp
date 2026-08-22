// coverage: addr=0x001a8bf8 symbol=func_001a8bf8 size=20 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;corpus:near:60.0;e3:near:19.95;m2c:compile:0.0
#include "common/types.h"


// 0x001a8bf8 func_001a8bf8
u32 func_001a8bf8(u32 a0, u32 a1) asm("func_001a8bf8");
u32 func_001a8bf8(u32 a0, u32 a1) {
    return ((*(u8*)((a0 + a1)) & 0x1f) & 0xff);
}
