// coverage: addr=0x0013d2d0 symbol=func_0013d2d0 size=188 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:58.19;m2c:near:42.96
#include "common/types.h"

struct S8_4_u32 { u8 _p[4]; u32 m; };
extern "C" u32 D_00348578 asm("D_00348578");
extern "C" f32 func_0013b2a8(u32) asm("func_0013b2a8");
extern "C" u32 func_0013cb30() asm("func_0013cb30");
extern "C" u32 func_0013cb80(u32) asm("func_0013cb80");
extern "C" u32 func_0013cb90() asm("func_0013cb90");
extern "C" u32 func_0013d1d0(u32) asm("func_0013d1d0");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00138c40(u32, u32, u32) asm("func_00138c40");
extern "C" void func_00138d48(u32, f32, f32, f32, f32) asm("func_00138d48");

// 0x0013d2d0 func_0013d2d0
// minilink-rodata 0x0036ad60   (float literals live here in the original)
u32 func_0013d2d0(u32 a0) asm("func_0013d2d0");
u32 func_0013d2d0(u32 a0) {
    u32 s1;
    u32 s0;
    s1 = func_0013cb80(a0);
    s0 = func_0013cb90();
    func_001386e0(a0 + 0x104, 0x14b5, func_0013cb30(), s1 + 0x20, ((S8_4_u32*)&D_00348578)[s0].m, 1);
    func_00138c40(a0 + 0x104, 0x1c, 0x142);
    func_00138d48(a0 + 0x104, 1.0f, 1.0f, 1.0f, func_0013b2a8(a0));
    return func_0013d1d0(a0);
}
