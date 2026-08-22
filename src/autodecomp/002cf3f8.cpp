// coverage: addr=0x002cf3f8 symbol=_Z16ctarget_002cf3f8jjjj size=64 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:77.61;corpus:near:74.69
#include "common/types.h"

extern "C" u32 D_00361fa0 asm("D_00361fa0");
extern "C" u32 D_00361fa4 asm("D_00361fa4");
extern "C" void func_00106450(u32) asm("func_00106450");

// 0x002cf3f8 ctarget_002cf3f8(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_002cf3f8() asm("_Z16ctarget_002cf3f8jjjj");
void lift_002cf3f8() {
    if (((s32)(*(u32*)(&D_00361fa4)) != 0)) {
        func_00106450(*(u32*)(&D_00361fa4));
    }
    *(u32*)(&D_00361fa0) = 0;
    *(u32*)(&D_00361fa4) = 0;
    return;
}
