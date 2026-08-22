// coverage: addr=0x00224950 symbol=func_00224950 size=24 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:90.0;m2c:near:46.5
#include "common/types.h"

extern "C" u32 D_0035dadc asm("D_0035dadc");
extern "C" u32 D_0035dae0 asm("D_0035dae0");

// 0x00224950 func_00224950
void func_00224950(u32 a0) asm("func_00224950");
void func_00224950(u32 a0) {
    *(u8*)(&D_0035dadc) = 1;
    *(u32*)(&D_0035dae0) = a0;
}
