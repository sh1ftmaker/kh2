// coverage: addr=0x0014a950 symbol=func_0014a950 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:69.0
#include "common/types.h"

extern "C" u32 D_00349b28 asm("D_00349b28");
extern "C" u32 func_0014a988(u32) asm("func_0014a988");
extern "C" void func_0014b638(u32) asm("func_0014b638");

// 0x0014a950 func_0014a950
u32 func_0014a950(u32 a0) asm("func_0014a950");
u32 func_0014a950(u32 a0) {
    func_0014b638(a0);
    *(u32*)(a0) = (u32)&D_00349b28;
    return func_0014a988(a0);
}
