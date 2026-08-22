// coverage: addr=0x001d3f98 symbol=func_001d3f98 size=68 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:64.5;ghidra:near:26.47
#include "common/types.h"

extern "C" u32 D_0033caf0 asm("D_0033caf0");
extern "C" u32 D_0036e448 asm("D_0036e448");
extern "C" u32 D_01d5ba30 asm("D_01d5ba30");
extern "C" void func_002fee78(u32, u32, u32, u32) asm("func_002fee78");

// 0x001d3f98 func_001d3f98
u32 func_001d3f98(u32 a0) asm("func_001d3f98");
u32 func_001d3f98(u32 a0) {
    func_002fee78((u32)&D_01d5ba30, (u32)&D_0036e448, *(u32*)(&D_0033caf0), a0 + 4);
    return (u32)&D_01d5ba30;
}
