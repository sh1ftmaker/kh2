// coverage: addr=0x00155410 symbol=func_00155410 size=80 class=straight source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.9;ghidra:near:79.9;m2c:near:79.9
#include "common/types.h"

extern "C" u32 func_00154408(u32, u32) asm("func_00154408");
extern "C" u32 func_00154ee8(u32) asm("func_00154ee8");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x00155410 func_00155410
u32 func_00155410(u32 a0) asm("func_00155410");
u32 func_00155410(u32 a0) {
    u32 t5;
    t5 = *(u32*)(*(u32*)((*(u32*)((a0 + 0x34)) + 0x48c)));
    *(u32*)((a0 + 0x28)) = t5;
    *(u32*)((a0 + 0x24)) = t5;
    func_00138c10(a0 + 0x394, func_00154ee8(a0));
    return func_00154408(a0 + 0x40, *(u32*)((a0 + 0x18)));
}
