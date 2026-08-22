// coverage: addr=0x0028b830 symbol=func_0028b830 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;corpus:near:85.93;ghidra:near:51.76
#include "common/types.h"

extern "C" u32 D_0035f3a0 asm("D_0035f3a0");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_0023f820(u32) asm("func_0023f820");
extern "C" void func_0028b8a0(u32) asm("func_0028b8a0");

// 0x0028b830 func_0028b830
u32 func_0028b830(u32 a0) asm("func_0028b830");
u32 func_0028b830(u32 a0) {
    *(u32*)(a0) = (u32)&D_0035f3a0;
    func_0028b8a0(a0);
    func_0023f820(a0);
    return func_00106420(a0);
}
