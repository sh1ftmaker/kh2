// coverage: addr=0x00136fa8 symbol=func_00136fa8 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;ghidra:near:92.9
#include "common/types.h"

extern "C" u32 D_00137250 asm("D_00137250");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");

// 0x00136fa8 func_00136fa8
u32 func_00136fa8() asm("func_00136fa8");
u32 func_00136fa8() {
    return func_00102c18(1, 0x493e0, (u32)&D_00137250);
}
