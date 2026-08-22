// coverage: addr=0x00262cb8 symbol=_ZN2Tz6CmItem9LeaveWarnEv size=372 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:88.86;e3:near:88.62;ghidra:near:83.12
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f020 asm("D_0035f020");
extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 func_00139510(u32) asm("func_00139510");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_0028abe0(u32) asm("func_0028abe0");

// 0x00262cb8 Tz::CmItem::LeaveWarn()
u32 lift_00262cb8() asm("_ZN2Tz6CmItem9LeaveWarnEv");
u32 lift_00262cb8() {
    u32 v0;
    u32 s1;
    u32 s2;
    u32 v0_0;
    v0 = func_00257770();
    if (((s32)(func_00139d78(v0)) != 0)) {
        func_00139510(v0);
    }
    if (((s32)(func_00139d78(v0 + 0x660)) != 0)) {
        func_00139510(v0 + 0x660);
    }
    if ((func_00139d78(v0 + 0xb350) != 0)) {
        func_00139510(v0 + 0xb350);
    }
    if ((func_0028acc8(*(u32*)(&D_0035f01c)) != 0)) {
        func_0028abe0(*(u32*)(&D_0035f01c));
    }
    if ((func_0028acc8(*(u32*)(&D_0035f020)) != 0)) {
        func_0028abe0(*(u32*)(&D_0035f020));
    }
    if (((s32)(func_0028acc8(*(u32*)(&D_0035f024))) != 0)) {
        func_0028abe0(*(u32*)(&D_0035f024));
    }
    s1 = v0;
    s2 = 0x17;
    do {
        if (((s32)(func_00139d78(s1 + 0xd30)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)((s1 + 0xd30)) + 0x14))))(s1 + 0xd30);
        }
        if (((s32)(func_00139d78(s1 + 0x5ef0)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)((s1 + 0x5ef0)) + 0x14))))(s1 + 0x5ef0);
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
