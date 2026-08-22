// coverage: addr=0x00224780 symbol=_Z16u_call4_00224780jjjj size=88 class=straight source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:94.45;m2c:near:51.73;ghidra:near:50.82
#include "common/types.h"

extern "C" u32 D_0035dac4 asm("D_0035dac4");
extern "C" u32 D_0035dac8 asm("D_0035dac8");
extern "C" u32 D_0035dacc asm("D_0035dacc");
extern "C" u32 D_0035dad0 asm("D_0035dad0");
extern "C" u32 D_0035dad4 asm("D_0035dad4");
extern "C" u32 D_0035dad8 asm("D_0035dad8");
extern "C" u32 D_0035dadd asm("D_0035dadd");
extern "C" u32 D_0035dade asm("D_0035dade");
extern "C" u32 func_00224940(u32) asm("func_00224940");

// 0x00224780 u_call4_00224780(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_00224780(u32 a0) asm("_Z16u_call4_00224780jjjj");
u32 lift_00224780(u32 a0) {
    *(u32*)(&D_0035dad0) = a0;
    *(u8*)(&D_0035dade) = 0;
    *(u32*)(&D_0035dad4) = 5;
    *(u8*)(&D_0035dadd) = 0;
    *(u32*)(&D_0035dac4) = 0;
    *(u32*)(&D_0035dac8) = 0;
    *(u32*)(&D_0035dacc) = 0;
    *(u32*)(&D_0035dad8) = 0;
    return func_00224940(a0);
}
