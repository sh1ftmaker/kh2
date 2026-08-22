// coverage: addr=0x001069b8 symbol=func_001069b8 size=24 class=straight source=permute status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;corpus:near:96.17;lift:near:95.83;m2c:near:71.25
#include "common/types.h"

extern "C" u32 D_0033cc38 asm("D_0033cc38");
extern "C" u32 D_0033cc3c asm("D_0033cc3c");

// 0x001069b8 func_001069b8
void func_001069b8(u32 a0) asm("func_001069b8");
void func_001069b8(u32 a0) {
    u32 t6;
    t6 = *(u32*)(&D_0033cc38);
    *(u32*)(&D_0033cc3c) = t6;
    *(u32*)(&D_0033cc38) = a0;
}
