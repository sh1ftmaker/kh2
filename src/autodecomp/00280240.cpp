// coverage: addr=0x00280240 symbol=func_00280240 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:94.8;e3:near:42.05
#include "common/types.h"

extern "C" u32 D_0035f264 asm("D_0035f264");
extern "C" u32 func_0028dac8(u32, u32) asm("func_0028dac8");

// 0x00280240 func_00280240
u32 func_00280240() asm("func_00280240");
u32 func_00280240() {
    func_0028dac8(*(u32*)(&D_0035f264) + 0x18, 9);
    func_0028dac8(*(u32*)(&D_0035f264) + 0x1cc, 0xc);
    return func_0028dac8(*(u32*)(&D_0035f264) + 0x380, 3);
}
