// coverage: addr=0x001d3060 symbol=_Z16wtarget_001d3060jjjj size=44 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:88.0;ghidra:near:57.73
#include "common/types.h"

extern "C" u32 D_01d5ba08 asm("D_01d5ba08");

// 0x001d3060 wtarget_001d3060(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036e3f8   (float literals live here in the original)
void lift_001d3060(u32 a0, u32 a1) asm("_Z16wtarget_001d3060jjjj");
void lift_001d3060(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01d5ba08) = 1.570796251296997f;
        }
    }
    return;
}
