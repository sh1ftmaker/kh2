// coverage: addr=0x00315840 symbol=func_00315840 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33;e3:near:22.31
#include "common/types.h"

extern "C" u32 D_003677e8 asm("D_003677e8");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_00315768(u32) asm("func_00315768");

// 0x00315840 func_00315840
u32 func_00315840(u32 a0) asm("func_00315840");
u32 func_00315840(u32 a0) {
    *(u32*)(a0) = (u32)&D_003677e8;
    func_00315768(a0);
    return func_00106420(a0);
}
