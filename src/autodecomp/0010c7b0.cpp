// coverage: addr=0x0010c7b0 symbol=func_0010c7b0 size=56 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" void func_00135dc8(u32) asm("func_00135dc8");

// 0x0010c7b0 func_0010c7b0
u32 func_0010c7b0(u32 a0) asm("func_0010c7b0");
u32 func_0010c7b0(u32 a0) {
    if (((s32)(*(u32*)((a0 + 0xb5c))) == 0)) {
        func_00135dc8(a0 + 0xb5c);
    }
    return *(u32*)((a0 + 0xb5c));
}
