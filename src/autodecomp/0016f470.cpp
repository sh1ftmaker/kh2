// coverage: addr=0x0016f470 symbol=func_0016f470 size=68 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:56.94
#include "common/types.h"

extern "C" u32 D_0036c440 asm("D_0036c440");
extern "C" u32 D_004f63b0 asm("D_004f63b0");
extern "C" void func_002fee78(u32, u32, u32) asm("func_002fee78");

// 0x0016f470 func_0016f470
u32 func_0016f470(u32 a0, u32 a1) asm("func_0016f470");
u32 func_0016f470(u32 a0, u32 a1) {
    if (((s32)(a1) == 0)) {
        a1 = (u32)&D_004f63b0;
    }
    func_002fee78(a1, (u32)&D_0036c440, a0 + 8);
    return a1;
}
