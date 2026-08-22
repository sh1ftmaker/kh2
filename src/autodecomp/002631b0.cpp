// coverage: addr=0x002631b0 symbol=func_002631b0 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0028da70(u32, u32) asm("func_0028da70");

// 0x002631b0 func_002631b0
u32 func_002631b0() asm("func_002631b0");
u32 func_002631b0() {
    return func_0028da70(func_00257770() + 0xb350, 0x133);
}
