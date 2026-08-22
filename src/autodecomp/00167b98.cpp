// coverage: addr=0x00167b98 symbol=func_00167b98 size=88 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:99.95
#include "common/types.h"

extern "C" u32 D_0034d3c0 asm("D_0034d3c0");
extern "C" u32 func_00167728(u32, u32) asm("func_00167728");
extern "C" void func_002f4a78() asm("func_002f4a78");
extern "C" void func_002f5c70(u32) asm("func_002f5c70");

// 0x00167b98 func_00167b98
u32 func_00167b98() asm("func_00167b98");
u32 func_00167b98() {
    u32 s1;
    u32 s0;
    u32 v0_0;
    func_002f4a78();
    func_002f5c70(0);
    s1 = 0;
    s0 = (u32)&D_0034d3c0;
    do {
        v0_0 = func_00167728(s0 + (s1 * 0x180), s1);
        s1 = (s1 + 1);
    } while (((s32)(((s32)(s1) < (s32)(2))) != 0));
    return v0_0;
}
