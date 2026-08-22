// coverage: addr=0x0016fa58 symbol=func_0016fa58 size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:75.18
#include "common/types.h"

extern "C" u32 D_0016f9e8 asm("D_0016f9e8");
extern "C" u32 D_01c5c460 asm("D_01c5c460");
extern "C" u32 func_0014d358(u32, u32, u32, u32) asm("func_0014d358");

// 0x0016fa58 func_0016fa58
u32 func_0016fa58() asm("func_0016fa58");
u32 func_0016fa58() {
    return func_0014d358((u32)&D_01c5c460, 0x3000, (u32)&D_0016f9e8, 0);
}
