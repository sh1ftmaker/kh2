// coverage: addr=0x00262588 symbol=_ZN2Tz6CmItem10LeaveStockEv size=196 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:94.24;ghidra:near:85.25
#include "common/types.h"

extern "C" u32 func_00139510(u32) asm("func_00139510");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00257770() asm("func_00257770");

// 0x00262588 Tz::CmItem::LeaveStock()
u32 lift_00262588() asm("_ZN2Tz6CmItem10LeaveStockEv");
u32 lift_00262588() {
    u32 v0;
    u32 s1;
    u32 s2;
    u32 v0_0;
    v0 = func_00257770();
    if (((s32)(func_00139d78(v0 + 0x9c8)) != 0)) {
        func_00139510(v0 + 0x9c8);
    }
    s1 = v0;
    s2 = 4;
    do {
        if (((s32)(func_00139d78(s1 + 0xd30)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)((s1 + 0xd30)) + 0x14))))(s1 + 0xd30);
        }
        s1 = (s1 + 0x1b4);
        s2 = (s2 + -1);
    } while (((s32)(s2) >= 0));
    v0_0 = func_00139d78(v0 + 0x330);
    if ((v0_0 != 0)) {
        return func_00139510(v0 + 0x330);
    } else {
        return v0_0;
    }
}
