// coverage: addr=0x00262c40 symbol=_ZN2Tz6CmItem11FadeOutWarnEv size=116 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:69.65;e3:near:9.62
#include "common/types.h"

extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0028dac8(u32, u32) asm("func_0028dac8");

// 0x00262c40 Tz::CmItem::FadeOutWarn()
u32 lift_00262c40() asm("_ZN2Tz6CmItem11FadeOutWarnEv");
u32 lift_00262c40() {
    u32 s0;
    u32 v0;
    s0 = func_00287bc0();
    v0 = func_00257770();
    if (((s32)(((u32)((s0 + -0xb)) < (u32)(4))) != 0)) {
        func_0028dac8(v0, 0x12a);
        return func_0028dac8(v0 + 0xb350, 0x133);
    } else {
        return v0;
    }
}
