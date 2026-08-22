// coverage: addr=0x0010a828 symbol=func_0010a828 size=92 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:31.76;ghidra:near:8.51
#include "common/types.h"

extern "C" u32 D_00340eb4 asm("D_00340eb4");
extern "C" u32 D_00340eb8 asm("D_00340eb8");
extern "C" u32 D_00340ebc asm("D_00340ebc");
extern "C" u32 D_00340ec0 asm("D_00340ec0");

// 0x0010a828 func_0010a828
// minilink-rodata 0x0036a3dc   (float literals live here in the original)
f32 func_0010a828(f32 fa0, f32 fa1) asm("func_0010a828");
f32 func_0010a828(f32 fa0, f32 fa1) {
    *(f32*)(&D_00340eb4) = fa0;
    *(f32*)(&D_00340eb8) = fa1;
    *(f32*)(&D_00340ebc) = (-255.0f / (fa1 - fa0));
    *(f32*)(&D_00340ec0) = ((fa1 * 255.0f) / (fa1 - fa0));
    return (-255.0f / (fa1 - fa0));
}
