// coverage: addr=0x0027b4e8 symbol=func_0027b4e8 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0028dac8(u32, u32) asm("func_0028dac8");

// 0x0027b4e8 func_0027b4e8
u32 func_0027b4e8() asm("func_0027b4e8");
u32 func_0027b4e8() {
    return func_0028dac8(func_00257770() + 0xb350, 0x112);
}
