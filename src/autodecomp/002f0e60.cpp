// coverage: addr=0x002f0e60 symbol=_ZN2kn28trap_friend_get_action_paramEP8BD_VALUE size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:52.0
#include "common/types.h"

extern "C" u32 func_0010c7e8(u32) asm("func_0010c7e8");
extern "C" u32 func_00114438(u32, u32) asm("func_00114438");

// 0x002f0e60 kn::trap_friend_get_action_param(BD_VALUE*)
u32 lift_002f0e60(u32 a0) asm("_ZN2kn28trap_friend_get_action_paramEP8BD_VALUE");
u32 lift_002f0e60(u32 a0) {
    u32 v0;
    v0 = func_00114438(func_0010c7e8(*(u32*)((*(u32*)(a0) + 4))), *(u32*)((a0 + 4)));
    *(u32*)(a0) = v0;
    return v0;
}
