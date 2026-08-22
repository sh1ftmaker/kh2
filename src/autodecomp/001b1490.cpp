// coverage: addr=0x001b1490 symbol=_ZN2YS8DATABUFF7ReadBarEPKc size=72 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:99.44
#include "common/types.h"

extern "C" u32 func_001b1400(u32) asm("func_001b1400");
extern "C" void func_00168328(u32, u32) asm("func_00168328");

// 0x001b1490 YS::DATABUFF::ReadBar(char const*)
u32 lift_001b1490(u32 a0) asm("_ZN2YS8DATABUFF7ReadBarEPKc");
u32 lift_001b1490(u32 a0) {
    u32 v0;
    v0 = func_001b1400(a0);
    if (((s32)(v0) != 0)) {
        func_00168328(a0, v0);
    }
    return v0;
}
