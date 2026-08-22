// coverage: addr=0x00263c60 symbol=_ZN2Tz9CMenuHelp7FadeOutEv size=92 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.33;m2c:near:90.4
#include "common/types.h"

extern "C" u32 D_0035f0d8 asm("D_0035f0d8");
extern "C" u32 D_0035f0dc asm("D_0035f0dc");
extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00263cc0() asm("func_00263cc0");

// 0x00263c60 Tz::CMenuHelp::FadeOut()
u32 lift_00263c60() asm("_ZN2Tz9CMenuHelp7FadeOutEv");
u32 lift_00263c60() {
    u32 v0;
    u32 v0_0;
    v0 = func_00263cc0();
    if (((s32)(v0) != 0)) {
        if ((*(u32*)((*(u32*)(&D_0035f0dc) + 0x184)) != *(s16*)(&D_0035f0d8))) {
            v0_0 = func_00138c10(*(u32*)(&D_0035f0dc), *(s16*)(&D_0035f0d8));
            *(u32*)((*(u32*)(&D_0035f0dc) + 0x188)) = 0xffffffff;
            v0 = v0_0;
        }
    }
    return v0;
}
