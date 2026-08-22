// coverage: addr=0x0014d910 symbol=func_0014d910 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:66.13
#include "common/types.h"

extern "C" u32 D_00349ef8 asm("D_00349ef8");
extern "C" u32 func_002f3918(u32, u32) asm("func_002f3918");
extern "C" void func_002f25a0(u32, u32) asm("func_002f25a0");

// 0x0014d910 func_0014d910
u32 func_0014d910(u32 a0) asm("func_0014d910");
u32 func_0014d910(u32 a0) {
    func_002f25a0(0, 0);
    return func_002f3918(*(u32*)(&D_00349ef8), a0);
}
