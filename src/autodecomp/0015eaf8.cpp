// coverage: addr=0x0015eaf8 symbol=_Z16wtarget_0015eaf8jjjj size=112 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:97.86;m2c:near:96.1
#include "common/types.h"

extern "C" u32 D_00348698 asm("D_00348698");
extern "C" u32 D_004f3820 asm("D_004f3820");
extern "C" void func_0014c050(u32, u32) asm("func_0014c050");

// 0x0015eaf8 wtarget_0015eaf8(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_0015eaf8(u32 a0, u32 a1) asm("_Z16wtarget_0015eaf8jjjj");
void lift_0015eaf8(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_0014c050((u32)&D_004f3820, a1);
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            *(u32*)(&D_004f3820) = (u32)&D_00348698;
        }
    }
    return;
}
