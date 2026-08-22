// coverage: addr=0x001400b0 symbol=func_001400b0 size=160 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:64.66;ghidra:near:56.34
#include "common/types.h"

extern "C" f32 func_002f8870(u32, f32) asm("func_002f8870");
extern "C" u32 func_0013fda0(u32) asm("func_0013fda0");
extern "C" u32 func_0013fdc8(u32) asm("func_0013fdc8");

// 0x001400b0 func_001400b0
// minilink-rodata 0x0036addc   (float literals live here in the original)
void func_001400b0(u32 a0, f32 fa0) asm("func_001400b0");
void func_001400b0(u32 a0, f32 fa0) {
    if ((1.0f <= func_002f8870(a0, *(f32*)((a0 + 0x48)) - *(f32*)((a0 + 0xcc))))) {
        if ((*(f32*)((a0 + 0xcc)) < *(f32*)((a0 + 0x48)))) {
            *(f32*)((a0 + 0x48)) = (*(f32*)((a0 + 0x48)) - fa0);
            func_0013fda0(a0);
            return;
        } else {
            *(f32*)((a0 + 0x48)) = (*(f32*)((a0 + 0x48)) + fa0);
            func_0013fdc8(a0);
            return;
        }
    } else {
        return;
    }
}
