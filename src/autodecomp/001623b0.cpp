// coverage: addr=0x001623b0 symbol=func_001623b0 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00102688(u32, u32, u32) asm("func_00102688");
extern "C" u32 func_00102c80() asm("func_00102c80");

// 0x001623b0 func_001623b0
u32 func_001623b0() asm("func_001623b0");
u32 func_001623b0() {
    return func_00102688(*(u32*)((func_00102c80() + 4)), 5, 5);
}
