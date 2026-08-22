// coverage: addr=0x0016df28 symbol=func_0016df28 size=72 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:25.19;m2c:near:14.72
#include "common/types.h"

extern "C" f32 func_0014aa58(u32, u32, u32) asm("func_0014aa58");
extern "C" u32 func_0014aba8(u32) asm("func_0014aba8");

// 0x0016df28 func_0016df28
// minilink-rodata 0x0036c24c   (float literals live here in the original)
f32 func_0016df28(u32 a0) asm("func_0016df28");
f32 func_0016df28(u32 a0) {
    s32 s0;
    s0 = (s32)((*(f32*)(a0) * 0.5f));
    return func_0014aa58(func_0014aba8(a0), s0, 1);
}
