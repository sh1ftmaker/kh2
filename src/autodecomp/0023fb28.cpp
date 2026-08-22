// coverage: addr=0x0023fb28 symbol=func_0023fb28 size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:84.31;corpus:near:62.64
#include "common/types.h"

extern "C" u32 D_0035ebe0 asm("D_0035ebe0");
extern "C" u32 D_0035ebec asm("D_0035ebec");
extern "C" u32 func_0023fc08() asm("func_0023fc08");

// 0x0023fb28 func_0023fb28
u32 func_0023fb28() asm("func_0023fb28");
u32 func_0023fb28() {
    u32 v0;
    v0 = func_0023fc08();
    *(u32*)(&D_0035ebe0) = 0;
    *(u32*)(&D_0035ebec) = 0;
    return v0;
}
