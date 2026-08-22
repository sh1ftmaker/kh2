// coverage: addr=0x00154af0 symbol=func_00154af0 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:94.0
#include "common/types.h"

extern "C" u32 func_00139ba0(u32) asm("func_00139ba0");
extern "C" void func_00139948(u32) asm("func_00139948");

// 0x00154af0 func_00154af0
u32 func_00154af0(u32 a0) asm("func_00154af0");
u32 func_00154af0(u32 a0) {
    *(u8*)((a0 + 0x3ce0)) = 1;
    func_00139948(6);
    return func_00139ba0(6);
}
