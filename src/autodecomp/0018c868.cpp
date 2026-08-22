// coverage: addr=0x0018c868 symbol=_Z16wtarget_0018c868jjjj size=44 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:88.0;ghidra:near:57.73
#include "common/types.h"

extern "C" u32 D_01c60be8 asm("D_01c60be8");

// 0x0018c868 wtarget_0018c868(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036cc20   (float literals live here in the original)
void lift_0018c868(u32 a0, u32 a1) asm("_Z16wtarget_0018c868jjjj");
void lift_0018c868(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01c60be8) = 0.3490658402442932f;
        }
    }
    return;
}
