// coverage: addr=0x00197be8 symbol=_ZN2YS5EVENT4ExitEv size=60 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:near:72.22;e3:near:71.94;m2c:near:68.37
#include "common/types.h"

extern "C" u32 D_0035037c asm("D_0035037c");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_00196e00(u32) asm("func_00196e00");

// 0x00197be8 YS::EVENT::Exit()
u32 lift_00197be8() asm("_ZN2YS5EVENT4ExitEv");
u32 lift_00197be8() {
    u32 s0;
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u32*)(&D_0035037c)) != 0)) {
        s0 = *(u32*)(&D_0035037c);
        func_00196e00(*(u32*)(&D_0035037c));
        v0 = func_00105110(s0);
        v0_0 = v0;
    }
    return v0_0;
}
