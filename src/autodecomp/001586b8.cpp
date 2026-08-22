// coverage: addr=0x001586b8 symbol=_ZN2dk12CannonCamera6createEPN2YS3OBJE size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00140df0() asm("func_00140df0");
extern "C" u32 func_00140e30(u32, u32) asm("func_00140e30");

// 0x001586b8 dk::CannonCamera::create(YS::OBJ*)
u32 lift_001586b8() asm("_ZN2dk12CannonCamera6createEPN2YS3OBJE");
u32 lift_001586b8() {
    u32 v0;
    v0 = func_00140df0();
    *(u32*)((v0 + 0x40)) = 8;
    return func_00140e30(v0, 3);
}
