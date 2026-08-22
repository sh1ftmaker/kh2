// coverage: addr=0x0019ec20 symbol=_ZN2YS4BLUR4InitEv size=68 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:41.06
#include "common/types.h"

extern "C" u32 D_0019ec68 asm("D_0019ec68");
extern "C" u32 D_00350448 asm("D_00350448");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" void func_0019ec88(u32) asm("func_0019ec88");
extern "C" void func_0019ed48(u32) asm("func_0019ed48");

// 0x0019ec20 YS::BLUR::Init()
u32 lift_0019ec20() asm("_ZN2YS4BLUR4InitEv");
u32 lift_0019ec20() {
    func_0019ec88((u32)&D_00350448);
    func_0019ed48((u32)&D_00350448);
    return func_00102c18(1, 0xa410, (u32)&D_0019ec68);
}
