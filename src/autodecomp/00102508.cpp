// coverage: addr=0x00102508 symbol=_ZN12TASK_MANAGER6CreateEPvj size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001024b0(u32) asm("func_001024b0");
extern "C" u32 func_00106178() asm("func_00106178");

// 0x00102508 TASK_MANAGER::Create(void*, unsigned int)
u32 lift_00102508() asm("_ZN12TASK_MANAGER6CreateEPvj");
u32 lift_00102508() {
    return func_001024b0(func_00106178());
}
