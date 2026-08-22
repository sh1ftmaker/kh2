// coverage: addr=0x0014d8d0 symbol=func_0014d8d0 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:70.12
#include "common/types.h"

extern "C" u32 D_00349ef8 asm("D_00349ef8");
extern "C" u32 func_002f3918(u32, u32) asm("func_002f3918");
extern "C" void func_002f25a0(u32, u32) asm("func_002f25a0");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x0014d8d0 func_0014d8d0
u32 func_0014d8d0(u32 a0) asm("func_0014d8d0");
u32 func_0014d8d0(u32 a0) {
    func_003058a0(0);
    func_002f25a0(0, 0);
    return func_002f3918(*(u32*)(&D_00349ef8), a0);
}
