// coverage: addr=0x0022afa0 symbol=func_0022afa0 size=68 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:44.81;m2c:near:1.41
#include "common/types.h"

extern "C" f32 func_0022afe8(u32) asm("func_0022afe8");
extern "C" void func_00224828(u32) asm("func_00224828");

// 0x0022afa0 func_0022afa0
// minilink-rodata 0x00371110   (float literals live here in the original)
f32 func_0022afa0(u32 a0) asm("func_0022afa0");
f32 func_0022afa0(u32 a0) {
    func_00224828(a0);
    return func_0022afe8((s32)(((f32)((s32)(a0)) * 1.5f)));
}
