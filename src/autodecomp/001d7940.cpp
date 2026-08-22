// coverage: addr=0x001d7940 symbol=_ZN2YS12HE_COLOSSEUM5StartEv size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:near:99.67;m2c:near:99.67
#include "common/types.h"

extern "C" u32 func_001ada38(u32) asm("func_001ada38");
extern "C" u32 func_001ba158() asm("func_001ba158");

// 0x001d7940 YS::HE_COLOSSEUM::Start()
u32 lift_001d7940() asm("_ZN2YS12HE_COLOSSEUM5StartEv");
u32 lift_001d7940() {
    u32 v0;
    v0 = func_001ba158();
    *(u32*)((v0 + 4)) = 0;
    *(u32*)((v0 + 0xc)) = 0;
    *(u32*)((v0 + 0x14)) = 0;
    *(u32*)((v0 + 0x18)) = 0;
    return func_001ada38(0xc);
}
