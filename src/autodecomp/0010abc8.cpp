// coverage: addr=0x0010abc8 symbol=func_0010abc8 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:50.33
#include "common/types.h"

extern "C" u32 D_00340ea8 asm("D_00340ea8");

// 0x0010abc8 func_0010abc8
u32 func_0010abc8(u32 a0) asm("func_0010abc8");
u32 func_0010abc8(u32 a0) {
    u32 v0;
    v0 = *(u32*)(&D_00340ea8);
    *(u32*)(&D_00340ea8) = (*(u32*)(&D_00340ea8) + ((a0 + 3) & 0xfffffffc));
    return v0;
}
