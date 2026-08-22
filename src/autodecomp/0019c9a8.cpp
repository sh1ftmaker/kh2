// coverage: addr=0x0019c9a8 symbol=_ZN2YS6LOCKOND1Ev size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:near:93.2
#include "common/types.h"

extern "C" u32 D_00350444 asm("D_00350444");
extern "C" u32 func_0019cc20(u32) asm("func_0019cc20");

// 0x0019c9a8 YS::LOCKON::~LOCKON()
u32 lift_0019c9a8(u32 a0) asm("_ZN2YS6LOCKOND1Ev");
u32 lift_0019c9a8(u32 a0) {
    u32 v0;
    v0 = func_0019cc20(a0);
    *(u32*)(&D_00350444) = ((*(u32*)(&D_00350444) ^ a0) ? *(u32*)(&D_00350444) : 0);
    return v0;
}
