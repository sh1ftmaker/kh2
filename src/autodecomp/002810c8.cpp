// coverage: addr=0x002810c8 symbol=func_002810c8 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:93.33;e3:near:41.11
#include "common/types.h"

extern "C" u32 func_00280ef8(u32, u32) asm("func_00280ef8");
extern "C" void func_00281008(u32, u32) asm("func_00281008");

// 0x002810c8 func_002810c8
u32 func_002810c8(u32 a0, u32 a1) asm("func_002810c8");
u32 func_002810c8(u32 a0, u32 a1) {
    func_00281008(a0, a1);
    return func_00280ef8(a0, a1);
}
