// coverage: addr=0x001053c0 symbol=_ZN4AREA16DestroyAllocatorEv size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:93.5;e3:near:43.79
#include "common/types.h"

extern "C" u32 D_0032bb1c asm("D_0032bb1c");
extern "C" u32 func_00170320(u32) asm("func_00170320");
extern "C" void func_00109280(u32) asm("func_00109280");
extern "C" void func_00170c00(u32) asm("func_00170c00");

// 0x001053c0 AREA::DestroyAllocator()
u32 lift_001053c0() asm("_ZN4AREA16DestroyAllocatorEv");
u32 lift_001053c0() {
    u32 v0;
    func_00109280(*(u32*)(&D_0032bb1c));
    func_00170c00(*(u32*)(&D_0032bb1c));
    v0 = func_00170320(0);
    *(u32*)(&D_0032bb1c) = 0;
    return v0;
}
