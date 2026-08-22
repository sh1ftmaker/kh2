// coverage: addr=0x001c9860 symbol=_ZN2YS9SACRIFICE9StartFormEi size=140 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:41.45;ghidra:near:25.14;m2c:near:16.83
#include "common/types.h"

extern "C" u32 func_0016a070(u32) asm("func_0016a070");
extern "C" u32 func_0017df58(u32) asm("func_0017df58");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" u32 func_001c9780(u32, f32) asm("func_001c9780");
extern "C" u32 func_001c9958(u32, u32) asm("func_001c9958");

// 0x001c9860 YS::SACRIFICE::StartForm(int)
// minilink-rodata 0x0036e0a8   (float literals live here in the original)
u32 lift_001c9860(u32 a0) asm("_ZN2YS9SACRIFICE9StartFormEi");
u32 lift_001c9860(u32 a0) {
    u32 s1;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    s1 = 0;
    do {
        v0_0 = func_0017df58(s1);
        v0_1 = func_0019ba60(v0_0);
        if (((s32)(v0_1) != 0)) {
            v0_2 = func_001c9958(a0, func_0016a070(v0_0));
            if (((s32)(v0_2) != 0)) {
                v0_3 = func_001c9780(v0_0, 15.0f);
                v0_2 = v0_3;
            }
            v0_1 = v0_2;
        }
        s1 = (s1 + 1);
    } while (((s32)(((s32)(s1) < (s32)(2))) != 0));
    return v0_1;
}
