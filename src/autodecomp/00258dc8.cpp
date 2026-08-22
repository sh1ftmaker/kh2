// coverage: addr=0x00258dc8 symbol=func_00258dc8 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:99.7;ghidra:near:70.0;m2c:near:49.93
#include "common/types.h"

extern "C" u32 D_0035f090 asm("D_0035f090");
extern "C" u32 D_0035f092 asm("D_0035f092");
extern "C" u32 D_0035f094 asm("D_0035f094");
extern "C" u32 D_0035f096 asm("D_0035f096");

// 0x00258dc8 func_00258dc8
void func_00258dc8() asm("func_00258dc8");
void func_00258dc8() {
    *(u16*)(&D_0035f090) = 0xffffffff;
    *(u16*)(&D_0035f092) = 0xffffffff;
    *(u16*)(&D_0035f094) = 0xffffffff;
    *(u16*)(&D_0035f096) = 0xffffffff;
}
