// coverage: addr=0x0023cdb8 symbol=func_0023cdb8 size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;corpus:near:66.88;m2c:near:63.64
#include "common/types.h"

extern "C" u32 D_0035eb28 asm("D_0035eb28");
extern "C" u32 D_0035eb34 asm("D_0035eb34");
extern "C" u32 D_01dae680 asm("D_01dae680");

// 0x0023cdb8 func_0023cdb8
void func_0023cdb8() asm("func_0023cdb8");
void func_0023cdb8() {
    *(u32*)(&D_0035eb34) = 1;
    *(u32*)(&D_0035eb28) = 0;
    *(u32*)(&D_01dae680) = 0;
}
