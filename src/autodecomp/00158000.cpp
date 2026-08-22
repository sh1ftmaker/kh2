// coverage: addr=0x00158000 symbol=_Z16wtarget_00158000jjjj size=44 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:88.0;ghidra:near:57.73
#include "common/types.h"

extern "C" u32 D_004f3588 asm("D_004f3588");

// 0x00158000 wtarget_00158000(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036b304   (float literals live here in the original)
void lift_00158000(u32 a0, u32 a1) asm("_Z16wtarget_00158000jjjj");
void lift_00158000(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_004f3588) = 0.07853981107473373f;
        }
    }
    return;
}
