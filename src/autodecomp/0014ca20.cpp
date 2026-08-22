// coverage: addr=0x0014ca20 symbol=func_0014ca20 size=20 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;e3:near:99.6;corpus:near:98.0;m2c:near:53.14
#include "common/types.h"

extern "C" u32 D_00349df8 asm("D_00349df8");
extern "C" u32 D_00349dfc asm("D_00349dfc");

// 0x0014ca20 func_0014ca20
u32 func_0014ca20() asm("func_0014ca20");
u32 func_0014ca20() {
    *(u32*)(&D_00349dfc) = 0;
    return *(u32*)(&D_00349df8);
}
