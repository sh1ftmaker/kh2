// coverage: addr=0x001723d0 symbol=_ZN2YS13trap_obj_idleEP8BD_VALUE size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:28.4
#include "common/types.h"

extern "C" u32 func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" void func_001ba028(u32) asm("func_001ba028");

// 0x001723d0 YS::trap_obj_idle(BD_VALUE*)
u32 lift_001723d0(u32 a0) asm("_ZN2YS13trap_obj_idleEP8BD_VALUE");
u32 lift_001723d0(u32 a0) {
    func_001ba028(*(u32*)((*(u32*)(a0) + 4)));
    return func_0016bd60(*(u32*)((*(u32*)(a0) + 4)), 0);
}
