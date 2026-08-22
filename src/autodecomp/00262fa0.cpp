// coverage: addr=0x00262fa0 symbol=_ZN2Tz6CmItem12FadeOutStockEv size=84 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:98.95;e3:near:25.19
#include "common/types.h"

extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0027e6e0() asm("func_0027e6e0");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" void func_0028dac8(u32, u32) asm("func_0028dac8");

// 0x00262fa0 Tz::CmItem::FadeOutStock()
u32 lift_00262fa0() asm("_ZN2Tz6CmItem12FadeOutStockEv");
u32 lift_00262fa0() {
    u32 s0;
    u32 v0;
    s0 = func_00287bc0();
    v0 = func_00257770();
    if ((s0 == 0xc)) {
        func_0028dac8(v0 + 0x198, 0x12d);
        return func_0027e6e0();
    } else {
        return v0;
    }
}
