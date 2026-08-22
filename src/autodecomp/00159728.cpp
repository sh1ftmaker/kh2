// coverage: addr=0x00159728 symbol=_Z16wtarget_00159728jjjj size=44 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:88.0;ghidra:near:57.73
#include "common/types.h"

extern "C" u32 D_004f35b0 asm("D_004f35b0");

// 0x00159728 wtarget_00159728(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036b360   (float literals live here in the original)
void lift_00159728(u32 a0, u32 a1) asm("_Z16wtarget_00159728jjjj");
void lift_00159728(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_004f35b0) = 1.0471974611282349f;
        }
    }
    return;
}
