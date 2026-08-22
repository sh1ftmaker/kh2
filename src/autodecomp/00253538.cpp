// coverage: addr=0x00253538 symbol=_ZN2Tz8CampMenu10StartBasicEi size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:94.55
#include "common/types.h"

extern "C" u32 func_001037b8() asm("func_001037b8");
extern "C" u32 func_00253330(u32) asm("func_00253330");
extern "C" void func_00103500(u32) asm("func_00103500");
extern "C" void func_00288648() asm("func_00288648");

// 0x00253538 Tz::CampMenu::StartBasic(int)
u32 lift_00253538() asm("_ZN2Tz8CampMenu10StartBasicEi");
u32 lift_00253538() {
    func_00288648();
    func_00103500(*(s16*)((func_00253330(0xa) + 2)));
    return func_001037b8();
}
