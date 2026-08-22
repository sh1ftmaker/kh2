// coverage: addr=0x00159700 symbol=func_00159700 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:72.55
#include "common/types.h"

extern "C" u32 D_0034aa08 asm("D_0034aa08");
extern "C" u32 func_00140df0() asm("func_00140df0");

// 0x00159700 func_00159700
u32 func_00159700() asm("func_00159700");
u32 func_00159700() {
    u32 v0;
    *(u32*)(&D_0034aa08) = 0;
    v0 = func_00140df0();
    *(u32*)((v0 + 0x40)) = 5;
    return v0;
}
