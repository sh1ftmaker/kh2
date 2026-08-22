// coverage: addr=0x0017dc98 symbol=_ZN2YS3OBJ6VTABLEINS_6FRIENDEE8pre_execEPS0_ size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00175af8(u32) asm("func_00175af8");
extern "C" void func_0017dcc0(u32) asm("func_0017dcc0");

// 0x0017dc98 YS::OBJ::VTABLE<YS::FRIEND>::pre_exec(YS::OBJ*)
u32 lift_0017dc98(u32 a0) asm("_ZN2YS3OBJ6VTABLEINS_6FRIENDEE8pre_execEPS0_");
u32 lift_0017dc98(u32 a0) {
    func_0017dcc0(a0);
    return func_00175af8(a0);
}
