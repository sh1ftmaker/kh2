// coverage: addr=0x002533e0 symbol=_ZN2Tz8CampMenu10StartPartyEiPKv size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0;corpus:near:77.5
#include "common/types.h"

extern "C" u32 func_00253180(u32, u32) asm("func_00253180");
extern "C" void func_0026d808(u32, u32) asm("func_0026d808");

// 0x002533e0 Tz::CampMenu::StartParty(int, void const*)
u32 lift_002533e0(u32 a0, u32 a1) asm("_ZN2Tz8CampMenu10StartPartyEiPKv");
u32 lift_002533e0(u32 a0, u32 a1) {
    func_0026d808(a1, a1);
    return func_00253180(6, a0);
}
