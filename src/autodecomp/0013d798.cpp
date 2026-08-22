// coverage: addr=0x0013d798 symbol=func_0013d798 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;ghidra:near:92.8
#include "common/types.h"

extern "C" u32 D_0013d750 asm("D_0013d750");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");

// 0x0013d798 func_0013d798
u32 func_0013d798() asm("func_0013d798");
u32 func_0013d798() {
    return func_00102c18(1, 0x186a0, (u32)&D_0013d750);
}
