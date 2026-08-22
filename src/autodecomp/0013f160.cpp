// coverage: addr=0x0013f160 symbol=_ZN2dk10JumpEffect8outClearEv size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_0014aa80(u32, u32, u32) asm("func_0014aa80");
extern "C" u32 func_0014aba8() asm("func_0014aba8");
extern "C" void func_0013f030() asm("func_0013f030");
extern "C" void func_0013f048() asm("func_0013f048");

// 0x0013f160 dk::JumpEffect::outClear()
u32 lift_0013f160() asm("_ZN2dk10JumpEffect8outClearEv");
u32 lift_0013f160() {
    func_0013f030();
    func_0013f048();
    return func_0014aa80(func_0014aba8(), 1, 0);
}
