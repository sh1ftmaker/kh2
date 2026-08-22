// coverage: addr=0x00298e48 symbol=_ZN2Tz7JmAlbum10UpdateMessEv size=148 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:83.28;ghidra:near:78.89
#include "common/types.h"

extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f598 asm("D_0035f598");
extern "C" u32 D_0035f5a0 asm("D_0035f5a0");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_002983d8(u32) asm("func_002983d8");

// 0x00298e48 Tz::JmAlbum::UpdateMess()
u32 lift_00298e48() asm("_ZN2Tz7JmAlbum10UpdateMessEv");
u32 lift_00298e48() {
    u32 v0;
    u32 s0;
    u32 v0_0;
    u32 s0_1;
    u32 v0_2;
    v0 = func_00287bc0();
    if ((v0 == 5)) {
        s0 = (func_002766d0() + 0xd30);
        v0_0 = func_002983d8(*(s16*)((((*(s8*)(&D_0035f5a0) << 1) + *(u32*)(&D_0035f598)) + 4)));
        *(u32*)((s0 + 0x198)) = func_00192048(*(u16*)((v0_0 + 8)));
        s0_1 = func_002891b8(*(u32*)(&D_0035f200), 0);
        v0_2 = func_00192048(*(u16*)((v0_0 + 0xa)));
        *(u32*)((s0_1 + 0x198)) = v0_2;
        v0 = v0_2;
    }
    return v0;
}
