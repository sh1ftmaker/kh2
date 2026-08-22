// coverage: addr=0x002ba0f8 symbol=func_002ba0f8 size=68 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;m2c:exact:100.0;ghidra:near:49.65
#include "common/types.h"

extern "C" u32 D_00374f80 asm("D_00374f80");
extern "C" u32 D_01e2a5a8 asm("D_01e2a5a8");
extern "C" void func_002fee78(u32, u32, u32) asm("func_002fee78");
extern "C" void func_002ff3fc(u32) asm("func_002ff3fc");

// 0x002ba0f8 func_002ba0f8
u32 func_002ba0f8(u32 a0) asm("func_002ba0f8");
u32 func_002ba0f8(u32 a0) {
    func_002fee78((u32)&D_01e2a5a8, (u32)&D_00374f80, a0);
    func_002ff3fc((u32)&D_01e2a5a8);
    return (u32)&D_01e2a5a8;
}
