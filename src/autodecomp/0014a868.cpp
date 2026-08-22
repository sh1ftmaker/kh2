// coverage: addr=0x0014a868 symbol=_Z13func_0014a868ii size=112 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:97.82;m2c:near:96.14
#include "common/types.h"

extern "C" u32 D_00348698 asm("D_00348698");
extern "C" u32 D_00349270 asm("D_00349270");
extern "C" void func_0013ee88(u32, u32) asm("func_0013ee88");

// 0x0014a868 func_0014a868(int, int)
void lift_0014a868(u32 a0, u32 a1) asm("_Z13func_0014a868ii");
void lift_0014a868(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_0013ee88((u32)&D_00349270, a1);
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            *(u32*)(&D_00349270) = (u32)&D_00348698;
        }
    }
    return;
}
