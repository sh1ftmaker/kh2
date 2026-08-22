// coverage: addr=0x0013f4d8 symbol=func_0013f4d8 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:94.81;m2c:near:87.5
#include "common/types.h"

extern "C" u32 _ZN2dk14StopJumpEffect17jumpEffectIn_taskEP4TASK asm("_ZN2dk14StopJumpEffect17jumpEffectIn_taskEP4TASK");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");
extern "C" u32 func_00102c80() asm("func_00102c80");
extern "C" void func_0013f030() asm("func_0013f030");

// 0x0013f4d8 func_0013f4d8
u32 func_0013f4d8() asm("func_0013f4d8");
u32 func_0013f4d8() {
    func_0013f030();
    return func_00102818(*(u32*)((func_00102c80() + 4)), 1, 0x493e0, (u32)&_ZN2dk14StopJumpEffect17jumpEffectIn_taskEP4TASK, 0x1000);
}
