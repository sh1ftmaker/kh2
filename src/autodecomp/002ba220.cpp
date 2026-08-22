// coverage: addr=0x002ba220 symbol=func_002ba220 size=120 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:45.87
#include "common/types.h"

extern "C" u32 func_002b7010(u32, u32, u32, u32, u32, u32) asm("func_002b7010");
extern "C" void func_002b7078(u32, u32, u32, u32, u32, u32) asm("func_002b7078");

// 0x002ba220 func_002ba220
u32 func_002ba220(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("func_002ba220");
u32 func_002ba220(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    func_002b7078(a0, a1, a2, a3, a4, a5);
    return func_002b7010(a0, a1, a2, a3, a4, a5);
}
