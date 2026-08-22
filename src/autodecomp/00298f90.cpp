// coverage: addr=0x00298f90 symbol=_ZN2Tz12LayFileResetEv size=84 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:90.0;m2c:near:84.75;e3:near:58.5
#include "common/types.h"

extern "C" u32 D_0035f59c asm("D_0035f59c");
extern "C" u32 D_0035f5a2 asm("D_0035f5a2");
extern "C" u32 func_0023f900(u32) asm("func_0023f900");
extern "C" u32 func_00293d80(u32) asm("func_00293d80");
extern "C" void func_0023fad0(u32) asm("func_0023fad0");

// 0x00298f90 Tz::LayFileReset()
u32 lift_00298f90() asm("_ZN2Tz12LayFileResetEv");
u32 lift_00298f90() {
    u32 v0;
    if (((s32)(*(u8*)(&D_0035f5a2)) != 0)) {
        if (((s32)(func_0023f900(*(u32*)(&D_0035f59c))) != 0)) {
            func_0023fad0(*(u32*)(&D_0035f59c));
        }
    }
    v0 = func_00293d80(0x13ed);
    *(u8*)(&D_0035f5a2) = 0;
    return v0;
}
