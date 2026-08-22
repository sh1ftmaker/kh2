// coverage: addr=0x002eb6f8 symbol=func_002eb6f8 size=128 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:87.75;ghidra:near:59.39
#include "common/types.h"

extern "C" u32 func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" u32 func_002eaf40(u32) asm("func_002eaf40");
extern "C" void func_00180c88(u32, u32, f32) asm("func_00180c88");

// 0x002eb6f8 func_002eb6f8
void func_002eb6f8(u32 a0, u32 a1, f32 fa0) asm("func_002eb6f8");
void func_002eb6f8(u32 a0, u32 a1, f32 fa0) {
    if (((s32)(a1) >= 0)) {
        func_00180c88(a0 + 0x140, a1, fa0);
        func_002eaf40(a0);
        func_0017f488(func_002eaf40(a0) + 0x140, a1 + -0x65, fa0, 0.0f);
        return;
    } else {
        return;
    }
}
