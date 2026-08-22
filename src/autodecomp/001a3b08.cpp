// coverage: addr=0x001a3b08 symbol=_ZN2YS6EFFECT6EnsureEv size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:near:81.12;ghidra:near:37.6
#include "common/types.h"

extern "C" u32 D_01c6cae0 asm("D_01c6cae0");
extern "C" u32 D_01c6cafc asm("D_01c6cafc");
extern "C" u32 func_00170950(u32) asm("func_00170950");
extern "C" void func_001dde40(u32) asm("func_001dde40");
extern "C" void func_001de450(u32) asm("func_001de450");

// 0x001a3b08 YS::EFFECT::Ensure()
u32 lift_001a3b08() asm("_ZN2YS6EFFECT6EnsureEv");
u32 lift_001a3b08() {
    func_001de450((u32)&D_01c6cae0);
    func_001dde40((u32)&D_01c6cae0);
    return func_00170950(*(u32*)(&D_01c6cafc));
}
