// coverage: addr=0x00236148 symbol=func_00236148 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.29;e3:near:64.33;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_0035e370 asm("D_0035e370");
extern "C" u32 D_0035e380 asm("D_0035e380");

// 0x00236148 func_00236148
void func_00236148() asm("func_00236148");
void func_00236148() {
    ((void(*)())(*(u32*)(((*(u32*)(&D_0035e370) << 2) + (u32)&D_0035e380))))();
}
