// coverage: addr=0x002eb4b0 symbol=func_002eb4b0 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:68.41
#include "common/types.h"

extern "C" u32 func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" void func_0017c430(u32) asm("func_0017c430");

// 0x002eb4b0 func_002eb4b0
u32 func_002eb4b0(u32 a0) asm("func_002eb4b0");
u32 func_002eb4b0(u32 a0) {
    func_0017c430(a0);
    *(u32*)((a0 + 0x100)) = 0x100;
    *(u32*)((a0 + 0x104)) = 0x101;
    return func_0016bd60(a0, 0x31);
}
