// coverage: addr=0x002ee850 symbol=_Z16wtarget_002ee850jjjj size=56 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;m2c:exact:100.0;ghidra:near:95.64;corpus:near:81.43
#include "common/types.h"

extern "C" u32 D_01e2c088 asm("D_01e2c088");
extern "C" u32 func_002ee730(u32) asm("func_002ee730");

// 0x002ee850 wtarget_002ee850(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_002ee850(u32 a0, u32 a1) asm("_Z16wtarget_002ee850jjjj");
void lift_002ee850(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_002ee730((u32)&D_01e2c088);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
