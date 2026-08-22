// coverage: addr=0x0017ce10 symbol=_ZN2YS4MATH9FixRadianEf size=112 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:38.32;ghidra:near:23.6;e3:near:14.63
#include "common/types.h"

extern "C" f32 func_002f8b00(f32, f32) asm("func_002f8b00");

// 0x0017ce10 YS::MATH::FixRadian(float)
// minilink-rodata 0x0036c544   (float literals live here in the original)
f32 lift_0017ce10(f32 fa0) asm("_ZN2YS4MATH9FixRadianEf");
f32 lift_0017ce10(f32 fa0) {
    f32 f0;
    if ((0.0f < fa0)) {
        f0 = (func_002f8b00(fa0 + 3.1415927410125732f, 6.2831854820251465f) - 3.1415927410125732f);
    } else {
        f0 = (3.1415927410125732f - func_002f8b00(3.1415927410125732f - fa0, 6.2831854820251465f));
    }
    return f0;
}
