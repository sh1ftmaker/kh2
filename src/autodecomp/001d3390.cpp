// coverage: addr=0x001d3390 symbol=func_001d3390 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:68.05
#include "common/types.h"

extern "C" u32 D_01d5ba10 asm("D_01d5ba10");
extern "C" u32 func_001d3350(u32, u32) asm("func_001d3350");
extern "C" void func_001d3388(u32) asm("func_001d3388");

// 0x001d3390 func_001d3390
u32 func_001d3390(u32 a0) asm("func_001d3390");
u32 func_001d3390(u32 a0) {
    u32 s1;
    s1 = func_001d3350((u32)&D_01d5ba10, 0);
    func_001d3388(a0);
    *(u32*)(s1) = a0;
    return a0;
}
