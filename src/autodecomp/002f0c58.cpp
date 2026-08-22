// coverage: addr=0x002f0c58 symbol=_ZN2kn42trap_peterpan_receive_notify_player_targetEP8BD_VALUE size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:50.41
#include "common/types.h"

extern "C" u32 func_0010c7e8(u32) asm("func_0010c7e8");
extern "C" u32 func_0011a408(u32) asm("func_0011a408");

// 0x002f0c58 kn::trap_peterpan_receive_notify_player_target(BD_VALUE*)
u32 lift_002f0c58(u32 a0) asm("_ZN2kn42trap_peterpan_receive_notify_player_targetEP8BD_VALUE");
u32 lift_002f0c58(u32 a0) {
    u32 v0;
    v0 = func_0011a408(func_0010c7e8(*(u32*)((*(u32*)(a0) + 4))));
    *(u32*)(a0) = v0;
    return v0;
}
