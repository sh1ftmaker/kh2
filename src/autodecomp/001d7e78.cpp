// coverage: addr=0x001d7e78 symbol=func_001d7e78 size=60 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;corpus:near:91.27;ghidra:near:84.41
#include "common/types.h"

extern "C" u32 func_001b40e0(u32) asm("func_001b40e0");
extern "C" void func_0019aa00(u32, u32) asm("func_0019aa00");

// 0x001d7e78 func_001d7e78
void func_001d7e78(u32 a0) asm("func_001d7e78");
void func_001d7e78(u32 a0) {
    if (((s32)(*(u32*)((a0 + 0x818))) != 0)) {
        func_0019aa00(*(u32*)((a0 + 0x818)), a0);
    }
    func_001b40e0(a0);
    return;
}
