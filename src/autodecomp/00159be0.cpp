// coverage: addr=0x00159be0 symbol=_ZN2dk10TalkCamera10ensureTaskEP4TASK size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0;corpus:near:74.69
#include "common/types.h"

extern "C" u32 func_001024a8(u32) asm("func_001024a8");
extern "C" u32 func_00140df0() asm("func_00140df0");
extern "C" void func_00140dd0(u32) asm("func_00140dd0");
extern "C" void func_00140f10(u32) asm("func_00140f10");

// 0x00159be0 dk::TalkCamera::ensureTask(TASK*)
u32 lift_00159be0(u32 a0) asm("_ZN2dk10TalkCamera10ensureTaskEP4TASK");
u32 lift_00159be0(u32 a0) {
    func_00140f10(func_00140df0());
    func_00140dd0(func_00140df0());
    return func_001024a8(a0);
}
