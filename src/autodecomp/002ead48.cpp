// coverage: addr=0x002ead48 symbol=_Z16wtarget_002ead48jjjj size=44 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:88.0;ghidra:near:57.73
#include "common/types.h"

extern "C" u32 D_00363448 asm("D_00363448");

// 0x002ead48 wtarget_002ead48(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x003760d4   (float literals live here in the original)
void lift_002ead48(u32 a0, u32 a1) asm("_Z16wtarget_002ead48jjjj");
void lift_002ead48(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_00363448) = 0.39269906282424927f;
        }
    }
    return;
}
