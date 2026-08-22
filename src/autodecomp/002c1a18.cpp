// coverage: addr=0x002c1a18 symbol=func_002c1a18 size=60 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:55.0;m2c:near:29.27
#include "common/types.h"

extern "C" void func_00184540(u32, u32, f32, f32) asm("func_00184540");

// 0x002c1a18 func_002c1a18
// minilink-rodata 0x003754ec   (float literals live here in the original)
u32 func_002c1a18(u32 a0, u32 a1, u32 a2) asm("func_002c1a18");
u32 func_002c1a18(u32 a0, u32 a1, u32 a2) {
    func_00184540(a0, a2, 0.949999988079071f, 0.949999988079071f);
    return a0;
}
