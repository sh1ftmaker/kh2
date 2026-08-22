// coverage: addr=0x002ef708 symbol=_ZN5MOVIE6ensureEv size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:near:93.33;m2c:near:72.57
#include "common/types.h"

extern "C" u32 D_003638c0 asm("D_003638c0");
extern "C" u32 D_003638c4 asm("D_003638c4");
extern "C" u32 D_003638c8 asm("D_003638c8");
extern "C" u32 func_00103bb0(u32) asm("func_00103bb0");
extern "C" void func_00103748() asm("func_00103748");
extern "C" void func_00170c00(u32) asm("func_00170c00");

// 0x002ef708 MOVIE::ensure()
u32 lift_002ef708() asm("_ZN5MOVIE6ensureEv");
u32 lift_002ef708() {
    u32 v0;
    func_00103748();
    func_00170c00(*(u32*)(&D_003638c4));
    *(u32*)(&D_003638c4) = 0;
    v0 = func_00103bb0(0xffffffff);
    *(u8*)(&D_003638c0) = 0;
    *(u8*)(&D_003638c8) = 0;
    return v0;
}
