// coverage: addr=0x001e60b0 symbol=func_001e60b0 size=80 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:83.3;ghidra:near:56.65
#include "common/types.h"

extern "C" u32 D_00354bf0 asm("D_00354bf0");
extern "C" void func_001e6000(u32) asm("func_001e6000");

// 0x001e60b0 func_001e60b0
void func_001e60b0() asm("func_001e60b0");
void func_001e60b0() {
    u32 s0;
    s0 = (u32)&D_00354bf0;
    while (((s32)(*(u32*)((s0 + 4))) >= 0)) {
        func_001e6000(s0 + 0x28);
        func_001e6000(s0 + 0x38);
        s0 = (s0 + 0x48);
    }
    return;
}
