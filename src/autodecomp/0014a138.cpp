// coverage: addr=0x0014a138 symbol=_ZN2dk5Field10TitleStartEb size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:99.74;ghidra:near:93.05;m2c:near:69.05
#include "common/types.h"

extern "C" u32 D_0032b96c asm("D_0032b96c");
extern "C" u32 _ZN2dk5Field14execTitle_taskEP4TASK asm("_ZN2dk5Field14execTitle_taskEP4TASK");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");

// 0x0014a138 dk::Field::TitleStart(bool)
u32 lift_0014a138(u8 a0) asm("_ZN2dk5Field10TitleStartEb");
u32 lift_0014a138(u8 a0) {
    u32 v0;
    v0 = func_00102818(*(u32*)(&D_0032b96c), 0, 0x493e0, (u32)&_ZN2dk5Field14execTitle_taskEP4TASK, 0x1000);
    *(u8*)((v0 + 4)) = a0;
    return v0;
}
