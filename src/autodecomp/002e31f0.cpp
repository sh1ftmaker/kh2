// coverage: addr=0x002e31f0 symbol=func_002e31f0 size=96 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:72.25;m2c:near:62.92
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 func_0016aeb8(u32, f32) asm("func_0016aeb8");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_002ceb28(u32) asm("func_002ceb28");
extern "C" void func_0016ace0(u32, u32) asm("func_0016ace0");

// 0x002e31f0 func_002e31f0
// minilink-rodata 0x00375f64   (float literals live here in the original)
u32 func_002e31f0(u32 a0, u32 a1) asm("func_002e31f0");
u32 func_002e31f0(u32 a0, u32 a1) {
    u32 v0;
    v0 = func_002ceb28(a0);
    if ((v0 != 0)) {
        func_0016ace0(a1, func_0016c028(*(u32*)(&D_0034e948)));
        return func_0016aeb8(a1, 3.1415927410125732f);
    } else {
        return v0;
    }
}
