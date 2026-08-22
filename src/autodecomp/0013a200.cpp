// coverage: addr=0x0013a200 symbol=func_0013a200 size=24 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;corpus:near:96.17;m2c:near:70.25
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f84 asm("D_00347f84");

// 0x0013a200 func_0013a200
void func_0013a200() asm("func_0013a200");
void func_0013a200() {
    u32 t6;
    t6 = *(u32*)(&D_00347f84);
    *(u32*)(&D_00347f80) = t6;
    *(u32*)(&D_00347f84) = 0;
}
