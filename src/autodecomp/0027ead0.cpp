// coverage: addr=0x0027ead0 symbol=func_0027ead0 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:79.06;ghidra:near:64.19
#include "common/types.h"

struct S6_4_s16 { u8 _p[4]; s16 m; };
extern "C" u32 D_0035f244 asm("D_0035f244");
extern "C" u32 D_0035f24c asm("D_0035f24c");
extern "C" u32 D_00374050 asm("D_00374050");
extern "C" u32 func_0028da70(u32, u32) asm("func_0028da70");

// 0x0027ead0 func_0027ead0
u32 func_0027ead0() asm("func_0027ead0");
u32 func_0027ead0() {
    return func_0028da70(*(u32*)(&D_0035f244), ((S6_4_s16*)&D_00374050)[*(s8*)(&D_0035f24c)].m);
}
