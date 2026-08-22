// coverage: addr=0x001b5c78 symbol=_ZN2YS5LIMIT17reset_hit_counterEv size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:73.56;e3:near:73.5
#include "common/types.h"

extern "C" void func_001d20a8(u32) asm("func_001d20a8");
extern "C" void func_001d2180(u32) asm("func_001d2180");

// 0x001b5c78 YS::LIMIT::reset_hit_counter()
u32 lift_001b5c78(u32 a0) asm("_ZN2YS5LIMIT17reset_hit_counterEv");
u32 lift_001b5c78(u32 a0) {
    u32 s0;
    u32 s1;
    s0 = (a0 + 0x68);
    s1 = *(u32*)((s0 + 0x2c));
    func_001d2180(s0);
    func_001d20a8(s0);
    return s1;
}
