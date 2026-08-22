// coverage: addr=0x00258a88 symbol=func_00258a88 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;corpus:near:80.0;m2c:near:55.92
#include "common/types.h"

extern "C" u32 D_0035f074 asm("D_0035f074");
extern "C" u32 func_0023fa08(u32, u32) asm("func_0023fa08");
extern "C" u32 func_002537c8(u32) asm("func_002537c8");

// 0x00258a88 func_00258a88
u32 func_00258a88() asm("func_00258a88");
u32 func_00258a88() {
    return func_0023fa08(*(u32*)(&D_0035f074), func_002537c8(0));
}
