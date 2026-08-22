// coverage: addr=0x001ba310 symbol=_ZN2YS11ITEM_EFFECTD1Ev size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:94.92;e3:near:23.11
#include "common/types.h"

extern "C" u32 D_01d48de0 asm("D_01d48de0");
extern "C" u32 func_003204c8(u32, u32) asm("func_003204c8");
extern "C" void func_001ba598(u32) asm("func_001ba598");

// 0x001ba310 YS::ITEM_EFFECT::~ITEM_EFFECT()
u32 lift_001ba310(u32 a0) asm("_ZN2YS11ITEM_EFFECTD1Ev");
u32 lift_001ba310(u32 a0) {
    func_001ba598(a0);
    return func_003204c8((u32)&D_01d48de0, a0);
}
