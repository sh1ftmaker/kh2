// coverage: addr=0x00281e70 symbol=func_00281e70 size=20 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:near:88.0;m2c:near:70.86
#include "common/types.h"

extern "C" u32 D_0035f28c asm("D_0035f28c");
extern "C" u32 D_0035f299 asm("D_0035f299");

// 0x00281e70 func_00281e70
void func_00281e70(u32 a0) asm("func_00281e70");
void func_00281e70(u32 a0) {
    *(u32*)(&D_0035f28c) = a0;
    *(u8*)(&D_0035f299) = 0;
}
