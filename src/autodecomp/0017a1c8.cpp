// coverage: addr=0x0017a1c8 symbol=_ZN2YS6BTLOBJ6VTABLEINS_6PLAYEREE11exec_damageEPS0_PNS_6DAMAGEE size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00112ab8(u32, u32) asm("func_00112ab8");
extern "C" void func_001762f8(u32, u32) asm("func_001762f8");

// 0x0017a1c8 YS::BTLOBJ::VTABLE<YS::PLAYER>::exec_damage(YS::BTLOBJ*, YS::DAMAGE*)
u32 lift_0017a1c8(u32 a0, u32 a1) asm("_ZN2YS6BTLOBJ6VTABLEINS_6PLAYEREE11exec_damageEPS0_PNS_6DAMAGEE");
u32 lift_0017a1c8(u32 a0, u32 a1) {
    *(u32*)((a0 + 0x10c)) = (*(u32*)((a0 + 0x10c)) & 0xfffffffd);
    func_001762f8(a0, a1);
    return func_00112ab8(0, a1);
}
