// coverage: addr=0x001b2f10 symbol=func_001b2f10 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:near:98.0;m2c:near:53.0
#include "common/types.h"

extern "C" u32 D_01d48c90 asm("D_01d48c90");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_00165898(u32) asm("func_00165898");

// 0x001b2f10 func_001b2f10
u32 func_001b2f10() asm("func_001b2f10");
u32 func_001b2f10() {
    *(u32*)(&D_01d48c90) = 1;
    return func_00165898(func_001050c8());
}
