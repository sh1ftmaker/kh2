// coverage: addr=0x002803e0 symbol=func_002803e0 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:93.56
#include "common/types.h"

extern "C" u32 D_0035f264 asm("D_0035f264");
extern "C" u32 func_0028da70(u32, u32) asm("func_0028da70");

// 0x002803e0 func_002803e0
u32 func_002803e0() asm("func_002803e0");
u32 func_002803e0() {
    func_0028da70(*(u32*)(&D_0035f264) + 0x18, 8);
    return func_0028da70(*(u32*)(&D_0035f264) + 0x1cc, 0xb);
}
