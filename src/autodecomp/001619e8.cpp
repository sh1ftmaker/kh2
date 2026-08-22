// coverage: addr=0x001619e8 symbol=func_001619e8 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00102688(u32, u32, u32) asm("func_00102688");
extern "C" u32 func_00102c80() asm("func_00102c80");

// 0x001619e8 func_001619e8
u32 func_001619e8() asm("func_001619e8");
u32 func_001619e8() {
    return func_00102688(*(u32*)((func_00102c80() + 4)), 3, 3);
}
