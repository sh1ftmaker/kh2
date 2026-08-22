// coverage: addr=0x003157b8 symbol=func_003157b8 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_00367818 asm("D_00367818");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_003155e8(u32) asm("func_003155e8");

// 0x003157b8 func_003157b8
u32 func_003157b8(u32 a0) asm("func_003157b8");
u32 func_003157b8(u32 a0) {
    *(u32*)(a0) = (u32)&D_00367818;
    func_003155e8(a0);
    return func_00106420(a0);
}
