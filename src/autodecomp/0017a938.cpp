// coverage: addr=0x0017a938 symbol=func_0017a938 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:82.92;corpus:near:65.42;e3:near:0.0
#include "common/types.h"

extern "C" u32 func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" void func_0017c430(u32) asm("func_0017c430");

// 0x0017a938 func_0017a938
u32 func_0017a938(u32 a0, u32 a1) asm("func_0017a938");
u32 func_0017a938(u32 a0, u32 a1) {
    func_0017c430(a1);
    return func_0016bd60(a1, 1);
}
