// coverage: addr=0x002eda40 symbol=_Z16wtarget_002eda40jjjj size=80 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.14;ghidra:near:34.86
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_001991a8(u32, u32) asm("func_001991a8");

// 0x002eda40 wtarget_002eda40(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_002eda40(u32 a0) asm("_Z16wtarget_002eda40jjjj");
void lift_002eda40(u32 a0) {
    f32 f1;
    f32 f0;
    f1 = *(f32*)(a0);
    if ((0.0f < f1)) {
        f0 = *(f32*)(&D_00349e10);
        *(f32*)(a0) = (f1 - f0);
        if (((f1 - f0) <= 0.0f)) {
            func_001991a8(0x97, 0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
