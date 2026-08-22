// coverage: addr=0x003158c8 symbol=func_003158c8 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33;e3:near:22.31
#include "common/types.h"

extern "C" u32 D_003677b8 asm("D_003677b8");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_00315768(u32) asm("func_00315768");

// 0x003158c8 func_003158c8
u32 func_003158c8(u32 a0) asm("func_003158c8");
u32 func_003158c8(u32 a0) {
    *(u32*)(a0) = (u32)&D_003677b8;
    func_00315768(a0);
    return func_00106420(a0);
}
