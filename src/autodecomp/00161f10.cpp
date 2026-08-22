// coverage: addr=0x00161f10 symbol=_ZN2dk6Camera14storeImageTaskEP4TASK size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001024a8(u32) asm("func_001024a8");
extern "C" void func_0014e0d8(u32) asm("func_0014e0d8");

// 0x00161f10 dk::Camera::storeImageTask(TASK*)
u32 lift_00161f10(u32 a0) asm("_ZN2dk6Camera14storeImageTaskEP4TASK");
u32 lift_00161f10(u32 a0) {
    func_0014e0d8(a0);
    return func_001024a8(a0);
}
