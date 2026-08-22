// coverage: addr=0x001286d0 symbol=func_001286d0 size=128 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:21.8;m2c:near:0.0
#include "common/types.h"


// 0x001286d0 func_001286d0
// minilink-rodata 0x0036aa14   (float literals live here in the original)
f32 func_001286d0(f32 fa0, f32 fa1, f32 fa2, f32 fa3, f32 fa4, f32 fa5, f32 fa6) asm("func_001286d0");
f32 func_001286d0(f32 fa0, f32 fa1, f32 fa2, f32 fa3, f32 fa4, f32 fa5, f32 fa6) {
    return ((((fa2 * ((((((((fa0 - fa1) * (fa0 - fa1)) * (fa0 - fa1)) * ((1.0f / (fa4 - fa1)) * (1.0f / (fa4 - fa1)))) + ((((fa0 - fa1) * (fa0 - fa1)) * (fa0 - fa1)) * ((1.0f / (fa4 - fa1)) * (1.0f / (fa4 - fa1))))) * (1.0f / (fa4 - fa1))) - ((((fa0 - fa1) * (fa0 - fa1)) * 3.0f) * ((1.0f / (fa4 - fa1)) * (1.0f / (fa4 - fa1))))) + 1.0f)) + (fa5 * (((((fa0 - fa1) * (fa0 - fa1)) * 3.0f) * ((1.0f / (fa4 - fa1)) * (1.0f / (fa4 - fa1)))) - ((((((fa0 - fa1) * (fa0 - fa1)) * (fa0 - fa1)) * ((1.0f / (fa4 - fa1)) * (1.0f / (fa4 - fa1)))) + ((((fa0 - fa1) * (fa0 - fa1)) * (fa0 - fa1)) * ((1.0f / (fa4 - fa1)) * (1.0f / (fa4 - fa1))))) * (1.0f / (fa4 - fa1)))))) + (fa3 * ((((((fa0 - fa1) * (fa0 - fa1)) * (fa0 - fa1)) * ((1.0f / (fa4 - fa1)) * (1.0f / (fa4 - fa1)))) - ((((fa0 - fa1) * (fa0 - fa1)) * (1.0f / (fa4 - fa1))) + (((fa0 - fa1) * (fa0 - fa1)) * (1.0f / (fa4 - fa1))))) + (fa0 - fa1)))) + (fa6 * (((((fa0 - fa1) * (fa0 - fa1)) * (fa0 - fa1)) * ((1.0f / (fa4 - fa1)) * (1.0f / (fa4 - fa1)))) - (((fa0 - fa1) * (fa0 - fa1)) * (1.0f / (fa4 - fa1))))));
}
