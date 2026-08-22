// coverage: addr=0x002eecd0 symbol=func_002eecd0 size=116 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.31;m2c:near:99.31
#include "common/types.h"

extern "C" u32 D_003637e0 asm("D_003637e0");
extern "C" u32 D_00363860 asm("D_00363860");
extern "C" u32 func_001a9350(u32) asm("func_001a9350");
extern "C" u32 func_001a93e8(u32) asm("func_001a93e8");
extern "C" void func_00106ac8(u32) asm("func_00106ac8");

// 0x002eecd0 func_002eecd0
u32 func_002eecd0(u32 a0) asm("func_002eecd0");
u32 func_002eecd0(u32 a0) {
    u32 v0;
    u32 v0_0;
    *(u32*)(a0) = (u32)&D_00363860;
    v0 = func_001a93e8(a0 + 0x2c);
    ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(v0) + 0x28))))(v0, *(u32*)((a0 + 0x28)), *(u32*)((a0 + 0x44)));
    func_00106ac8(a0 + 0x50);
    v0_0 = func_001a9350(a0 + 0x2c);
    *(u32*)(a0) = (u32)&D_003637e0;
    return v0_0;
}
