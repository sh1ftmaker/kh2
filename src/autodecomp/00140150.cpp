// coverage: addr=0x00140150 symbol=func_00140150 size=188 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:66.9;ghidra:near:33.26
#include "common/types.h"

extern "C" f32 func_002f8870(u32, f32) asm("func_002f8870");
extern "C" u32 func_0013fda0(u32) asm("func_0013fda0");
extern "C" u32 func_0013fdc8(u32) asm("func_0013fdc8");

// 0x00140150 func_00140150
// minilink-rodata 0x0036ade0   (float literals live here in the original)
void func_00140150(u32 a0, f32 fa0) asm("func_00140150");
void func_00140150(u32 a0, f32 fa0) {
    if ((1.0f <= func_002f8870(a0, *(f32*)((a0 + 0x48)) - *(f32*)((a0 + 0xc8))))) {
        if ((*(f32*)((a0 + 0xc8)) < *(f32*)((a0 + 0x48)))) {
            *(f32*)((a0 + 0x48)) = (*(f32*)((a0 + 0x48)) - (fa0 * 0.5f));
            func_0013fda0(a0);
            return;
        } else {
            *(f32*)((a0 + 0x48)) = (*(f32*)((a0 + 0x48)) + (fa0 * 0.5f));
            func_0013fdc8(a0);
            return;
        }
    } else {
        return;
    }
}
