// coverage: addr=0x001a5b08 symbol=_Z16wtarget_001a5b08jjjj size=44 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:88.0;ghidra:near:57.73
#include "common/types.h"

extern "C" u32 D_01c6cb18 asm("D_01c6cb18");

// 0x001a5b08 wtarget_001a5b08(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036d4e4   (float literals live here in the original)
void lift_001a5b08(u32 a0, u32 a1) asm("_Z16wtarget_001a5b08jjjj");
void lift_001a5b08(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01c6cb18) = 0.5235987305641174f;
        }
    }
    return;
}
