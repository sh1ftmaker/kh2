// coverage: addr=0x002f0da8 symbol=_ZN2kn31trap_friend_get_player_attackerEP8BD_VALUE size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:52.59
#include "common/types.h"

extern "C" u32 func_0010c7e8(u32) asm("func_0010c7e8");
extern "C" u32 func_00118d10(u32, u32) asm("func_00118d10");

// 0x002f0da8 kn::trap_friend_get_player_attacker(BD_VALUE*)
u32 lift_002f0da8(u32 a0) asm("_ZN2kn31trap_friend_get_player_attackerEP8BD_VALUE");
u32 lift_002f0da8(u32 a0) {
    return func_00118d10(func_0010c7e8(*(u32*)((*(u32*)(a0) + 4))), *(u32*)((a0 + 4)));
}
