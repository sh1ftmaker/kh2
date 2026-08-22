// coverage: addr=0x001e0188 symbol=func_001e0188 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_01d9e340 asm("D_01d9e340");

// 0x001e0188 func_001e0188
u32 func_001e0188(u32 a0) asm("func_001e0188");
u32 func_001e0188(u32 a0) {
    return ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)(&D_01d9e340)))))(*(u32*)(&D_01d9e340), a0, 0);
}
