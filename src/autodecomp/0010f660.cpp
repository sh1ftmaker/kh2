// coverage: addr=0x0010f660 symbol=func_0010f660 size=84 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:74.36;m2c:near:65.32;ghidra:near:61.14
#include "common/types.h"

extern "C" u32 func_001064a8(u32) asm("func_001064a8");

// 0x0010f660 func_0010f660
// minilink-rodata 0x0036a52c   (float literals live here in the original)
f32 func_0010f660() asm("func_0010f660");
f32 func_0010f660() {
    u32 v0;
    f32 f1;
    v0 = func_001064a8(0x4e21);
    f1 = (f32)(v0);
    return (f1 * 4.999999873689376e-05f);
}
