// coverage: addr=0x001d9ca0 symbol=_Z16wtarget_001d9ca0jjjj size=64 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:96.19
#include "common/types.h"

extern "C" u32 D_01d5baa0 asm("D_01d5baa0");
extern "C" u32 func_001d9a18(u32, u32) asm("func_001d9a18");

// 0x001d9ca0 wtarget_001d9ca0(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001d9ca0(u32 a0, u32 a1) asm("_Z16wtarget_001d9ca0jjjj");
void lift_001d9ca0(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_001d9a18((u32)&D_01d5baa0, 0xffffffff);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
