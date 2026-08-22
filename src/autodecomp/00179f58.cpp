// coverage: addr=0x00179f58 symbol=func_00179f58 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0;e3:near:32.83
#include "common/types.h"

extern "C" u32 func_001781a8(u32) asm("func_001781a8");
extern "C" void func_00179f10(u32) asm("func_00179f10");

// 0x00179f58 func_00179f58
u32 func_00179f58(u32 a0) asm("func_00179f58");
u32 func_00179f58(u32 a0) {
    func_00179f10(a0);
    return func_001781a8(a0);
}
