// coverage: addr=0x001e09d0 symbol=func_001e09d0 size=192 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:81.86;ghidra:near:36.1;e3:near:31.59
#include "common/types.h"

extern "C" u32 func_001e09a0(u32, u32, u32, u32) asm("func_001e09a0");

// 0x001e09d0 func_001e09d0
// minilink-rodata 0x0036e8b0   (float literals live here in the original)
f32 func_001e09d0(u32 a0) asm("func_001e09d0");
f32 func_001e09d0(u32 a0) {
    u32 s2;
    f32 f21;
    f32 f20;
    u32 s0;
    f32 f22;
    s2 = 0;
    f21 = 0.0f;
    f20 = 0.0f;
    do {
        s0 = 1;
        f22 = 100.0f;
        do {
            f20 = (f20 + f22);
            f21 = (f21 + *(f32*)((func_001e09a0(a0, s2, s0, 0) + 0x20)));
            s0 = (s0 + 1);
        } while (((s32)(((s32)(s0) < (s32)(4))) != 0));
        s2 = (s2 + 1);
    } while (((s32)(((s32)(s2) < (s32)(9))) != 0));
    return ((f21 / f20) * 100.0f);
}
