// coverage: addr=0x0028dfe8 symbol=func_0028dfe8 size=24 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 D_0035f440 asm("D_0035f440");

// 0x0028dfe8 func_0028dfe8
void func_0028dfe8(u32 a0) asm("func_0028dfe8");
void func_0028dfe8(u32 a0) {
    *(u32*)(a0) = (u32)&D_0035f440;
    *(u32*)((a0 + 0xc)) = 0;
    *(u32*)((a0 + 0x38)) = 0;
}
