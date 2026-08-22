// coverage: addr=0x00154b18 symbol=func_00154b18 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:93.33;corpus:near:77.22
#include "common/types.h"

extern "C" u32 func_00139b28(u32) asm("func_00139b28");
extern "C" void func_001399c0(u32) asm("func_001399c0");

// 0x00154b18 func_00154b18
u32 func_00154b18(u32 a0) asm("func_00154b18");
u32 func_00154b18(u32 a0) {
    *(u8*)((a0 + 0x3ce0)) = 0;
    func_001399c0(6);
    return func_00139b28(6);
}
