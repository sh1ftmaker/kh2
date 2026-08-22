// coverage: addr=0x00253480 symbol=_ZN2Tz8CampMenu15RestartSelectorEPKN2YS8SELECTOREPKNS2_4ARGSE size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00258af0(u32) asm("func_00258af0");
extern "C" void func_00258b00() asm("func_00258b00");

// 0x00253480 Tz::CampMenu::RestartSelector(YS::SELECTOR const*, YS::SELECTOR::ARGS const*)
u32 lift_00253480() asm("_ZN2Tz8CampMenu15RestartSelectorEPKN2YS8SELECTOREPKNS2_4ARGSE");
u32 lift_00253480() {
    func_00258b00();
    return func_00258af0(9);
}
