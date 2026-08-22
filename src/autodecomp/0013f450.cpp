// coverage: addr=0x0013f450 symbol=_ZN2dk14StopJumpEffect17jumpEffectIn_taskEP4TASK size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_0013f048() asm("func_0013f048");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_0014e098(u32) asm("func_0014e098");

// 0x0013f450 dk::StopJumpEffect::jumpEffectIn_task(TASK*)
u32 lift_0013f450(u32 a0) asm("_ZN2dk14StopJumpEffect17jumpEffectIn_taskEP4TASK");
u32 lift_0013f450(u32 a0) {
    func_0014e098(0xd8);
    func_00102448(a0, 0);
    func_0014e098(0xd8);
    func_00102448(a0, 0);
    return func_0013f048();
}
