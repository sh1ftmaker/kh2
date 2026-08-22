// coverage: addr=0x0013f498 symbol=func_0013f498 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:86.6
#include "common/types.h"

extern "C" u32 D_0013f428 asm("D_0013f428");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" u32 func_00102c80() asm("func_00102c80");
extern "C" void func_0013efe8() asm("func_0013efe8");

// 0x0013f498 func_0013f498
u32 func_0013f498() asm("func_0013f498");
u32 func_0013f498() {
    func_0013efe8();
    return func_00102788(*(u32*)((func_00102c80() + 4)), 0, 0x493e0, (u32)&D_0013f428);
}
