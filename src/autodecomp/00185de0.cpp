// coverage: addr=0x00185de0 symbol=_Z16ctarget_00185de0jjjj size=64 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:94.12;m2c:near:90.47;e3:near:49.38
#include "common/types.h"

extern "C" u32 D_01c608b8 asm("D_01c608b8");
extern "C" u32 func_0016b0d0() asm("func_0016b0d0");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");

// 0x00185de0 ctarget_00185de0(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_00185de0() asm("_Z16ctarget_00185de0jjjj");
u32 lift_00185de0() {
    if (((s32)(func_0019ba60(*(u32*)(&D_01c608b8))) == 0)) {
        return func_0016b0d0();
    } else {
        return *(u32*)(&D_01c608b8);
    }
}
