// coverage: addr=0x001d9d00 symbol=_ZN2YS6JIGSAW4InitEv size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:83.08
#include "common/types.h"

extern "C" u32 D_003528fc asm("D_003528fc");
extern "C" u32 D_01d5baa8 asm("D_01d5baa8");
extern "C" u32 func_001b1448(u32) asm("func_001b1448");

// 0x001d9d00 YS::JIGSAW::Init()
u32 lift_001d9d00() asm("_ZN2YS6JIGSAW4InitEv");
u32 lift_001d9d00() {
    u32 v0;
    v0 = func_001b1448(*(u32*)(&D_003528fc));
    *(u32*)(&D_01d5baa8) = v0;
    return v0;
}
