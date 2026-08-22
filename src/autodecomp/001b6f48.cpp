// coverage: addr=0x001b6f48 symbol=func_001b6f48 size=64 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:63.75;m2c:near:46.19;e3:near:0.0
#include "common/types.h"

extern "C" void func_0017c870(u32, f32, f32) asm("func_0017c870");

// 0x001b6f48 func_001b6f48
// minilink-rodata 0x0036dac4   (float literals live here in the original)
u32 func_001b6f48(u32 a0) asm("func_001b6f48");
u32 func_001b6f48(u32 a0) {
    func_0017c870(a0, 0.8999999761581421f, 0.949999988079071f);
    return a0;
}
