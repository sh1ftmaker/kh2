// coverage: addr=0x002deac0 symbol=func_002deac0 size=84 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:54.5;m2c:near:52.07
#include "common/types.h"

extern "C" f32 func_001065a8(u32, f32, f32) asm("func_001065a8");

// 0x002deac0 func_002deac0
// minilink-rodata 0x00375e38   (float literals live here in the original)
void func_002deac0(u32 a0, f32 fa0, f32 fa1) asm("func_002deac0");
void func_002deac0(u32 a0, f32 fa0, f32 fa1) {
    if ((fa0 == fa1)) {
        *(f32*)((a0 + 0x18)) = fa0;
    } else {
        *(f32*)((a0 + 0x18)) = func_001065a8(a0, fa0, fa1);
    }
    *(f32*)((a0 + 0x18)) = (*(f32*)((a0 + 0x18)) * 0.009999999776482582f);
    return;
}
