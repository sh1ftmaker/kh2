// coverage: addr=0x00258d78 symbol=func_00258d78 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:97.53
#include "common/types.h"

extern "C" u32 func_00258d58(u32, u32, u32) asm("func_00258d58");
extern "C" void func_00258d40(u32, u32, u32, u32) asm("func_00258d40");

// 0x00258d78 func_00258d78
u32 func_00258d78(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00258d78");
u32 func_00258d78(u32 a0, u32 a1, u32 a2, u32 a3) {
    func_00258d40(a0, a2, a2, a3);
    return func_00258d58(a0, a1, a3);
}
