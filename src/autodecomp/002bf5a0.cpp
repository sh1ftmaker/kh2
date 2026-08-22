// coverage: addr=0x002bf5a0 symbol=func_002bf5a0 size=116 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:91.03;ghidra:near:82.03
#include "common/types.h"

extern "C" u32 func_0016ac38(u32, u32, u32, u32, u32) asm("func_0016ac38");
extern "C" u32 func_001b6d70(u32) asm("func_001b6d70");

// 0x002bf5a0 func_002bf5a0
u32 func_002bf5a0(u32 a0) asm("func_002bf5a0");
u32 func_002bf5a0(u32 a0) {
    u32 v0;
    v0 = func_001b6d70(*(u8*)((*(u32*)((a0 + 0xaf8)) + 4)));
    if ((((*(u8*)((a0 + 0xae7)) & 1) & 0xff) == 0)) {
        if ((((*(u8*)((v0 + 3)) & 1) & 0xff) != 0)) {
            return func_0016ac38(a0, 0, 1, 0, 0);
        } else {
            return v0;
        }
    } else {
        return v0;
    }
}
