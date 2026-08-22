// coverage: addr=0x00161ee8 symbol=func_00161ee8 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:86.67;ghidra:near:86.67;m2c:near:51.38
#include "common/types.h"

extern "C" u32 D_0034c770 asm("D_0034c770");
extern "C" u32 D_0034c771 asm("D_0034c771");
extern "C" u32 D_0034c774 asm("D_0034c774");
extern "C" u32 D_0034c778 asm("D_0034c778");

// 0x00161ee8 func_00161ee8
void func_00161ee8() asm("func_00161ee8");
void func_00161ee8() {
    *(u8*)(&D_0034c770) = 0;
    *(u8*)(&D_0034c771) = 0;
    *(u32*)(&D_0034c774) = 0;
    *(u32*)(&D_0034c778) = 0;
}
