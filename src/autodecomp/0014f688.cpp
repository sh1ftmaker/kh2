// coverage: addr=0x0014f688 symbol=func_0014f688 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:28.06;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_0034a428 asm("D_0034a428");
extern "C" u32 func_00150dc0(u32, u32, u32, u32, u32, u32) asm("func_00150dc0");

// 0x0014f688 func_0014f688
u32 func_0014f688(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_0014f688");
u32 func_0014f688(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    return func_00150dc0(*(u32*)(&D_0034a428), a0, a1, a2, a3, a4);
}
