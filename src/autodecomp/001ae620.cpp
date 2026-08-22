// coverage: addr=0x001ae620 symbol=func_001ae620 size=48 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:85.71;m2c:near:61.67
#include "common/types.h"

extern "C" u32 func_002f71b0(u32) asm("func_002f71b0");
extern "C" void func_001ae678() asm("func_001ae678");

// 0x001ae620 func_001ae620
u32 func_001ae620() asm("func_001ae620");
u32 func_001ae620() {
    u32 v0_0;
    while ((v0_0 = func_002f71b0(1)), ((s32)(v0_0) != 0)) {
        func_001ae678();
    }
    return v0_0;
}
