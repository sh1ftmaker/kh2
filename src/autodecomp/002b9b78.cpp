// coverage: addr=0x002b9b78 symbol=func_002b9b78 size=88 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:42.41;e3:near:27.55
#include "common/types.h"

extern "C" u32 D_01e2a410 asm("D_01e2a410");
extern "C" u32 func_002bce10(u32, u32) asm("func_002bce10");
extern "C" void func_002bc9a8(u32, u32, u32) asm("func_002bc9a8");

// 0x002b9b78 func_002b9b78
u32 func_002b9b78() asm("func_002b9b78");
u32 func_002b9b78() {
    func_002bc9a8((u32)&D_01e2a410, 2, 0);
    func_002bce10((u32)&D_01e2a410, 2);
    func_002bc9a8((u32)&D_01e2a410, 3, 0x3e7);
    return func_002bce10((u32)&D_01e2a410, 3);
}
