// coverage: addr=0x001c6748 symbol=func_001c6748 size=24 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:90.0
#include "common/types.h"

extern "C" u32 D_001c6460 asm("D_001c6460");

// 0x001c6748 func_001c6748
void func_001c6748(u32 a0) asm("func_001c6748");
void func_001c6748(u32 a0) {
    *(u8*)((a0 + 0x50)) = 2;
    *(u32*)((a0 + 0x54)) = (u32)&D_001c6460;
}
