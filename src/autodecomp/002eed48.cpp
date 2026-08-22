// coverage: addr=0x002eed48 symbol=func_002eed48 size=120 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.33;ghidra:near:75.24
#include "common/types.h"

extern "C" u32 D_003637e0 asm("D_003637e0");
extern "C" u32 D_00363860 asm("D_00363860");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" u32 func_001a93e8(u32) asm("func_001a93e8");
extern "C" void func_00106ac8(u32) asm("func_00106ac8");
extern "C" void func_001a9350(u32) asm("func_001a9350");

// 0x002eed48 func_002eed48
u32 func_002eed48(u32 a0) asm("func_002eed48");
u32 func_002eed48(u32 a0) {
    u32 v0;
    *(u32*)(a0) = (u32)&D_00363860;
    v0 = func_001a93e8(a0 + 0x2c);
    ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(v0) + 0x28))))(v0, *(u32*)((a0 + 0x28)), *(u32*)((a0 + 0x44)));
    func_00106ac8(a0 + 0x50);
    func_001a9350(a0 + 0x2c);
    *(u32*)(a0) = (u32)&D_003637e0;
    return func_00106420(a0);
}
