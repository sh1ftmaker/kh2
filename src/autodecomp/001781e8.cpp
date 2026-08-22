// coverage: addr=0x001781e8 symbol=func_001781e8 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001d69d0(u32) asm("func_001d69d0");
extern "C" void func_00140db0(u32) asm("func_00140db0");
extern "C" void func_00182f28(u32) asm("func_00182f28");

// 0x001781e8 func_001781e8
u32 func_001781e8(u32 a0) asm("func_001781e8");
u32 func_001781e8(u32 a0) {
    u32 v0;
    func_00140db0(a0);
    func_00182f28(0);
    v0 = func_001d69d0(*(u32*)((a0 + 0xb3c)));
    *(u32*)((a0 + 0xb3c)) = 0;
    return v0;
}
