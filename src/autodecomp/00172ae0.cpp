// coverage: addr=0x00172ae0 symbol=_ZN2YS15trap_obj_add_hpEP8BD_VALUE size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:40.38
#include "common/types.h"


// 0x00172ae0 YS::trap_obj_add_hp(BD_VALUE*)
u32 lift_00172ae0(u32 a0) asm("_ZN2YS15trap_obj_add_hpEP8BD_VALUE");
u32 lift_00172ae0(u32 a0) {
    u32 v0;
    v0 = ((u32(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(a0) + 4))) + 0x78))))(*(u32*)((*(u32*)(a0) + 4)), *(u32*)((a0 + 4)), *(u32*)((a0 + 8)), (u32)(0) < (u32)(*(u32*)((a0 + 0xc))));
    *(u32*)(a0) = v0;
    return v0;
}
