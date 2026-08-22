// coverage: addr=0x0013b4b0 symbol=_ZN2dk12COMMAND_DRAW2onEv size=84 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:97.14;ghidra:near:97.14;m2c:near:92.64
#include "common/types.h"

extern "C" u32 D_003484a0 asm("D_003484a0");
extern "C" u32 func_00139ab0(u32) asm("func_00139ab0");
extern "C" void func_00139858(u32) asm("func_00139858");

// 0x0013b4b0 dk::COMMAND_DRAW::on()
void lift_0013b4b0() asm("_ZN2dk12COMMAND_DRAW2onEv");
void lift_0013b4b0() {
    if (((s32)(*(u32*)(&D_003484a0)) != 0)) {
        if (((s32)(*(u8*)((*(u32*)(&D_003484a0) + 0x2a8))) != 0)) {
            func_00139858(2);
            func_00139858(1);
            func_00139ab0(2);
            func_00139ab0(1);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
