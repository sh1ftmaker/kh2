// coverage: addr=0x001dc488 symbol=func_001dc488 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_01d5bb00 asm("D_01d5bb00");

// 0x001dc488 func_001dc488
u32 func_001dc488(u32 a0) asm("func_001dc488");
u32 func_001dc488(u32 a0) {
    return ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)(&D_01d5bb00)))))(*(u32*)(&D_01d5bb00), a0, 0);
}
