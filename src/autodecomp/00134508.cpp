// coverage: addr=0x00134508 symbol=_Z13func_00134508ii size=116 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:0.0
#include "common/types.h"

extern "C" u32 D_00347c88 asm("D_00347c88");
extern "C" u32 func_00133590(u32) asm("func_00133590");
extern "C" void func_00133570(u32, u32) asm("func_00133570");

// 0x00134508 func_00134508(int, int)
void lift_00134508(u32 a0, u32 a1) asm("_Z13func_00134508ii");
void lift_00134508(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_00133570((u32)&D_00347c88, a1);
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            func_00133590((u32)&D_00347c88);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
