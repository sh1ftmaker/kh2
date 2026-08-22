// coverage: addr=0x0022c508 symbol=func_0022c508 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00170518(u32, u32, u32) asm("func_00170518");
extern "C" u32 func_0022c4b8() asm("func_0022c4b8");

// 0x0022c508 func_0022c508
u32 func_0022c508() asm("func_0022c508");
u32 func_0022c508() {
    return func_00170518(func_0022c4b8(), 0xffffff38, 0);
}
