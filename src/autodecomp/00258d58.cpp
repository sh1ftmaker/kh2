// coverage: addr=0x00258d58 symbol=func_00258d58 size=28 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:35.38;ghidra:near:24.0
#include "common/types.h"

extern "C" u32 D_0035f090 asm("D_0035f090");
extern "C" u32 D_0035f092 asm("D_0035f092");
extern "C" u32 D_0035f096 asm("D_0035f096");

// 0x00258d58 func_00258d58
void func_00258d58(u32 a0, u32 a1, u32 a2) asm("func_00258d58");
void func_00258d58(u32 a0, u32 a1, u32 a2) {
    *(u16*)(&D_0035f090) = a0;
    *(u16*)(&D_0035f092) = a1;
    *(u16*)(&D_0035f096) = a2;
}
