// coverage: addr=0x002eaee8 symbol=_Z16wtarget_002eaee8jjjj size=44 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:88.0;ghidra:near:57.73
#include "common/types.h"

extern "C" u32 D_003634f0 asm("D_003634f0");

// 0x002eaee8 wtarget_002eaee8(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x003760dc   (float literals live here in the original)
void lift_002eaee8(u32 a0, u32 a1) asm("_Z16wtarget_002eaee8jjjj");
void lift_002eaee8(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_003634f0) = 0.39269906282424927f;
        }
    }
    return;
}
