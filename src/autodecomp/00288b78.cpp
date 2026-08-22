// coverage: addr=0x00288b78 symbol=_ZN2Tz6Select3EndEv size=112 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:63.06;e3:near:51.43;ghidra:near:33.91
#include "common/types.h"

extern "C" u32 D_0035f348 asm("D_0035f348");
extern "C" u32 D_0035f34c asm("D_0035f34c");
extern "C" u32 D_0035f350 asm("D_0035f350");
extern "C" u32 func_00103b38() asm("func_00103b38");
extern "C" u32 func_00287f30() asm("func_00287f30");

// 0x00288b78 Tz::Select::End()
u32 lift_00288b78() asm("_ZN2Tz6Select3EndEv");
u32 lift_00288b78() {
    u32 v0;
    u32 v0_0;
    v0 = func_00103b38();
    if (((s32)(v0) != 0)) {
        v0_0 = func_00287f30();
        v0 = v0_0;
    }
    if (((s32)(((s32)((*(u8*)(&D_0035f348) << 0x18)) >> 0x18)) != 0)) {
        *(u8*)(&D_0035f348) = (*(u8*)(&D_0035f348) + -1);
    } else {
        if (((s32)(*(u32*)(&D_0035f350)) != 0)) {
            *(u32*)(&D_0035f34c) = *(u32*)(&D_0035f350);
        } else {
            *(u32*)(&D_0035f34c) = 0;
        }
        *(u32*)(&D_0035f350) = 0;
    }
    return v0;
}
