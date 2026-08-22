// coverage: addr=0x0017e808 symbol=_Z16wtarget_0017e808jjjj size=44 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:88.0;ghidra:near:57.73
#include "common/types.h"

extern "C" u32 D_01c60520 asm("D_01c60520");

// 0x0017e808 wtarget_0017e808(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036c584   (float literals live here in the original)
void lift_0017e808(u32 a0, u32 a1) asm("_Z16wtarget_0017e808jjjj");
void lift_0017e808(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01c60520) = 0.3490658402442932f;
        }
    }
    return;
}
