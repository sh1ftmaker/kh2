// coverage: addr=0x00265c50 symbol=func_00265c50 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:77.78
#include "common/types.h"

extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0028da70(u32, u32) asm("func_0028da70");

// 0x00265c50 func_00265c50
u32 func_00265c50() asm("func_00265c50");
u32 func_00265c50() {
    return func_0028da70(func_00257770(), 0x141);
}
