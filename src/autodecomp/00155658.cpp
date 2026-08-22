// coverage: addr=0x00155658 symbol=func_00155658 size=100 class=float source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.2;m2c:near:99.2;ghidra:near:59.07
#include "common/types.h"

extern "C" f32 func_00166d10(u32, u32) asm("func_00166d10");
extern "C" f32 func_00166d38(u32) asm("func_00166d38");
extern "C" u32 func_00154cd0(u32, u32, f32) asm("func_00154cd0");

// 0x00155658 func_00155658
u32 func_00155658(u32 a0) asm("func_00155658");
u32 func_00155658(u32 a0) {
    f32 f20;
    f20 = func_00166d38(*(u32*)((a0 + 0x34)));
    u32 t11_39 = (u32)(*(u32*)((a0 + 0x24)));
    func_00154cd0(a0, 1, func_00166d10(t11_39, *(u32*)((*(u32*)((*(u32*)((a0 + 0x34)) + 0x48c)) + 4))));
    return func_00154cd0(a0, 2, f20);
}
