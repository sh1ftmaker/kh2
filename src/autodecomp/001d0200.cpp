// coverage: addr=0x001d0200 symbol=_ZN2YS3OBJ6VTABLEINS_6MICKEYEE9leave_reqEPS0_ size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00178280(u32) asm("func_00178280");
extern "C" void func_00198970(u32) asm("func_00198970");

// 0x001d0200 YS::OBJ::VTABLE<YS::MICKEY>::leave_req(YS::OBJ*)
u32 lift_001d0200(u32 a0) asm("_ZN2YS3OBJ6VTABLEINS_6MICKEYEE9leave_reqEPS0_");
u32 lift_001d0200(u32 a0) {
    func_00198970(a0);
    return func_00178280(a0);
}
