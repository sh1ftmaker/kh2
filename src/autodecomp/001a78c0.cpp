// coverage: addr=0x001a78c0 symbol=func_001a78c0 size=88 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:61.0;ghidra:near:38.05
#include "common/types.h"

extern "C" void func_001a7a48(u32, f32, f32) asm("func_001a7a48");
extern "C" void func_001a7da8(u32, u32, f32, f32) asm("func_001a7da8");

// 0x001a78c0 func_001a78c0
u32 func_001a78c0(u32 a0, f32 fa0, f32 fa1, f32 fa2, f32 fa3) asm("func_001a78c0");
u32 func_001a78c0(u32 a0, f32 fa0, f32 fa1, f32 fa2, f32 fa3) {
    u8 frame[48];
    func_001a7a48((u32)frame, fa0, fa1);
    func_001a7da8(a0, (u32)frame, fa2, fa3);
    return a0;
}
