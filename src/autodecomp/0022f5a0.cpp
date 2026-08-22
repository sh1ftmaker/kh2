// coverage: addr=0x0022f5a0 symbol=func_0022f5a0 size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:near:76.61
#include "common/types.h"

extern "C" u32 func_00227d10(u32) asm("func_00227d10");
extern "C" void func_0016ed50(u32, u32, u32) asm("func_0016ed50");

// 0x0022f5a0 func_0022f5a0
u32 func_0022f5a0(u32 a0, u32 a1, u32 a2) asm("func_0022f5a0");
u32 func_0022f5a0(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    func_0016ed50(a1 | 0x40000000, 0xffffffff, 0x1e);
    v0 = func_00227d10(a2);
    *(u8*)((v0 + 0x16)) = 1;
    return v0;
}
