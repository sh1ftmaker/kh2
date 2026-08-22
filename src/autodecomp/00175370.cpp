// coverage: addr=0x00175370 symbol=_ZN2YS19trap_tutorial_pauseEP8BD_VALUE size=108 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.96;ghidra:near:55.39;e3:near:53.47
#include "common/types.h"

extern "C" u32 D_0034e888 asm("D_0034e888");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_002edfa8(u32, u32) asm("func_002edfa8");
extern "C" void func_002ee220(u32) asm("func_002ee220");
extern "C" void func_002ee5d8(u32, u32) asm("func_002ee5d8");

// 0x00175370 YS::trap_tutorial_pause(BD_VALUE*)
u32 lift_00175370(u32 a0) asm("_ZN2YS19trap_tutorial_pauseEP8BD_VALUE");
u32 lift_00175370(u32 a0) {
    u32 v0;
    u32 s2;
    v0 = func_001050d8(0x1280);
    s2 = *(u32*)(a0);
    func_002ee220(v0);
    *(u32*)(v0) = (u32)&D_0034e888;
    func_002ee5d8(v0 + 0x24, s2);
    return func_002edfa8(v0, v0 + 0x24);
}
