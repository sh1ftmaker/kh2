// coverage: addr=0x001be4b0 symbol=func_001be4b0 size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:85.83;ghidra:near:79.62
#include "common/types.h"

extern "C" u32 func_002ba2e8(u32, u32) asm("func_002ba2e8");
extern "C" void func_001be4e0(u32, u32) asm("func_001be4e0");

// 0x001be4b0 func_001be4b0
u32 func_001be4b0(u32 a0) asm("func_001be4b0");
u32 func_001be4b0(u32 a0) {
    func_001be4e0(a0, *(u32*)((a0 + 0xaa4)) ? 0 : 6);
    return func_002ba2e8(0x14, 0);
}
