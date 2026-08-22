// coverage: addr=0x001b1448 symbol=_ZN2YS8DATABUFF4ReadEPKc size=72 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:99.44
#include "common/types.h"

extern "C" u32 func_001b1400(u32) asm("func_001b1400");
extern "C" void func_001682b8(u32, u32) asm("func_001682b8");

// 0x001b1448 YS::DATABUFF::Read(char const*)
u32 lift_001b1448(u32 a0) asm("_ZN2YS8DATABUFF4ReadEPKc");
u32 lift_001b1448(u32 a0) {
    u32 v0;
    v0 = func_001b1400(a0);
    if (((s32)(v0) != 0)) {
        func_001682b8(a0, v0);
    }
    return v0;
}
