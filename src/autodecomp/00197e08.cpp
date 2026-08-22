// coverage: addr=0x00197e08 symbol=func_00197e08 size=56 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:near:61.93
#include "common/types.h"

extern "C" u32 D_0035037c asm("D_0035037c");
extern "C" u32 func_001d32e8(u32, u32, u32) asm("func_001d32e8");

// 0x00197e08 func_00197e08
void func_00197e08(u32 a0, u32 a1) asm("func_00197e08");
void func_00197e08(u32 a0, u32 a1) {
    if (((s32)(*(u32*)(&D_0035037c)) != 0)) {
        func_001d32e8(*(u32*)(&D_0035037c) + 0x40, a0, a1);
        return;
    } else {
        return;
    }
}
