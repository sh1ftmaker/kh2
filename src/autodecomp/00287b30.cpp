// coverage: addr=0x00287b30 symbol=func_00287b30 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:31.26;ghidra:near:5.93
#include "common/types.h"

extern "C" u32 D_0035f2f0 asm("D_0035f2f0");
extern "C" u32 D_0035f2f4 asm("D_0035f2f4");
extern "C" u32 D_0035f2f8 asm("D_0035f2f8");
extern "C" u32 D_0035f2fc asm("D_0035f2fc");
extern "C" u32 func_00287c78(u32) asm("func_00287c78");

// 0x00287b30 func_00287b30
u32 func_00287b30() asm("func_00287b30");
u32 func_00287b30() {
    *(u32*)(&D_0035f2f0) = 0;
    *(u32*)(&D_0035f2f4) = 0;
    *(u32*)(&D_0035f2f8) = 0;
    *(u32*)(&D_0035f2fc) = 0xffffffff;
    return func_00287c78(0);
}
