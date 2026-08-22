// coverage: addr=0x00262ff8 symbol=_ZN2Tz6CmItem9LeaveHelpEv size=220 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:94.25;ghidra:near:89.84
#include "common/types.h"

extern "C" u32 D_0035f020 asm("D_0035f020");
extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 func_00139510(u32) asm("func_00139510");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0027e920() asm("func_0027e920");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_0027e770() asm("func_0027e770");
extern "C" void func_0028abe0(u32) asm("func_0028abe0");

// 0x00262ff8 Tz::CmItem::LeaveHelp()
u32 lift_00262ff8() asm("_ZN2Tz6CmItem9LeaveHelpEv");
u32 lift_00262ff8() {
    u32 v0;
    u32 v0_0;
    v0 = func_00257770();
    if ((func_00139d78(v0 + 0x198) != 0)) {
        func_00139510(v0 + 0x198);
    }
    if ((func_00139d78(v0 + 0x814) != 0)) {
        func_00139510(v0 + 0x814);
    }
    if ((func_0028acc8(*(u32*)(&D_0035f020)) != 0)) {
        func_0028abe0(*(u32*)(&D_0035f020));
    }
    if (((s32)(func_0028acc8(*(u32*)(&D_0035f024))) != 0)) {
        func_0028abe0(*(u32*)(&D_0035f024));
    }
    if (((s32)(func_0027e920()) != 0)) {
        func_0027e770();
    }
    v0_0 = func_00139d78(v0 + 0x4c8);
    if ((v0_0 != 0)) {
        return func_00139510(v0 + 0x4c8);
    } else {
        return v0_0;
    }
}
